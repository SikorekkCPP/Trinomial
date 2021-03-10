#include <iostream>
#include <math.h>
using namespace std;

class Trinomial
{

	double a, b, c;

public:

	Trinomial() {
		a = 1;
		b = 1;
		c = 1;
	}

	Trinomial(double _a, double _b, double _c) {
		if (_a != 0) {
			a = _a;
			b = _b;
			c = _c;
		}
		else {
			a = 1;
			b = _b;
			c = _c;
		}
	}

	double GetA() {
		return a;
	}

	double GetB() {
		return b;
	}

	double GetC() {
		return c;
	}

	double GetDelta() {
		return (b * b) - (4 * a * c);
	}

	double GetX() {
		return -b / (2 * a);
	}

	double GetX1() {
		return (-b - sqrt(GetDelta())) / (2 * a);
	}

	double GetX2() {
		return (-b + sqrt(GetDelta())) / (2 * a);
	}

	double GetP() {
		return -b / 2 * a;
	}

	double GetQ() {
		return -GetDelta() / (4 * a);
	}

};

class Helper
{

	// Klasa tymczasowo oblicza wszystkie dzialania, potem zostana zmienione na dziedziczone funkcje z Trinomial.

	double a, b, c;

public:

	Helper() {
		a = 1;
		b = 1;
		c = 1;
	}

	Helper(double _a, double _b, double _c) {
		if (_a != 0) {
			a = _a;
			b = _b;
			c = _c;
		}
		else {
			a = 1;
			b = _b;
			c = _c;
		}
	}

	void SetA() {
		do {
			cout << endl << "Podaj a: ";
			cin >> a;
		} while (a == 0);
	}

	void SetB() {
		cout << endl << "Podaj b: ";
		cin >> b;
	}

	void SetC() {
		cout << endl << "Podaj c: ";
		cin >> c;
	}

	double GetA() {
		return a;
	}

	double GetB() {
		return b;
	}

	double GetC() {
		return c;
	}

	void PQ() {
		cout << endl << "PQ = (" << -b / (2 * a) << " ; " << -((b * b) - (4 * a * c)) / (4 * a) << ")";
	}

	void Canonical() {
		cout << endl << "Canonical: y = " << a << "(x - " << -b / (2 * a) << ")^2 + " << -((b * b) - (4 * a * c)) / (4 * a);
	}

	void Productive() {
		if ((b * b) - (4 * a * c) > 0) {
			cout << endl << "Productive: y = " << a << "(x - " << (-b - sqrt((b * b) - (4 * a * c))) / (2 * a) << ")(x - " << (-b + sqrt((b * b) - (4 * a * c))) / (2 * a) << ")";
		}
		else {
			cout << endl << "Productive: Doesn't exist";
		}
	}

	void Check() {
		if (((b * b) - (4 * a * c)) > 0) {
			cout << endl << "x1 = " << (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
			cout << endl << "x2 = " << (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
		}
		else if (((b * b) - (4 * a * c)) == 0) {
			cout << endl << "x = " << -b / (2 * a);
		}
		else {
			cout << endl << "Brak miejsc zerowych";
		}

	}

	void Show() {
		cout << endl << "a = " << a;
		cout << endl << "b = " << b;
		cout << endl << "c = " << c;
		cout << endl << "Delta = " << ((b * b) - (4 * a * c));
		cout << endl << "p = " << -b / 2 * a;
		cout << endl << "q = " << ((b * b) - (4 * a * c)) / (4 * a);
		Check();
		PQ();
		Canonical();
		Productive();
	}

};

int main()
{
	Trinomial T1(1, 4, -12);
	cout << endl << "a = " << T1.GetA();
	cout << endl << "b = " << T1.GetB();
	cout << endl << "c = " << T1.GetC();
	cout << endl << "Delta = " << T1.GetDelta();
	cout << endl << "p = " << T1.GetP();
	cout << endl << "q = " << T1.GetQ();
	cout << endl << "x = " << T1.GetX();
	cout << endl << "x1 = " << T1.GetX1();
	cout << endl << "x2 = " << T1.GetX2();

	cout << endl << endl << endl;

	Helper H1;
	H1.SetA();
	H1.SetB();
	H1.SetC();
	H1.Show();
}