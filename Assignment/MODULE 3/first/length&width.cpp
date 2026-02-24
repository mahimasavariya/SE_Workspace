#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    float length, width, area;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    area = length * width;

    cout << "Area of rectangle = " << area;

    return 0;
}
