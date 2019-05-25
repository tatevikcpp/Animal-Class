#pragma once
#pragma once
#include <string>
using namespace std;
class Animal
{

public:
	Animal();
	Animal(const string &name, double weight);
	~Animal() {};

	string Name();
	double Weight();



private:
	string name_;
	double weight_;
};