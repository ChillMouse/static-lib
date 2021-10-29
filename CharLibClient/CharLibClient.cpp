#include <iostream>
#include <windows.h>
#include "CharLib.h"

using namespace std;

void menu()
{
    cout << "Введите число для выбора пункта меню:" << endl;
    cout << "1) Вычисление длины строки" << endl;
    cout << "2) Конкатенация двух строк" << endl;
    cout << "3) Копирование части строки" << endl;
    cout << "4) Удаление подстроки" << endl;
    cout << "5) Вставка подстроки" << endl;
    cout << "6) Поиск подстроки" << endl;
    cout << "7) Поиск подстроки с конца" << endl;
    cout << "8) Замена подстроки" << endl;
    cout << "9) Замена всех" << endl;
    cout << "10) Выход" << endl;
}
int check()
{
    while (true)
    {
        int a;
        cin >> a;
        if (cin.fail() || a <= 0 || a >= 11)
        {
            cin.clear();
            cin.ignore(1024, '\n');
            cout.clear();
            menu();
        }
        else
        {
            return a;
        }
    }
}

int main()
{
    char buf[1024], source1[1024], source2[1024];
    int userStringStart, lengthReplaces;

    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    menu();

    int a = check();

    while (true)
    {
        if (a == 1)
        {
            cout.clear();
            cout << "Введите строку" << "\n";
            cin >> buf;
            int Result = CharLib::length(buf);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться" << "\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'y')
            {
                cout.clear();
                menu();
                a = check();
            }
            else
            {
                cout.clear();
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 2)
        {
            cout.clear();
            cout << "Введите строку 1" << "\n";
            cin >> buf;
            cout << "Введите строку 2" << "\n";
            cin >> source1;
            char Result[1024];
            CharLib::concat(buf, source1, Result);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться" << "\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'y')
            {
                cout.clear();
                menu();
                a = check();
            }
            else
            {
                cout.clear();
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 3)
        {
            cout.clear();
            cout << "Введите строку 1" << "\n";
            cin >> buf;
            cout << "Введите начало строки" << "\n";
            cin >> userStringStart;
            cout << "Введите длину строки" << "\n";
            cin >> lengthReplaces;
            char Result[1024];
            CharLib::copy(buf, userStringStart, lengthReplaces, Result);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться" << "\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'y')
            {
                cout.clear();
                menu();
                a = check();
            }
            else
            {
                cout.clear();
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 4)
        {
            cout.clear();
            cout << "Введите строку 1" << "\n";
            cin >> buf;
            cout << "Введите начало строки" << "\n";
            cin >> userStringStart;
            cout << "Введите длину строки" << "\n";
            cin >> lengthReplaces;
            char Result[1024];
            CharLib::remove(buf, userStringStart, lengthReplaces, Result);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться" << "\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'y')
            {
                cout.clear();
                menu();
                a = check();
            }
            else
            {
                cout.clear();
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 5)
        {
            cout.clear();
            cout << "Введите строку 1" << "\n";
            cin >> buf;
            cout << "Введите cтрокe 2" << "\n";
            cin >> source1;
            cout << "Введите позицию вставки" << "\n";
            cin >> userStringStart;
            char Result[1024];
            CharLib::paste(buf, source1, userStringStart, Result);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться" << "\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'y')
            {
                cout.clear();
                menu();
                a = check();
            }
            else
            {
                cout.clear();
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 6)
        {
            cout.clear();
            cout << "Введите строку 1" << "\n";
            cin >> buf;
            cout << "Введите cтрокe 2" << "\n";
            cin >> source1;
            int Result;
            Result = CharLib::find(buf, source1);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться" << "\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'y')
            {
                cout.clear();
                menu();
                a = check();
            }
            else
            {
                cout.clear();
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 7)
        {
            cout.clear();
            cout << "Введите строку 1" << "\n";
            cin >> buf;
            cout << "Введите cтрокe 2" << "\n";
            cin >> source1;
            int Result;
            Result = CharLib::findEnd(buf, source1);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться" << "\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'y')
            {
                cout.clear();
                menu();
                a = check();
            }
            else
            {
                cout.clear();
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 8)
        {
            cout.clear();
            cout << "Введите строку 1" << "\n";
            cin >> buf;
            cout << "Введите cтрокe 2" << "\n";
            cin >> source1;
            cout << "Введите cтрокe 3" << "\n";
            cin >> source2;
            char Result[1024];
            CharLib::replace(buf, source1, source2, Result);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться" << "\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'y')
            {
                cout.clear();
                menu();
                a = check();
            }
            else
            {
                cout.clear();
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 9)
        {
            cout.clear();
            cout << "Введите строку 1" << "\n";
            cin >> buf;
            cout << "Введите cтрокe 2" << "\n";
            cin >> source1;
            cout << "Введите cтрокe 3" << "\n";
            cin >> source2;
            char Result[1024];
            CharLib::replaceAll(buf, source1, source2, Result);
            cout << "Результат Функции: " << Result << "\n";
            cout << "Хотите продолжить? Введите 'y' или 'Y' для согласия в противном случае программа завершиться" << "\n";
            char key;
            cin >> key;
            if (key == 'Y' || key == 'y')
            {
                cout.clear();
                menu();
                a = check();
            }
            else
            {
                cout.clear();
                cout << "Завершение работы программы" << "\n";
                break;
            }
        }
        if (a == 10)
        {
            cout.clear();
            cout << "Завершение работы программы" << "\n";
            return 0;
        }
    }
}
