// No of bits need to change for convert a into b

#include<iostream>
using namespace std;

int countBits(int N)
{
    int c = 0;
    while(N>0)
    {
        c += (N&1);
        N = N>>1;
    }
    return c;
}

int main()
{
    int A,B,C;
    cin >> A >> B;
    C = A ^ B;

    cout << countBits(C);

}
