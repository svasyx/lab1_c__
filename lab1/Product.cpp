#include "Product.h"



void Product::SetHesh(const char* hesh) /*���� � ������*/
{
	delete[]_hesh;
	int len = strlen(hesh);
	this->_hesh = new char[len + 1];
	strcpy(this->_hesh, hesh);
	cout << "\nSetter ���������� ��� �ᒺ��� " << this << "\n" << endl;
}

char* Product::GetHesh()/*���� � ������*/
{
	int len = strlen(this->_hesh);
	char* hesh = new char[len + 1];
	strcpy(hesh, this->_hesh);
	return hesh;
	cout << "\nGetter ���������� ��� �ᒺ��� " << this << "\n" << endl;
}

void Product::SetName(const char* name)/*���� � ������*/
{
	delete[]_name;
	int len = strlen(name);
	this->_name = new char[len + 1];
	strcpy(this->_name, name);
	cout << "\nSetter ���������� ��� �ᒺ��� " << this << "\n" << endl;

}

char* Product::GetName()/*���� � ������*/
{
	int len = strlen(this->_name);
	char* name = new char[len + 1];
	strcpy(name, this->_name);

	return name;
	cout << "\nGetter ���������� ��� �ᒺ��� " << this << "\n" << endl;
}

void Product::SetWeight(int weight)/*���� � �����*/
{

	this->_weight = weight;
	checkweight(weight);

	cout << "\nSetter ���������� ��� �ᒺ��� " << this << "\n" << endl;
}

int Product::GetWeight()/*���� � �����*/
{
	float weight = 0;
	weight = this->_weight;

	return weight;
	cout << "\nGetter ���������� ��� �ᒺ��� " << this << "\n" << endl;
}

void Product::EnterName(char* name)/*�������� ����� � ���������*/
{


	cout << "������ �����" << endl;


	fgets(name, 1024, stdin);

	name[strlen(name) - 1] = ' ';
	SetName(name);

}

void Product::EnterHesh(char* hesh)/*�������� ����� � ���������*/
{

	cout << "\n" << "������ ����" << "\n" << endl;

	fgets(hesh, 1024, stdin);

	hesh[strlen(hesh) - 1] = ' ';
	SetHesh(hesh);

}

void Product::EnterWeight()/*�������� ���� � ���������*/
{
	float weight;

	cout << "\n" << "������ ����" << "\n" << endl;
	cin >> weight;
	checkweight(weight);
	SetWeight(weight);



}

Product::~Product()/*����������*/
{
	delete[]this->_hesh;
	cout << "\n���������� ���������� ��� �ᒺ��� \n" << this << "\n" << endl;
	delete[]this->_name;
	cout << "\n���������� ���������� ��� �ᒺ��� \n" << this << "\n" << endl;

}

void Product::checkweight(int weight)/*�������� ����*/
{
	if (weight < 0)
	{
		cout << " weight < 0" << endl;
		exit(0);
	}
}

Product::Product() /*����������� �� �����������*/
{
	this->_weight = 0;
	this->_name = nullptr;
	this->_hesh = nullptr;
}

Product::Product(const char* hesh, const char* name, int weight) /*����������� � �����������*/
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
	cout << "\n����������� � ����������� ���������� ��� �ᒺ���  " << this << endl;
}

Product::Product(const Product& prod) /*����������� ���������*/
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
	cout << "\n����������� ��������� ���������� ��� �ᒺ��� " << this << endl;
}

void Product::Print()/*���� �����*/
{
	cout << "Hesh:" << this->_hesh << endl;
	cout << "Name:" << this->_name << endl;
	cout << "weight:" << this->_weight << endl;

}
