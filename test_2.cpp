#include <windows.h>
#include <mmsystem.h>
#include <iostream>
#pragma comment(lib, "winmm.lib")  // обязательно для PlaySound

using namespace std;

int main() {
    cout << "Запуск музыки..." << endl;

    // Укажи путь к WAV-файлу
    PlaySound(TEXT("C:\\Users\\User\\Downloads\\Wham_-Last-Christmas.wav"), NULL, SND_FILENAME | SND_ASYNC);

    cout << "Музыка играет. Нажмите Enter, чтобы остановить..." << endl;
    cin.get();  // Ждем нажатия Enter

    return 0;
}

