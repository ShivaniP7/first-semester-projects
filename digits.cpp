#include <iostream>

using namespace std;
int main()
{
    double number1, number2, sum, difference, product, division;

cout << "Enter the first number:";
cin >> number1;
cout << "Enter the second number:";
cin >> number2;

cout << "\n";

sum = number1 + number2;
cout <<"Sum: " << sum << "\n";

difference = number1 - number2;
cout <<"Difference: " << difference << "\n";

product = number1*number2;
cout <<"Product: " << product << "\n";

division = number1/number2;
cout <<"Divison: " << division << "\n";

return 0;
}
