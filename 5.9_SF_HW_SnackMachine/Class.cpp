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

// Получить информацию о батончике
void Snack::getSnack()
{
	cout << endl;
	cout << "Название снэка:" << name << endl;
	cout << "Цена: " << price << endl;
	cout << "Количество в машине: " << count << endl;
	cout << "Вес батончика: " << weight << endl;
}

void addSnack(Snack & that, int addCount)
{
	if (addCount < 0)
	{
		addCount = -addCount;
	}
		int countOld = that.count;
		that.count = that.count + addCount;
		if (that.count > 10000)
		{
			cout << endl << " В автомат поместилось " << (10000 - countOld) << " ваших батончиков. Заберите оставшиеся " << -(10000 - that.count) << " " << that.name << endl;
			that.count = 10000;
		}
		else
		{
			cout << endl << " Добавлено " << addCount << " " << that.name << endl;
			cout << endl << " Количество " << that.name << " = " << that.count;
		}
}

void buySnack(Snack& that, int buyCount)
{
	if (buyCount < 0)
	{
		buyCount = -buyCount;
	}
	if (that.count < buyCount)
	{
		cout << endl << " В автомате нет "<< buyCount <<" батончиков, вы можете купить " << that.count<< " " << that.name << endl;
		addSnack(that, 50);
	}
	else
	{
		that.count = that.count - buyCount;
		cout << endl << " Вы купили " << buyCount << " " << that.name << endl;
		cout << endl << " Количество " << that.name << " = " << that.count;
	}
	if (that.count < 50)
	{
		addSnack(that, 100);
	}
}

//Задать вес батончика
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

