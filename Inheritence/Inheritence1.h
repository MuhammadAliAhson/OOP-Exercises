#pragma once
#include <iostream>
using namespace std;

class Mammal {
	string name;
	public:
		Mammal() {
			this->name = "";
		}
		void setMammalName(string name_a)
		{
			this->name = name_a;
 }
		string getMammalName() {

			return this->name;
		}
};
class Bird {
	string name_bird;
public:
	Bird() {
		this->name_bird = "";
	}
	void setBirdName(string name_a)
	{
		this->name_bird = name_a;
	}
	string getBirdName() {

		return this->name_bird;
	}
};

class Organism : public Mammal, public Bird {
	string name_org;
public:
	Organism() {
		this->name_org = "";
	}
	void setOrganismName(string name_a)
	{
		this->name_org = name_a;
	}
	string getOrganismName() {

		return this->name_org;
	}
};