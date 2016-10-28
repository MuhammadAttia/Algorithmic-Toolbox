#include <bits/stdc++.h>
using namespace std;
int get_coin(int m)
{
    int total =0;
    while(m!=0)
    {
    total +=m/10;
    m=m%10;
    total+=m/5;
    m=m%5;
    total+=m/1;
    m=m%1;
    }
    return total;
}

int main()
{
    int n;
    cin>>n;
    cout<<get_coin(n);
}
