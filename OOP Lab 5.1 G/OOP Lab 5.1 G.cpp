#include <iostream>
#include "Solution.h"
using namespace std;

int main() {
	Object Object;
	Liquid liquid;
	Solution sol(liquid, 0);

	try{
		cin >> sol;
		cout << sol << endl;
	}
	catch (int) {
		cout << "Solution amount cannot be 0!";
		exit(0);
	}

	cout << "ObjectCount: " << Object::Count() << endl;
	cout << "LiquidCount: " << Liquid::Count() << endl;
	cout << "SolutionCount: " << Solution::Count() << endl;

	return 0;
}