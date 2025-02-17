#include <iostream>
#include<string>
#include "Employee.h"
using namespace std;
using namespace sdds;

Employee* resize(Employee* arr, int* size) {
	Employee* newEmplyees = new Employee[*size];
	for (int i = 0; i < *size-1; i++)
	{
		newEmplyees[i].SetAge(arr[i].GetAge());
		newEmplyees[i].SetName(arr[i].GetName());
	}
	arr = newEmplyees;
	newEmplyees = nullptr;
	return arr;
}

void display(Employee* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		Employee employee = *(arr + i);
		employee.toString();
	}
}

int main() {
	Employee* employees = new Employee[1];

	char Moreemployee;
	int correction{};
	int size = 1;
	while (true)
	{
		if (size>1) cin.ignore(1000, '\n');
		cout << "Enter Employee Name: ";
		char name[256];
		cin.getline( name,256);
		cout << "Enter Employee Age: ";
		int age;
		cin >> age;
		if (age < 0)
		{
			age = 0;
			cout << "Invalid age entered.Setting it to 0."<<endl;
			correction++;
		}
		cout << endl;
		Employee employee;
		employee.SetName(name);
		employee.SetAge(age);

		employees[size - 1] = employee;
		cout << "Do you want to enter another record (Yes = y , No = n): ";
		cin >> Moreemployee;

		if (Moreemployee != 'y' && Moreemployee != 'Y')
		{
			break;
		}
		size++;
		employees =resize(employees, &size);
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Below are the entries made "<<endl;
	cout << "********************************** " << endl;
	display(employees, size);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Total Records found: " << size << endl;
	cout << correction << " correction made to input data."<<endl;
	cout << "********************************** "<<endl;

	delete[] employees;
	employees = nullptr;

	system("pause");

	return 0;
}