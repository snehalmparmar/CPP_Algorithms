//#include "CountBitsSetToOne.h"
//#include "ParityCheck.h"
//#include "Variant_Parity.h"
//#include "SwapBits.h"
//#include "ReverseBits.h"
//#include "Closest_Integer_Same_NumOf_SetBits.h"
#include "MulWithoutMathOperation.h"

#include <iostream>
using std::cout;
using std::endl;

int main() {
	long long int x{ 15 };
	long long int y{ 2 };
	//int i{ 4 };
	//int j{ 11 };
	//int n{ 6 };
	//cout << "Number of ones in x are: " << CountBits(x) << endl;
	//cout << "Parity is: " << parity(x) << endl;
	//cout << "Right propagate the rightmost set bit: " << Variant1_Parity(x) << endl;
	//cout << "x mod power of 2: " << Variant1_Parity(x, n) << endl;
	//cout << "x: " << x << " after swaping " << i << " and " << j << " bits " << SwapBits(x, i, j);
	//cout << "Reverse of " << x << " is " << ReverseBits(x) << endl;
	//cout << "Closest integer with same number of set bits as: " << x << " is " << Closest_Integer_Same_NumOf_SetBits(x) << endl;
	cout << "Multiplication of x: " << x << " and y: " << y << " is " << MulWithoutMathOperation(x, y) << endl;
	return 0;
}