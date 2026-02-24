#include <iostream>
using namespace std;

int main() 
{
    int A[2][2], B[2][2], C[2][2];

    cout << "\n Enter elements of first 2x2 matrix:";

    for(int i = 0; i < 2; i++) 
    {
        for(int j = 0; j < 2; j++) 
        {
            cin >> A[i][j];
        }
    }               

    cout << "\n Enter elements of second 2x2 matrix:";

    for(int i = 0; i < 2; i++) 
    {
        for(int j = 0; j < 2; j++) 
        {
            cin >> B[i][j];
        }
    }

    // Matrix Addition
    for(int i = 0; i < 2; i++) 
    {
        for(int j = 0; j < 2; j++) 
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\n Resultant Matrix after Addition:";

    for(int i = 0; i < 2; i++) 
    {
        for(int j = 0; j < 2; j++) 
        {
            cout << C[i][j] << " ";
        }
        
        cout << endl;
    }

    return 0;
}