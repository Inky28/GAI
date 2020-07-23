#pragma once
#include <string>
#include <vector>
#include "Fine.h"

using namespace std;

class Car
{
private:
	string number;
	vector<Fine> fines;
public:
	Car() {};
	Car(string carNumber);
	void SetCarNumber(string carNumber);
	string GetCarNumber() const;
	string GetNumber() const;
	const vector<Fine>& GetFines() const;
	void AddFine();
	bool operator == (Car& car) const;
	bool operator > (Car& car) const;
	bool operator < (Car& car) const;
	friend ostream& operator << (ostream& out, Car& car);
};

