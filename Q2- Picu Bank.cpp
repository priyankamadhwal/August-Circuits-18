#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long T, D, A, M, B, X, ans;
    
    cin>>T;
    
    for (long long test=1; test<=T; test++)
    {
        cin>>D>>A>>M>>B>>X;
        
        //Unitary Method
        /*
        In (M+1) months --> A*M + B dollars
        1 dollar --> (M+1) / (A*M + B)
        X-D dollar --> (X-D)(M+1) / (A*M + B)
        
        */
        
        if (D>X)
            ans=0;
        else 
          ans=round(float((X-D)*(M+1)) / (A*M + B));
        cout<<ans<<"\n";
        
        //TLE ERROR
        /*ans=0;
        while (D<X)
        {
            if (D+M*A+B>X)
                break;
            else
            {
                D+=M*A+B;
                ans+=M+1;
            }
        }
        for (int i=1; i<=M+1 && D<X; i++)
        {
            if (i==M+1)
                D+=B;
            else
                D+=A;
            ans++;
        }
        cout<<ans<<"\n";*/
    }
    
    return 0;
}
