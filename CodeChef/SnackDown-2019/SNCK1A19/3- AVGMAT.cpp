#include <bits/stdc++.h>
using namespace std;

struct COORDS
{
  int x;
  int y;
};

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, N, M;
    cin>>T;
    for (int test=1; test<=T; test++)
    {
        cin>>N>>M;
        int cell[N][M];
        vector<COORDS> c;
        COORDS temp;
        string row, t;
        getline(cin,t);
        for (int i=0; i<N; i++)
        {
            getline(cin,row);
            for (int j=0; j<M; j++)
            {
                // 1 if house, 0 if empty
                if (row[j]=='1')
                {
                    temp.x=i+1;
                    temp.y=j+1;
                    c.push_back(temp);
                }
            }
        }
        //calculate distances
        map<int,int> distances;
        for (int i=0; i<c.size()-1; i++)
        {
            for (int j=i+1; j<c.size(); j++)
            {
                int d = abs(c[i].x - c[j].x) + abs(c[i].y - c[j].y);
                distances[d]++;
            }
        }
        for (int d=1; d<=N+M-2; d++)
            cout<<distances[d]<<" ";
        cout<<"\n";
    }
    return 0;
}
