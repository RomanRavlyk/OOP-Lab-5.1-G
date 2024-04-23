#pragma once
#include <string>
#include "Liquid.h"
using namespace std;

class Solution : public Liquid
{
private:
	int amount;
public:
	Solution() : Liquid("", 0), amount(0) {}

	Solution(const Liquid& liquid1, int amount1) : Liquid(liquid1), amount(amount1) {}

	Solution(const Solution& other) : Liquid(other), amount(other.amount) {}
	~Solution() {}

	int getAmount() const { return amount; }
	void setAmount(int value) { this->amount = value; }

	Solution& operator=(const Solution& other);
	Solution& operator ++();
	Solution& operator --();
	Solution operator ++(int);
	Solution operator --(int);
	operator string() const;
	friend ostream& operator << (ostream&, const Solution&);
	friend istream& operator >> (istream&, Solution&);
};

