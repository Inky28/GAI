#pragma once
#include <iostream>
#include <string>

using namespace std;

class Fine
{
private:
	float price;
	string title;
	string about;

public:
	Fine();
	void SetTitle(string title);
	void SetInfo(string about);
	void SetPrice(float price);
	string GetTitle() const;
	string GetAbout() const;
	float GetPrice() const;
	void print() const;
};

