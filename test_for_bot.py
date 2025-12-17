import discord
from discord.ext import commands

TOKEN = "MTQ1MDE5NDUyNDA1NDg4MDMzNg.GO7xxs.YwrZKpRS181a-noeuCjmB_rMHtXmvN3adtdrE0"
PREFIX = "/"

intents = discord.Intents.default()
intents.message_content = True
intents.voice_states = True  # Нужно, чтобы бот мог видеть голосовые состояния

bot = commands.Bot(command_prefix=PREFIX, intents=intents)


@bot.command()
async def hello(ctx):
    await ctx.reply("hi")


@bot.command()
async def test(ctx, *, data):
    await ctx.reply(data)


# /join command — bot joins the user's voice channel
@bot.command()
async def join(ctx):
    # Проверяем, в голосовом ли канале пользователь
    if ctx.author.voice is None:
        await ctx.reply("You need to join a voice channel first!")
        return

    channel = ctx.author.voice.channel

    try:
        if ctx.voice_client is not None:
            await ctx.voice_client.move_to(channel)
        else:
            await channel.connect()
        await ctx.reply(f"Connected to {channel}")
    except discord.ClientException:
        await ctx.reply("I am already connected to a voice channel!")
    except discord.Forbidden:
        await ctx.reply("I don't have permission to join that voice channel!")
    except Exception as e:
        await ctx.reply(f"An error occurred: {e}")


@bot.command()
async def leave(ctx):
    if ctx.voice_client is None:
        await ctx.reply("I am not in a voice channel!")
        return
    await ctx.voice_client.disconnect()
    await ctx.reply("Disconnected from the voice channel")


bot.run(TOKEN)
