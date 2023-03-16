#include "Product.h"



void Product::SetHesh(const char* hesh) /*Сетр з шифром*/
{
	delete[]_hesh;
	int len = strlen(hesh);
	this->_hesh = new char[len + 1];
	strcpy(this->_hesh, hesh);
	cout << "\nSetter викликаний для об’єкта " << this << "\n" << endl;
}

char* Product::GetHesh()/*Гетр з шифром*/
{
	int len = strlen(this->_hesh);
	char* hesh = new char[len + 1];
	strcpy(hesh, this->_hesh);
	return hesh;
	cout << "\nGetter викликаний для об’єкта " << this << "\n" << endl;
}

void Product::SetName(const char* name)/*Сетр з назвою*/
{
	delete[]_name;
	int len = strlen(name);
	this->_name = new char[len + 1];
	strcpy(this->_name, name);
	cout << "\nSetter викликаний для об’єкта " << this << "\n" << endl;

}

char* Product::GetName()/*Гетр з назвою*/
{
	int len = strlen(this->_name);
	char* name = new char[len + 1];
	strcpy(name, this->_name);

	return name;
	cout << "\nGetter викликаний для об’єкта " << this << "\n" << endl;
}

void Product::SetWeight(int weight)/*Сетр з вагою*/
{

	this->_weight = weight;
	checkweight(weight);

	cout << "\nSetter викликаний для об’єкта " << this << "\n" << endl;
}

int Product::GetWeight()/*гетр з вагою*/
{
	float weight = 0;
	weight = this->_weight;

	return weight;
	cout << "\nGetter викликаний для об’єкта " << this << "\n" << endl;
}

void Product::EnterName(char* name)/*Введення назви з клавіатури*/
{


	cout << "Введіть назву" << endl;


	fgets(name, 1024, stdin);

	name[strlen(name) - 1] = ' ';
	SetName(name);

}

void Product::EnterHesh(char* hesh)/*Введення шифру з клавіатури*/
{

	cout << "\n" << "Введіть шифр" << "\n" << endl;

	fgets(hesh, 1024, stdin);

	hesh[strlen(hesh) - 1] = ' ';
	SetHesh(hesh);

}

void Product::EnterWeight()/*Введення ваги з клавіатури*/
{
	float weight;

	cout << "\n" << "Введіть вагу" << "\n" << endl;
	cin >> weight;
	checkweight(weight);
	SetWeight(weight);



}

Product::~Product()/*Деструктор*/
{
	delete[]this->_hesh;
	cout << "\nДеструктор викликаний для об’єкта \n" << this << "\n" << endl;
	delete[]this->_name;
	cout << "\nДеструктор викликаний для об’єкта \n" << this << "\n" << endl;

}

void Product::checkweight(int weight)/*Перевірка ваги*/
{
	if (weight < 0)
	{
		cout << " weight < 0" << endl;
		exit(0);
	}
}

Product::Product() /*Конструктор за замовчанням*/
{
	this->_weight = 0;
	this->_name = nullptr;
	this->_hesh = nullptr;
}

Product::Product(const char* hesh, const char* name, int weight) /*Конструктор з параметрами*/
{

	this->_weight = weight;
	checkweight(weight);
	int len = strlen(name);
	int len1 = strlen(hesh);
	this->_hesh = new char[len1 + 1];
	this->_name = new char[len + 1];
	if (this->_hesh == NULL || this->_name == NULL)
	{
		cout << "Bad Allocketed" << endl;
	}
	strcpy(this->_hesh, hesh);
	strcpy(this->_name, name);
	cout << "\nКонструктор з параметрами викликаний для об’єкта  " << this << endl;
}

Product::Product(const Product& prod) /*Конструктор копіювання*/
{
	checkweight(prod._weight);
	this->_weight = prod._weight;
	int len = strlen(prod._hesh);
	int len1 = strlen(prod._name);
	this->_hesh = new char[len + 1];
	this->_name = new char[len1 + 1];
	if (this->_hesh == NULL || this->_name == NULL)
	{
		cout << "Bad Allocketed" << endl;
		exit(0);
	}
	strcpy(this->_hesh, prod._hesh);
	strcpy(this->_name, prod._name);
	cout << "\nКонструктор копіювання викликаний для об’єкта " << this << endl;
}

void Product::Print()/*Друк класу*/
{
	cout << "Hesh:" << this->_hesh << endl;
	cout << "Name:" << this->_name << endl;
	cout << "weight:" << this->_weight << endl;

}
