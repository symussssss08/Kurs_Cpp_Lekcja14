// Kurs_Cpp_Lekcja14.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.


#include <iostream>
#include "nagłówek.h"

using namespace std; 

int main()
{
    int a = 5;

    cout << "Przed dzialaniem funkcji: " << &a << " : " << a << endl;
    zmien(&a);
    cout << "Po dzialaniu funkcji: " << &a << " : " << a << endl << endl;
    

    int tab[] = {5};

    cout << "Przed dzialaniem funkcji: " << tab << " : " << tab[0] << endl;
    zmien(tab);
    cout << "Po dzialaniu funkcji: " << tab << " : " << tab[0] << endl;

    return 0;
}

void zmien(int *x)
{
    *x = -1;
    cout << "Funkcja: " << x << " : " << *x << endl << endl;
}


    // cos przy tym jeszcze nie dziala 

void zmien(int tab[])
{
    int tab2[] = {-1};
    tab = tab2;
    cout << "Funkcja: " << tab << " : " << tab[0] << endl;
}



