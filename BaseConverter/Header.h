#pragma once

#include <iostream>
#include <vector>
using namespace std;


using ll = long long;
using vti = vector<int>;


class Num {
private:
	ll base;
	// Representation of each number digit
	vti rep;

public:
	Num(ll b = 0);
	Num(const Num& n);
	~Num();

	Num& operator=(const Num& n);

	friend ostream& operator<<(ostream& os, const Num& n);
	friend istream& operator>>(istream& is, Num& n);

	
};


