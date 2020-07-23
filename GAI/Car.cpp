#include "Car.h"

string GenerateNumber() 
{
	string num;
	num += rand() % ('Z' - 'A') + 'A';
	num += rand() % ('Z' - 'A') + 'A';

	num += rand() % ('9' - '0') + '0';
	num += rand() % ('9' - '0') + '0';
	num += rand() % ('9' - '0') + '0';
	num += rand() % ('9' - '0') + '0';

	num += rand() % ('Z' - 'A') + 'A';
	num += rand() % ('Z' - 'A') + 'A';

	return num;
}

Car::Car(string carNumber) 
{
	SetCarNumber(carNumber);
}

void Car::SetCarNumber(string carNumber) 
{
	this->number = carNumber;
}

string Car::GetCarNumber() const
{
	return number;
}

const vector<Fine>& Car::GetFines() const
{
	return fines;
}

string Car::GetNumber() const
{
	return number;
}

void Car::AddFine() 
{
	Fine fine;
	string title;
	string about;
	float price;

	cout << "Enter title: ";
	cin >> title;
	cout << "Enter about: ";
	cin >> about;
	cout << "Enter price: ";
	cin >> price;

	fine.SetTitle(title);
	fine.SetInfo(about);
	fine.SetPrice(price);

	fines.push_back(fine);
}

bool Car::operator==(Car& car) const
{
	return number == car.GetCarNumber();
}

bool Car::operator>(Car& car) const
{
	return number > car.GetCarNumber();
}

bool Car::operator<(Car& car) const
{
	return number < car.GetCarNumber();
}

ostream& operator<<(ostream& out, const Car& car)
{
	out << "Car name: " << car.GetCarNumber() << endl;

	cout << endl;

	for (const Fine& item : car.GetFines())
	{
		item.print();
		cout << endl;
	}

	return out;
}