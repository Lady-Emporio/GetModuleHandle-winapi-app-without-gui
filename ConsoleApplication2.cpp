// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Header.h"
#include <algorithm>

int  WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR     lpCmdLine,
    int       nShowCmd
) {
    start();
    return 0;
}
std::string FIND_WS;
std::string FIND_DS;
wchar_t w1[300];
wchar_t w2[300];
BOOL CALLBACK EnumDesktopProc(
    _In_ LPTSTR lpszDesktop,
    _In_ LPARAM lParam
) {
    /*
    std::string strD(lpszDesktop);
    std::string toFind = "Winsta0";
    std::transform(strD.begin(), strD.end(), strD.begin(), ::tolower);
    std::transform(toFind.begin(), toFind.end(), toFind.begin(), ::tolower);
    std::cout << "DesktopProc: '" << strD << "'." << std::endl;
    if (toFind == strD) {
        std::cout << "DesktopProc its Winsta0" << std::endl;
    }
    else {
        FIND_DS = strD;
        for (int i = 0; i != sizeof(lpszDesktop); ++i) {
            w1[i] = lpszDesktop[i];
        }
        return false;//stop
    }
    return true;
    */
}

BOOL CALLBACK EnumWindowStationProc(
    _In_ LPTSTR lpszWindowStation,
    _In_ LPARAM lParam
) {

/*
std::string strWindowStation(lpszWindowStation);
    std::string toFind= "Winsta0";
    std::transform(strWindowStation.begin(), strWindowStation.end(), strWindowStation.begin(), ::tolower);
    std::transform(toFind.begin(), toFind.end(), toFind.begin(), ::tolower);
    std::cout << "WindowStation: '"<< strWindowStation <<"'."<<std::endl;
    if (toFind == strWindowStation) {
        std::cout << "WindowStation its WinSta0" << std::endl;
    }
    else {
        FIND_WS = strWindowStation;
        w2 = lpszWindowStation;
        return false;//stop
    }
    return true;
    */
}



int main()
{
    std::cout << "Hello World!\n";
	start();

    /*
    std::cout << FIND_WS << std::endl;
    EnumWindowStationsA(EnumWindowStationProc,NULL);
    EnumDesktopsA(NULL, EnumDesktopProc, NULL);

    std::cout << FIND_WS <<" " << FIND_DS << std::endl;

    HWINSTA hWS;
    HDESK hDT;

    //Подключаемся к оконной станции
    hWS = OpenWindowStation(w1, FALSE, GENERIC_ALL);
    if (NULL== hWS) {
        std::cout << "error OpenWindowStation" << GetLastError() << std::endl;
    }

    if (false== SetProcessWindowStation(hWS)) {
        std::cout << "error SetProcessWindowStation" << GetLastError() << std::endl;
    }

    //Подключаемся к рабочему столу
    hDT = OpenDesktop(w2, 0, FALSE, GENERIC_ALL);
    if (NULL == hDT) {
        std::cout << "error OpenDesktop" << GetLastError()<< std::endl;
    }

    if (false == SetThreadDesktop(hDT)) {
        std::cout << "error SetThreadDesktop" << GetLastError() << std::endl;
    }
    std::cout << "we endl" << std::endl;
    */
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
