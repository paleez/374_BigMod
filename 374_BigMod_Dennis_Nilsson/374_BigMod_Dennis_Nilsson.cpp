// 374_BigMod_Dennis_Nilsson.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <fstream>
int calc(long int x, long int y, long int N);
bool even(int i);
bool even(int i) { return (i % 2) == 0; }
int calc(long int x, long int y, long int N)
{
	if (y == 0)
	{
		return 1;
	}
	
	long long int z = calc(x, floor(y / 2), N);
	//std::cout << "this is z : " << z << std::endl;
	if (even(y))
	{
		return (z*z) % N;
	}
	else
	{
		return (x * (z*z)) % N;
	}
}

int main()
{
	int b, p, m, n, r;
	
	while (std::cin >> b >> p >> m)
	{
		n = calc(b, p, m);
		r = n % m;
		std::cout << r  << std::endl;
	}

	return 0;
}

