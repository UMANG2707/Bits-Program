#include<iostream>
using namespace std;

// Fast swapping using XOR
int main()
{
    int A,B;
    cin >> A >> B;
    A = A ^ B;
    B = B ^ A;
    A = A ^ B;
    cout << A <<"  " << B;
}
