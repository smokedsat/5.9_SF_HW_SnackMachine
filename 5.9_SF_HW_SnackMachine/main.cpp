#include "Class.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Snack *Snickers = new Snack("Snickers", 133, 314, 155);
	Snack *Kitkat = new Snack("Kitkat", 167, 3333, 67);
	Snack *Bounty = new Snack("Bounty", 422, 1122, 55);
	Snickers->getSnack();
	Kitkat->getSnack();
	Bounty->getSnack();
	
	addSnack(*Snickers, 212);
	Snickers->getSnack();
	buySnack(*Bounty, 4344);
	addSnack(*Snickers, 10000);
	Snickers->getSnack();
	buySnack(*Snickers, 100);
	buySnack(*Snickers, 10000);
	buySnack(*Snickers, 9950);
	Snickers->getSnack();

	delete Snickers;
	delete Bounty;
	delete Kitkat;
}