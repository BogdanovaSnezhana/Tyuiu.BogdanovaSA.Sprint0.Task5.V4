﻿// Tyuiu.BogdanovaSA.Sprint0.Task5.V4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	double distance = 67; 
	double fuelConsumption = 8.5; 
	double fuelPrice = 6.5; 

	double fuelNeeded = distance / 100 * fuelConsumption * 2; 
	double tripCost = fuelNeeded * fuelPrice; 

	std::cout << "Поездка на дачу и обратно стоит  " << tripCost <<" руб."  << std::endl;

	return 0;
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
