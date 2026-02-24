#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter First Integer : ";
    cin >> a;

    cout << "Enter Second Integer : ";
    cin >> b;

    //Arithmetic Operators
    cout << "\n--- Arithmetic Operators ---" << endl;
    cout << "Addition : " << a + b << endl;
    cout << "Subtraction : " << a - b << endl;
    cout << "Multiplication : " << a * b << endl;
    cout << "Division : " << a / b << endl;
    cout << "Modulus : " << a % b << endl;

    //Relational Operators
    cout << "\n--- Relational Operators ---" << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b : " << (a > b) << endl;
    cout << "a < b : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;

    //Logical Operators
    cout << "\n--- Logical Operators ---" << endl;
    cout << "(a > 0 && b > 0) : " << (a > 0 && b > 0) << endl;
    cout << "(a > 0 || b > 0) : " << (a > 0 || b > 0) << endl;
    cout << "!(a > b) : " << !(a > b) << endl;

    //Bitwise Operators
    cout << "\n--- Bitwise Operators ---" << endl;
    cout << "a & b : " << (a & b) << endl;
    cout << "a | b : " << (a | b) << endl;
    cout << "a ^ b : " << (a ^ b) << endl;
    cout << "a << 1 : " << (a << 1) << endl;
    cout << "a >> 1 : " << (a >> 1) << endl;

    return 0;
}