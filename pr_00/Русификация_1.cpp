// Русификация_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251); 
	char name[10];
	cin >> name;
	cout << name<<"   ";
    cout << "Привет!\n"; 
	printf("Привет Piter\n");
}

