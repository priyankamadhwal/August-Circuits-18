#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long T, P1, P2, N, sum, ans;
    cin>>T;
    for (long long test=1; test<=T; test++)
    {
        cin>>P1>>P2>>N;
        sum=P1+P2;
        ans=sum/N;
        if (ans%2==0)
            cout<<"CHEF\n";
        else
            cout<<"COOK\n";
    }
    return 0;
}
