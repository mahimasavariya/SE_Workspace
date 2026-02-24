#include <iostream>
using namespace std;

// Global variable
int number = 500;

class Sample
{
public:
    int number;

    Sample(int n)
    {
        number = n;
    }
};

int main()
{
    Sample d1(100);
    Sample d2(200);

    cout << "Object d1 number = " << d1.number << endl;
    cout << "Object d2 number = " << d2.number << endl;

    cout << "Global number = " << ::number << endl;

    return 0;
}