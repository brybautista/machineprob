#include <iostream>
#include <conio.h>  // to provide console input or output
#include <cmath>  // declares a set of functions to compute mathematical operations
using namespace std;  // pre processors

int main()  // main body
{
	int c, b, ta, u, s, v, x;
	cout << "Enter co1efficients b and c: \n\n";  // prompts for input
	
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;  // values are input

	ta = b + b - b; 
	s = (b * b) - (4 * c);  
	u = ta + sqrt(s);   
	u /= 2;
	v = ta - sqrt(s);
	v /= 2;  // u and v formulas to be followed
	
	cout << "\nYour integers are: \n\n" 
	<< "u = " << u << endl;
	cout << "v = " << v << endl;
    cout << "\n(x + (" << u << "))(x + (" << v << "))";  // u and v are displayed as the integers of a polynomial
	x = pow (s, 2);
	x % s == 0;  
	
	if (s < 0)
		cout << "\nu and v are complex numbers";  // if less than 0, numbes are complex and therefore not factorable
		
	if (s > 0 && u % 2 == 0 && v % 2 == 0) {  // needs to be a square and divisible by 2, making it factorable
		cout << "\nu and v are integers\n" << "\nThe polynomial is factorable";
	}
	else {
		cout << "\nu and v are not integers\n" << "\nThe polynomial is not factorable";  // non-factorable if it does not meet the formula
	}
		
	getch();
	return 0;  // end statements		  
}
