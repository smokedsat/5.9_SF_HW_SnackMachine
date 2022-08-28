#include "Class.h"
#include <iostream>
using namespace std;

Snack::Snack(string Name, int Price, int Count, int Weight)
{

	name = Name;
	if (Price > 0)
	{
		price = Price;
	}
	else
	{
		price = -Price;
	}
	if (Count > 0)
	{
		count = Count;
	}
	else
	{
		count = -Count;
	}
	if (Weight > 0)
	{
	weight = Weight;
	}
	else
	{
		weight = -Weight;
	}
}

void Snack::getSnack()
{
	cout << endl;
	cout << "Название снэка:" << name << endl;
	cout << "Цена: " << price << endl;
	cout << "Количество в машине: " << count << endl;
	cout << "Вес батончика: " << weight << endl;
}

void Snack::addSnack(char choose, int addCount)
{
	switch (choose)
	{
	case 'K':
		count = count + addCount;
		cout << endl << "Вы добавили " << addCount << " " << name << endl;
		cout << endl << "Количество	" << name << " = " << count;
		break;

	case 'S':
		count = count + addCount;
		cout << endl << "Вы добавили " << addCount << " " << name << endl;
		cout << endl << "Количество	" << name << " = " << count;
		break;

	case 'B':
		count = count + addCount;
		cout << endl << "Вы добавили " << addCount << " " << name << endl;
		cout << endl << "Количество	" << name << " = " << count;
		break;
	
	default:
		cout <<endl << "У нас нет таких снеков" << endl;
	}
}

void Snack::buySnack(char choose, int buyCount)
{
	switch (choose)
	{
	case 'K':
		count = count - buyCount;
		cout << endl << "Вы купили " << buyCount << " " << name << " по цене " << buyCount*price << endl;
		cout << endl << "Количество	" << name << " = " << count;
		break;

	case 'S':
		count = count - buyCount;
		cout << endl << "Вы купили " << buyCount << " " << name << " по цене " << buyCount * price << endl;
		cout << endl << "Количество	" << name << " = " << count;
		break;

	case 'B':
		count = count - buyCount;
		cout << endl << "Вы купили " << buyCount << " " << name << " по цене " << buyCount*price << endl;
		cout << endl << "Количество	" << name << " = " << count;
		break;

	default:
		cout << endl << "У нас нет таких снеков" << endl;
	}
}






void Snack::setWeight(int Weight)
{
	if (Weight > 0)
	{
		weight = Weight;
	}
	else
	{
		weight = -Weight;
	}
}

int Snack::getWeight()
{
	cout << "Вес батончика " << name << ":" << weight << "грамм" << endl;
	return weight;
}

void Snack::setName(string Name)
{
	name = Name;
}

string Snack::getName()
{
	cout << "Название батончика: " << name << endl;
	return name;
}

void Snack::setPrice(int Price)
{
	if (Price > 0)
	{
		price = Price;
	}
	else
	{
		price = -Price;
	}
}

int Snack::getPrice()
{
	cout << "Цена за штуку: " << price << " руб." << endl;
	return price;
}



SellBox::SellBox()
{

}

SellBox::~SellBox()
{

}