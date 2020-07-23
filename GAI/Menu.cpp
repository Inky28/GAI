#include "Menu.h"
#include "Tree.h"
#include "Car.h"

Menu::Menu()
{
	Tree<Car> db;

	bool menuWork = true;
	do
	{
		size_t choose;

		ShowMenu();

		cout << "Enter your choose: ";
		cin >> choose;

		system("cls");

		switch (choose)
		{
		case 0:
			menuWork = false;
			break;
		case 1:
			FindCar(db);
			break;
		case 2:
			AddOffense(db);
			break;
		case 3:
			db.print();
			break;
		}
	} while (menuWork);
}

void Menu::ShowMenu()
{
	cout << "1. Find car\n";
	cout << "2. Add offense\n";
	cout << "3. Show by region or show by region and serias\n";
	cout << "4. Show all\n";
	cout << "0. Exit\n";
}

void Menu::AddOffense(Tree<Car>& db)
{
	string temp;
	Car car;

	cout << "Enter car number: ";
	cin >> temp;
	car.SetCarNumber(temp);

	Car* find = db.find(car);

	if (find != nullptr)
		find->AddFine();
	else
	{
		db.push(car);
		find = db.find(car);
		find->AddFine();
	}
}

bool Menu::FindCar(Tree<Car>& db)
{
	string temp;
	Car car;


	cout << "Enter car number: ";
	cin >> temp;
	car.SetCarNumber(temp);

	Car* find = db.find(car);

	if (find != nullptr)
	{
		cout << *find << endl;
		return true;
	}

	cout << "Not found\n";

	return false;
}