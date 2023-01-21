//DataTypes
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define delimiter "\n--------------------------------------------\n"

//#define NUMERIC_TYPES
//#define DECLARATION_OF_VARIABLES

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << true << endl;
	//cout << false << endl;
#if defined NUMERIC_TYPES
	cout << sizeof(long long) << endl;
	cout << 0 << " ... " << ULLONG_MAX << endl;
	cout << LLONG_MIN << " ... " << LLONG_MAX << endl;

	cout << delimiter << endl;

	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << delimiter << endl;

	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;
#endif

#if defined DECLARATION_OF_VARIABLES
	//Объявление переменных - Declaration of variable:
	int _1stPlace;
	//int for;
	int a;
	double price;
	//price = 0;
	//cout << "Введите цену чегототам: ";  cin >> price;
	//cout << price << endl;
	//undeclared identifier - необъявленный идентификатор (необъявленное имя)

	//инициализация (initialisation) - присвоение начального значения.
	//проинициализировать

	double price_of_coffe;
	//snake_case_style - общепринятый стиль в языке C++
	//camelCaseStyle (pascalCaseStyle)
	//BigCamel
	//smallCamel
	int number_of_cups;
	cout << "Введите стоимость чашки кофе: "; cin >> price_of_coffe;
	cout << "Введите количество чашек: "; cin >> number_of_cups;
	double total_price = price_of_coffe * number_of_cups;
	cout << "Общая стоимость покупки: " << total_price << "\n";
#endif // DECLARATION_OF_VARIABLES
	int speed = 0;
	const int MAX_SPEED = 250;
	cout << sizeof(5.) << endl;
	cout << typeid(5.).name() << endl;
	cout << sizeof('+') << endl;
	cout << typeid('+').name() << endl;
	cout << sizeof("+") << endl;
	cout << typeid("+").name() << endl;
}
/*
-------------------------------------------------
	//			type name;
	//Идентификатор (identifier) - это имя.

1. ABC...Zabc...z012...9_;
2.
3.
4.
-------------------------------------------------
*/