#include<iostream>
using namespace std;

class Calculator
{
public:
    float add(float a, float b)
    {
        return a + b;
    }

    float subtract(float a, float b)
    {
        return a - b;
    }

    float multiply(float a, float b)
    {
        return a * b;
    }

    float divide(float a, float b)
    {
        if(b != 0)
            return a / b;
        else
        {
            cout << "Division by zero not allowed!" << endl;
            return 0;
        }
    }
};

int main()
{
    Calculator cal;   // Object creation

    float x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition: " << cal.add(x, y) << endl;
    cout << "Subtraction: " << cal.subtract(x, y) << endl;
    cout << "Multiplication: " << cal.multiply(x, y) << endl;
    cout << "Division: " << cal.divide(x, y) << endl;

    return 0;
}