#include <iostream>

using namespace std;
int main()
{
    double grade;

cout << "Enter the grade: ";
cin >> grade;
cout << "\n";

if (grade >=90)
{
    cout <<"A+";
}

else if (85 <= grade && grade < 90)
{
    cout <<"A";
}

else if (80 <= grade && grade < 85)
{
    cout <<"A-";
}

else if (75 <=  grade && grade  < 80)
{
    cout <<"B+";
}

else if (70 <=  grade && grade  < 75)
{
    cout <<"B";
}

else if (65 <=  grade && grade  < 70)
{
    cout <<"C+";
}

else if (60 <=  grade && grade  < 65)
{
    cout <<"C";
}

else if (55 <=  grade && grade  < 60)
{
    cout <<"C-";
}

else if (50 <=  grade && grade  < 55)
{
    cout <<"D+";
}

else if (45 <=  grade && grade  < 50)
{
    cout <<"D";
}

else if (40 <=  grade && grade  < 45)
{
    cout <<"D-";
}

else
{
    cout <<"F";
}

return 0;
}
