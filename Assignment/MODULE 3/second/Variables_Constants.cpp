#include<iostream>
using namespace std;

int main()
{   
    int a,b;
    float x;
    char ch;
    
    
    const int pivalue = 3.14;

    cout<<"Enter First value : ";
    cin>>a;

    cout<<"Enter Second value : ";
    cin>>b;

    cout<<"Enter a Float Value :";
    cin>>x;

    cout<<"Enter a Character Value : ";
    cin>>ch;

   
    int sum = a + b;
    int product = a * b;
    float result = x * a;

  
    cout<< "Integer Sum : " << sum << endl;
    cout<< "Integer Product : " << product << endl;
    cout<< "Float Result : " << result << endl;
    cout<< "Character : " << ch << endl;
    cout<< "Integer Sum : " << sum << endl;
    cout<< "Constant Value : " << pivalue << endl;

    return 0;
    
}