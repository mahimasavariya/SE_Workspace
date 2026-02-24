#include<iostream>
using namespace std;

int main()
{
    float num;

    cout<<"Enter a Float Number : ";
    cin>>num;

    // explicit conversion 
    int result = (int)num;
    
    cout<< "Result after explicit conversion : " << result <<endl;

    return 0;
    
}