#include <iostream>
using namespace std;

int main()
{
int number, i;
int prime=0;

cout << "Enter a number: ";
cin >> number;

for(i = 2; i <= number / 2; ++i)
  {
      if(number % i == 0)
      {
          prime=1;
          break;
      }
  }

if (prime==1)
  {
      cout << "This is a not prime number";
  }
  else
  {
      cout << "This is a prime number";
  }

return 0;
}