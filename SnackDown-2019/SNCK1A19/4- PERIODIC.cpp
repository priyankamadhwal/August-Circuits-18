#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long T, N, prev, curr_K, res_K;
    string input, temp;
    cin>>T;
    for (long long test=1; test<=T; test++)
    {
        cin>>N;
        long long A[N];
        /*getline(cin,temp);
        getline(cin,input);
        stringstream ss(input);*/
        for (long long i=0; i<N; i++)
            cin>>A[i];
        long long Kmax = *max_element(A,A+N);
        bool imp=false; 
        res_K=-1;
        prev=-1;
        for (long long i=0; i<N; i++)
        {
            if (A[i]==-1)
            {
                continue;
            }
            if (prev==-1)
            {
                prev=i;
                continue;
            }
            if (A[i]-A[prev] == i-prev)
            {
                prev=i;
                continue;
            }
            if (A[i]-A[prev] > i-prev)
            {
                imp=true;
                break;
            }
            curr_K=A[prev]+(i-prev-A[i]);
            if (curr_K<A[prev])
            {
                imp=true;
                break;
            }
            if (res_K==-1)
            {
                res_K=curr_K;
            }
            else
            {
                res_K=__gcd(res_K, curr_K);
            }
            if (res_K<Kmax)
            {
                imp=true;
                break;
            }
        }
        if (imp)
        {
            cout<<"impossible\n";
        }
        else if (res_K==-1)
        {
            cout<<"inf\n";
        }
        else
        {
            cout<<res_K<<"\n";
        }
    }
    return 0;
}
