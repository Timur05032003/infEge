#include "ege24.h"
#include <iostream>

using namespace std;
using namespace ege24;

int myFunc(int number)
{
	return number * number;
}

int main()
{
	cout << myFunc(5);

	return 0;
}