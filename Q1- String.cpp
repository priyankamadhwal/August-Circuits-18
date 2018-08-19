#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long N, curr_occ, max_occ;
    //Max occurence of a character will give min. length string
    string S;
    char curr;
    cin>>N;
    cin>>S;
    max_occ=0;
    /*char c=97; 
    cout<<c;*/
    
    for (int i=97; i<=122; i++)
    {
        curr_occ=count(S.begin(), S.end(), i);
        if (curr_occ>max_occ)
            max_occ=curr_occ;
    }
    cout<<N-max_occ;
    return 0;
}
