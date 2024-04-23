#pragma once
#include <iostream>
#include <string>
#include "Object.h"
using namespace std;
class Liquid : public Object {
private:
	std::string name;
	int density;
public:
	Liquid() : name(""), density(0) {}
	Liquid(const std::string& name, int density) : name(name), density(density) {}
	Liquid(const Liquid& other) : name(other.name), density(other.density) {}
	~Liquid() {}
	string getName() const { return name; }
	void setName(std::string value);
	int getDensity() const { return density; }
	void setDen(int value);

	Liquid& operator ++();
	Liquid& operator --();
	Liquid operator ++(int);
	Liquid operator --(int);
	operator string() const;
	Liquid& operator=(const Liquid& other);
	friend ostream& operator << (ostream&, const Liquid&);
	friend istream& operator >> (istream&, Liquid&);
};
