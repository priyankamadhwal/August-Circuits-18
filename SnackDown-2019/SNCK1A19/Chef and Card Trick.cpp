#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long T, N, prev;
    string input, temp;
    bool flag;
    cin>>T;
    for (long long test=1; test<=T; test++)
    {
        cin>>N;
        getline(cin,temp);
        getline(cin,input);
        stringstream ss(input);
        long long A[N];
        long long i=0;
        flag=true;
        for ( ; i<N; i++)
        {
            ss>>A[i];
            if (i==0)
                prev=A[i];
            else
            {
                if (A[i]<prev)
                    break;
                else
                    prev=A[i];
            }
        }
        if (i<N)
        {
            long long j=i;
            prev=A[i];
            if (A[i]>A[0] || A[i]>A[i-1])
            {   
                flag=false;
            }   
            j++;
            while(j<N && flag)
            {
                ss>>A[j];
                if (A[j]<prev || A[j]>A[0] || A[j]>A[i-1])
                {
                    flag=false; 
                    break;
                }
                prev=A[j];
                j++;
            }
        }
        if (flag)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
        
    }
    return 0;
}
