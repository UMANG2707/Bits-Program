
// Calculate number of set bits.

#include<iostream>
using namespace std;

// time complexity is O(Number of total bits in N)
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

//time complexity is O(Number of finding bits only in N)
int countBitsFast(int N)
{
    int c = 0;
    while(N)
    {
        c++;
        N = N & (N-1);
    }
    return c;
}
int main()
{
    int N;
    cin >> N;
    cout << countBits(N);
    cout << countBitsFast(N);


}
