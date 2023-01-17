#include <iostream>
using namespace std;

int main()
{
	cout << "\t\t\tCalculator\n\n";
	CalculatorStartingPoint:
	cout << "Enter to numbers: ";
	double num1, num2;
	cin >> num1 >> num2;
	if (cin.fail())
	{
		cout << "error , enter a a correct number\n";
		cin.clear();
		cin.ignore(10000, '\n');
		goto CalculatorStartingPoint;
	}

MenuStartingPoint:
	cout << "Menu Options: \n"
		<< "Press 1 for sum\n"
		<< "Press 2 for substraction\n"
		<< "Press 3 for division\n"
		<< "Press 4 for multiplication\n";
	int choice;
	cin >> choice;
	if (cin.fail())
	{
		cout << "Enter number from 1 to 4\n";
		cin.clear();
		cin.ignore(10000, '\n');
		goto MenuStartingPoint;
	}
	double Last_Result = 0.0f;
	if (choice == 1)
	{
		Last_Result = num1 + num2;
	}
	else if (choice == 2)
	{
		Last_Result = num1 - num2;
	}
	else if (choice == 3)
	{
		if (num2 == 0.0)
		{
				cout << "No division by zero here pls try again\n";
				cin.clear();
				cin.ignore(10000, '\n');
				goto CalculatorStartingPoint;
		}
		Last_Result = num1 / num2;
	}
	else if (choice == 4)
	{
		Last_Result = num1 * num2;
	}
	else
	{
		if (cin.fail())
		{
			cout << "Choice are vaild from 1 to 5 only\n";
			cin.clear();
			cin.ignore(10000, '\n');
			goto CalculatorStartingPoint;
		}
	}

	cout << "Last Result = " << Last_Result << endl;
}