#include "Header.h"
#include <iostream>
#include <cmath>
#include <algorithm>

Complex::Complex(int a, int b)
{
	this->a = a;
	this->b = b;
}

Complex::Complex()
{
	this->a = 0;
	this->b = 0;
}

int Complex::abs()
{
	return sqrt(a * a + b * b);
}

Complex& Complex::operator+(Complex& other)
{
	this->a += other.a;
	this->b += other.b;
	return *this;
}

Complex& Complex::operator-(Complex& other)
{
	this->a -= other.a;
	this->b -= other.b;
	return *this;
}

Complex& Complex::operator*(int n)
{
	this->a *= n;
	this->b *= n;
	return *this;
}
