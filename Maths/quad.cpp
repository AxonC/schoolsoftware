// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <cmath>
using namespace std;

int find_zero(int a, int b, int c, int multi)
{
	int result = (-b + multi*sqrt(b*b - 4 * a*c)) / (2 * a);
	return result;
}

int main()
{
int a, b, c;

//Value Entry
cout << "Enter value for a: ";
cin >> a;
cout << "Enter value for b: ";
cin >> b;
cout << "Enter value for c: ";
cin >> c;

//Calculating Zeroes
int pZero, nZero;
pZero = find_zero(a, b, c, 1);
nZero = find_zero(a, b, c, -1);

cout << "Positive Solution: " << pZero << endl;
cout << "Negative Solution: " << nZero << endl;
return 0;

 }

