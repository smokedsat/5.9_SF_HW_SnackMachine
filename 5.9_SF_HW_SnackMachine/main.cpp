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

	Snickers->addSnack('K', 23);
	Snickers->buySnack('K', 35);
	Kitkat->addSnack('S', 4666);
	Bounty->addSnack('B', 444);
}