#include <iostream>
using namespace std;

class Fraction {
private:
	int numerator = 100;
	int denominator = 100;
public:

	void PrintFraction() {
		cout << numerator << "\t" << denominator << endl;
	}

	void InitialFraction(int a, int b) {
		numerator = a;
		denominator = b;
	}

	void Division(int a, int b) {

		if (a > 0 && b > 0) {
			numerator /= a;
			denominator /= b;
		}
		else {
			cout << "Use numbers > 0" << endl;
		}
	}

	Fraction Division(Fraction a) {
		Fraction rez;
		rez.numerator = numerator / a.numerator;
		rez.denominator = denominator / a.denominator;
		return rez;
	}

	void Addition(int a, int b) {

		if (a > 0 && b > 0) {
			numerator += a;
			denominator += b;
		}
		else {
			cout << "Use numbers > 0" << endl;
		}

	}
	Fraction Addition(Fraction a) {

		Fraction result;

		result.numerator = numerator + a.numerator;
		result.denominator = denominator + a.denominator;

		return result;
	}
	void Multiplication(int a, int b) {

		if (a > 0 && b > 0) {
			numerator *= a;
			denominator *= b;
		}
		else {
			cout << "Use numbers > 0" << endl;
		}
	}
	Fraction Multiplication(Fraction a) {
		Fraction rez;
		rez.numerator = numerator * a.numerator;
		rez.denominator = denominator * a.denominator;
		return rez;
	}
	void Subtraction(int a, int b) {

		if (a > 0 && b > 0) {
			numerator -= a;
			denominator -= b;
		}
		else {
			cout << "Use numbers > 0" << endl;
		}
	}
	Fraction Subtraction(Fraction a) {
		Fraction rez;
		rez.numerator = numerator - a.numerator;
		rez.denominator = denominator - a.denominator;
		return rez;
	}
	void AddToNumerator(int a) {
		numerator += a;

		if (a > 0) {
			numerator += a;
		}
		else {
			cout << "Use numbers > 0" << endl;
		}
	}
	void AddToDenominator(int a) {
		if (a > 0) {
			denominator += a;
		}
		else {
			cout << "Use numbers > 0" << endl;
		}
	}
	int GetNumerator() {
		return numerator;
	}
	int GetDenominator() {
		return denominator;
	}
	void SetNumerator(int a) {
		if (a > 0) {
			numerator = a;
		}
		else {
			cout << "Use numbers > 0" << endl;
		}
	}
	void SetDenominator(int a) {
		if (a > 0) {
			denominator = a;
		}
		else {
			cout << "Use numbers > 0" << endl;
		}
	}
};

int main() {

	Fraction first;
	first.InitialFraction(500, 100);
	Fraction second;
	second.InitialFraction(500, 50);

	first.PrintFraction();
	cout << "Second: " << endl;
	second.PrintFraction();
	first.Multiplication(4, 2);
	first.PrintFraction();
	first.Addition(4, 2);
	first.PrintFraction();

	Fraction fractionsum = second.Addition(second);
	fractionsum.PrintFraction();


}