import discord
from discord.ext import commands
import yt_dlp

TOKEN = "MTQ1MDE5NDUyNDA1NDg4MDMzNg.Gktg6o.Kfx1fq-4SBQZ0hiAWV6RWu27U4JarY6Ubt5W7M"
PREFIX = "!"

intents = discord.Intents.default()
intents.message_content = True
intents.voice_states = True  

bot = commands.Bot(command_prefix=PREFIX, intents=intents)


# ---------- SIMPLE COMMANDS ----------

@bot.command()
async def hello(ctx):
    await ctx.reply("hi")


@bot.command()
async def reply(ctx, *, data):
    await ctx.send(data)


@bot.command()
async def ez(ctx):
    await ctx.reply("ez")


# ---------- VOICE COMMANDS ----------

@bot.command()
async def join(ctx):
    if ctx.author.voice is None:
        await ctx.reply("You need to join a voice channel first!")
        return

    channel = ctx.author.voice.channel

    if ctx.voice_client is not None:
        await ctx.voice_client.move_to(channel)
    else:
        await channel.connect()

    await ctx.reply(f"Connected to {channel}")


@bot.command()
async def leave(ctx):
    if ctx.voice_client is None:
        await ctx.reply("I am not in a voice channel!")
        return

    await ctx.voice_client.disconnect()
    await ctx.reply("Disconnected from the voice channel")


# ---------- MUSIC COMMANDS ----------

@bot.command()
async def play(ctx, url: str):
    if ctx.author.voice is None:
        await ctx.reply("You need to join a voice channel first!")
        return

    voice_channel = ctx.author.voice.channel

    if ctx.voice_client is None:
        await voice_channel.connect()

    vc = ctx.voice_client

    if vc.is_playing():
        vc.stop()

    await ctx.reply("Loading music... 🎵")

    ydl_opts = {
        "format": "bestaudio[ext=webm][abr>128]",
        "quiet": True,
        "noplaylist": True,
    }

    try:
        with yt_dlp.YoutubeDL(ydl_opts) as ydl:
            info = ydl.extract_info(url, download=False)
            audio_url = info["url"]

        ffmpeg_options = {
            'before_options': '-reconnect 1 -reconnect_streamed 1 -reconnect_delay_max 5',
            'options': '-vn -ar 48000 -ac 2 -b:a 128k'
        }

        source = await discord.FFmpegOpusAudio.from_probe(audio_url, **ffmpeg_options)
        vc.play(source)

        await ctx.reply("Now playing ▶️")

    except Exception as e:
        await ctx.reply(f"Error: {e}")


@bot.command()
async def stop(ctx):
    if ctx.voice_client is None or not ctx.voice_client.is_playing():
        await ctx.reply("Nothing is playing right now!")
        return

    ctx.voice_client.stop()
    await ctx.reply("Music stopped ⏹️")


@bot.command()
async def pause(ctx):
    if ctx.voice_client is None or not ctx.voice_client.is_playing():
        await ctx.reply("Nothing is playing right now!")
        return
    ctx.voice_client.pause()
    await ctx.reply("Music paused ⏸️")


@bot.command()
async def resume(ctx):
    if ctx.voice_client is None:
        await ctx.reply("I am not connected to a voice channel!")
        return
    if not ctx.voice_client.is_paused():
        await ctx.reply("Music is not paused!")
        return
    ctx.voice_client.resume()
    await ctx.reply("Music resumed ▶️")


bot.run(TOKEN)
