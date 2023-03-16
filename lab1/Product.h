#pragma once
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <iostream>


using namespace std;

class Product
{
private://приватні поля класу

	char* _hesh;
	char* _name;
	float _weight;
	void checkweight(int population);//закрита функція перевірки на правилність вводу населення

public:

	Product();//консторуктор за замовчуванням
	Product(const char* hesh, const char* name, int weight);//конструктор з параметрами
	Product(const Product& prod);//конструктор копіювання

	//сетери для полів класу
	void SetHesh(const char* hesh);
	void SetName(const char* name);
	void SetWeight(int weight);
	//гетери полів класу
	char* GetHesh();
	char* GetName();
	int GetWeight();
	//функції вводу з клавіатури
	void EnterName(char* name);
	void EnterHesh(char* hesh);
	void EnterWeight();


	~Product();//деструктор

	void Print();//функція виводу полів класу


};

