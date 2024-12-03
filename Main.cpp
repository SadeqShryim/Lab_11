#include <iostream>
#include "FractionHandler.h"
using namespace std;

int main() {

	int numerator, denominator;

	cout << "What is the numerator for your First fraction: " << endl;
	cin >> numerator;
	cout << "What is the denominator for your First fraction: " << endl;
	cin >> denominator;
	FractionHandler First(numerator, denominator);

	cout << "What is the numerator for your Second Fraction: " << endl;
	cin >> numerator;
	cout << "What is the denominator for your Second Fraction: " << endl;
	cin >> denominator;
	FractionHandler Second(numerator, denominator);
	
	cout << endl << "Fractions: " << endl;
	First.display();
	Second.display();

	cout << "frac1 < frac2: " << frac1.isLessThan(frac2) << endl;
	cout << "frac1 > frac2: " << frac1.isGreaterThan(frac2) << endl;
	cout << "frac1 == frac2: " << frac1.isEqualTo(frac2) << endl;
	return 0;
}