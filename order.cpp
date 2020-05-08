#include <iostream>

using namespace std;
int main()
{
    int dig1,dig2,dig3;

cout << "Enter three numbers: \n";
cin >> dig1 >> dig2 >> dig3;
cout << "\n";

if (dig1 > dig2 && dig2 > dig3)
{
    cout <<"the digits in descending order are: "<< dig1<< ", " <<dig2<< ", " <<dig3<<"\n";
}

else if (dig1 > dig3 && dig3 > dig2)
{
    cout <<"the digits in descending order are: "<< dig1<< ", " <<dig3<< ", " <<dig2 <<"\n";
}

else if (dig2 > dig1 && dig1 > dig3)
{
    cout <<"the digits in descending order are: "<< dig2<< ", " <<dig1<< ", " <<dig3<<"\n";
}

else if (dig2 > dig3 && dig3 > dig1)
{
     cout <<"the digits in descending order are: "<< dig2<< ", " <<dig3<< ", " <<dig1 <<"\n";
}

else if (dig3 > dig3 && dig1 > dig2)
{
    cout <<"the digits in descending order are: "<< dig3<< ", " <<dig1<< ", " <<dig2 <<"\n";
}

else
{
    cout <<"the digits in descending order are: "<< dig3<< ", " <<dig2<< ", " <<dig1 <<"\n";
}

return 0;
}
