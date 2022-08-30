#pragma once
#include <iostream>
using namespace std;

class Snack
{
public:
	Snack(string Name, int Price, int Count, int Weight);
	void getSnack();
	~Snack() = default;
	char choose;
	void setWeight(int Weight);
	int getWeight();
	void setName(string Name);
	string getName();
	void setPrice(int Price);
	int getPrice();
	friend void addSnack(Snack& that, int addCount);
	friend void buySnack(Snack& that, int buyCount);
private:
	string name;
	int price;
	int count;
	int weight;
};

