#include "Animal.h"
using namespace std;
Animal::Animal()
{
	weight_ = 10;
	name_ = "Rex";
}

Animal::Animal(const string &name, double weight)
{
	weight_ = 10;
	name_ = "Rex";

}


string Animal::Name()
{
	return name_;
}

double Animal::Weight()
{
	return weight_;
}
