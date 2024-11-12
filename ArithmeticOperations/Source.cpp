#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter a three-digit number: ";
	cin >> number; 
	int digit1, digit2, digit3;
	digit1 = number / 100; // старший разряд числа
	digit2 = number / 10 % 10; // средний разряд числа
	digit3 = number % 10; // младший разряд числа
	cout << "Sum of digits: " << digit1 + digit2 + digit3 << endl;
	
	return 0;
}