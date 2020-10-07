#pragma once
 
struct Complex
{
	int a, b;
	Complex(int a, int b);

	//default constructor
	Complex();

	int abs();

	Complex& operator+(Complex& other);
	Complex& operator-(Complex& other);
	Complex& operator*(int n);
};
