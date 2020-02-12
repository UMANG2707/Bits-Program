// Last bit is 1 means odd and last bit 0 means even number in binary

#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    if(N & 1)
    {
        cout << "odd";
    }
    else
    {
        cout << "Even";
    }
}
