#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, N, len;
    double total_time, curr_time;
    string word;
    char prev, curr; // l for left and r for right
    cin>>T;
    for (int test=1; test<=T; test++)
    {
        cin>>N;
        map <string,double> words_time;
        total_time=0.0;
        for (int i=1; i<=N; i++)
        {
            cin>>word;
            len=word.length();
            if (words_time.find(word)!=words_time.end())
                total_time+=(words_time[word]/2);
            else
            {
                //for first letter of word
                curr_time=0.2;
                if (word[0]=='d' || word[0]=='f')
                    prev='l';
                else
                    prev='r';
                for (int j=1; j<len; j++)
                {
                    if (word[j]=='d' || word[j]=='f')
                        curr='l';
                    else    
                        curr='r';
                    if (prev==curr)
                        curr_time+=0.4;
                    else
                        curr_time+=0.2;
                    prev=curr;
                }
                total_time+=curr_time;
            }
            if (words_time.find(word)==words_time.end())
                words_time.insert(make_pair(word,curr_time));
        }   
        cout<<total_time*10<<"\n";
    }
    return 0;
}
