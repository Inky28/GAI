#pragma once

#include "Tree.h"
#include "Car.h"

class Menu 
{
public:
	Menu();
private:
	void ShowMenu();
	void AddOffense(Tree<Car>& db);
	bool FindCar(Tree<Car>& db);
};