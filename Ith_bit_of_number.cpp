// Ith bit of number

#include<iostream>
using namespace std;

int getIthbit(int N, int P)
{
    return (N & (1<<P)) !=0 ? 1:0 ;
}

int main()
{
    int N,P; // N:Number P:Position/I
    cin >> N >> P;

    cout << getIthbit(N,P);

}

