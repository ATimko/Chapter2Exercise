#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
//Old schooled way
//#include <stdlib.h>

using namespace std;

int main()
{
	//Exercise 1

	//unsigned int smallNumber;
	//smallNumber = 4'294'967'295; //unsigned short int 65535; // short int 32767;
	//cout << "small number:" << smallNumber << endl;
	//smallNumber++;
	//cout << "small number:" << smallNumber << endl;
	//smallNumber++;
	//cout << "small number:" << smallNumber << endl;



	//Exercise 2

	//double s0 = 12.0;
	//double v0 = 3.5;
	//double a = 9.8;
	//double t = 10.0;

	//double s = s0 + v0 * t + 0.5 * a * t * t;

	//cout << s << endl;



	//Exercise 3

	//cout << "Enter the 3 side length of a triangle." << endl;
	//double a, b, c;
	//cin >> a >> b >> c;
	//cout << a << " " << b << " " << c << endl;

	//double s = (a + b + c) / 2.0;

	//double area = sqrt( s * (s - a) * (s - b) * (s - c) );
	//cout << area << endl;



	//Exercise 4

	srand(time(nullptr));
	int a = rand() % 26 + 65;
	cout << (char)a << endl;

	system("pause");
	return 0;
}
