// Hao.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int g_val = 1;

int main()
{
	//cout << 18446744073709551615 + 1 << endl;
	int g_val = 2, A;
	A = g_val + ::g_val;
	cout << 5.674E3F << endl;
	cout << "Number: "
		"435646" << endl;
	cout << "\a";
	auto N = 10.;
	cout << N << endl;
	auto F = 1024.f;
	cout << F << endl;

    return 0;
}

