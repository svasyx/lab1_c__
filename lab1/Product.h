#pragma once
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <iostream>


using namespace std;

class Product
{
private://������� ���� �����

	char* _hesh;
	char* _name;
	float _weight;
	void checkweight(int population);//������� ������� �������� �� ���������� ����� ���������

public:

	Product();//������������ �� �������������
	Product(const char* hesh, const char* name, int weight);//����������� � �����������
	Product(const Product& prod);//����������� ���������

	//������ ��� ���� �����
	void SetHesh(const char* hesh);
	void SetName(const char* name);
	void SetWeight(int weight);
	//������ ���� �����
	char* GetHesh();
	char* GetName();
	int GetWeight();
	//������� ����� � ���������
	void EnterName(char* name);
	void EnterHesh(char* hesh);
	void EnterWeight();


	~Product();//����������

	void Print();//������� ������ ���� �����


};

