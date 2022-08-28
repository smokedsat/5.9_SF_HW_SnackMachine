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
	void addSnack(char choose, int addCount);
	void buySnack(char choose, int buyCount);

private:
	string name;
	int price;
	int count;
	int weight;
};

class SellBox
{
public:
	SellBox();
	~SellBox();	
private:
	
};

