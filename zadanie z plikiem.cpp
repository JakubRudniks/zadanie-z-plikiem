//
// pch.cpp
//

#include "pch.h"
#include <collection.h>
#include <ppltasks.h>
#include "App.xaml.h"
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    plik.open("D:\tekstowe\plik.txt");
    while (!plik.eof())
    {
        int i, n, liczba, min = 1, max = 2;

        cout << "Podaj ilosc liczb" << endl;
        cin >> n;

        for (i = 1; i <= n; i++)
        {
            cout << "Podaj liczbe" << endl;
            cin >> liczba;
        }

        for (i = 1; i < n; i++)
        {
            if (liczba > max)
            {
                max = liczba;
            }
        }

        cout << endl;
        cout << "Liczba max: " << max << endl;

        return 0;
    }
