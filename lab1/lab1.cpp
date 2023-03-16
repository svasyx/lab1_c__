#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#include "stdlib.h"
#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "locale.h"
#include "string.h"
#include "windows.h"
#include "time.h"
#include"Product.h"





Product NoObject(Product& prod)
{
	Product tmp(prod);
	tmp.SetHesh("hesh");
	tmp.SetName("Name1");
	tmp.SetWeight(100000);
	return tmp;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	Product a("#1", "iPhone", 100);
	a.Print();


	Product b(a);
	b.Print();

	Product* product = new Product("#2", "iPhone1", 1001);//Вказівник на компоненту-функцію
	product->Print();

	

	Product c;
	c.SetWeight(1234);
	c.SetHesh("#3");
	c.SetName("iPhone2");
	c.Print();

	Product d;
	d.SetName("iPhone3");
	d.SetHesh("#4");
	d.SetWeight(1011);
	
	cout << d.GetName()  << endl;
	cout << d.GetHesh() <<endl;
	cout << d.GetWeight() <<endl;
	
	Product* p;
	p = new Product[3]; 
	p->SetHesh("#5");
	p->SetName("iPhone6");
	p->SetWeight(10000);
	p->Print();

	Product f;

	char hesh[256];
	char name[256];


	f.EnterHesh(hesh);
	f.EnterName(name);
	f.EnterWeight();

	f.Print();


	Product e = NoObject(a);
	e.Print();


}
