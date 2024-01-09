#include <iostream>
#include <math.h>
#include <iomanip>
#include<conio.h>
using namespace std;
typedef double(*TypeFun)(double);

//int n;
double fun(double);
double sum(double);
double razn(double);
void Out_rez(TypeFun, double , double, double);


double fun(double x) {
	return  -log(sqrt(1 + pow(x, 2))) + x * atan(x);
}
double sum(double x,int n) {
	double s, r;
	s = 0;
	r = -1;
	for (int k = 1; k <= n; k++) {
		r = -r * x * x;
		s += r / (2 * k * (2 * k - 1));
	}
	return s;
}
double razn(double x) {
	return fabs(fun(x) - sum(x));
}
void Out_rez(TypeFun f, double xn, double xk, double h) {
	cout << "+-----------+-----------+\n";
	cout << "|     x     |    Res    |\n";
	cout << "+-----------+-----------+\n";
	for (double x = xn; x < xk; x += h) {
		cout << setiosflags(ios::showpoint) << "|" << setprecision(5) << setw(11)
			<< x << "|" << setw(11) << f(x) << "|\n";
	}
	cout << "+-----------+----------+\n";
}

int main()
{
	double a, b, h;
	int n;
	int option;
	TypeFun pointer=NULL;
	cout << "Input a = "; cin >> a;
	cout << "Input b = "; cin >> b;
	cout << "Input h = "; cin >> h;
	cout << "Input n = "; cin >> n;
	char text[3][10] = { "function","sum","raznoct" };
	do {
		cout << "Functions : \n 1. Y(x)\n 2.Sum\n 3. |Y-S|\n";
		switch (_getch()) {
		case '1':
			option = 0;
			cout << "Result to function " << text[option] << endl;
			pointer=fun;
			break;
		case '2':
			option = 1;
			cout << "Result to function " << text[option] << endl;
			pointer = sum;
			break;
		case '3':
			option = 2;
			cout << "Result to function " << text[option] << endl;
			pointer = razn;
		}
		Out_rez(pointer, a, b, h);
	} while (cout << "Repeat - 0, Else - EXIT " << endl,_getch() == '0');
	system("pause");
	return 0;
}