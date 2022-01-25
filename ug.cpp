#include<bits/stdc++.h>
using namespace std;

class Quadratic {

	float a, b, c;
public:

	Quadratic() {

		cout << "ax^2 + bx + c = 0" << endl;
		cout << "Enter a: ";
		cin >> a;
		cout << "Enter b: ";
		cin >> b;
		cout << "Enter c: ";
		cin >> c;

	}

	void Roots() {

		float discriminant = b * b - 4 * a * c, real, imaginary, x1, x2;

		if (a == 0) {

			cout << "Roots" << endl;
			cout << "x = " << -c << endl;
se if (discriminant == 0) {

			cout << "Roots are real and equal" << endl;
			x1 = (-b + sqrt(discriminant)) / (2 * a);
			cout << "x =" << x1 << endl;

		}
		else {

			real = -b / (2 * a);
			imaginary = sqrt(-discriminant) / (2 * a);
			cout << "Roots are complex and different." << endl;
			cout << "x1 = " << real << "+" << "i" << imaginary << endl;
			cout << "x2 = " << real << "-" << "i" << imaginary << endl;

		}

	}

};


int main() {

	Quadratic qe;
	qe.Roots();

}