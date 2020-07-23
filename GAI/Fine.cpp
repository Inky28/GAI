#include "Fine.h"

Fine::Fine()
{
	this->title = "";
	this->about = "";
	this->price = 0;
}

void Fine::SetTitle(string title)
{
	if (!title.empty())
		this->title = title;
}

void Fine::SetInfo(string about)
{
	if (!about.empty())
		this->about = about;
}

void Fine::SetPrice(float price)
{
	if (price >= 0 && price <= 10000)
		this->price = price;
}

string Fine::GetTitle() const
{
	return title;
}

string Fine::GetAbout() const
{
	return about;
}

float Fine::GetPrice() const
{
	return price;
}

void Fine::print() const
{
	cout << "Title: " << GetTitle() << endl;
	cout << "About: " << GetAbout() << endl;
	cout << "Price: " << GetPrice() << endl;
}