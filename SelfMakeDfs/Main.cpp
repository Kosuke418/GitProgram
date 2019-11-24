#include<iostream>

using namespace std;

int N;
int x[8];
int y[8];
// vector<int> pos;
int used[8]={};
int road[8]={};
int num=0;

void dfs(int now)
{
    used[now]=1;    
    for(int i=0;i<N;i++)
    {
        if(used[i]==0) 
        {
            road[num]=i+1;
            num++;
            dfs(i);
        }
    }
    for(int i=0;i<N;i++)
    {
        cout << road[i];
    }
    if(used[now]) cout << "\n";
    used[now]=0;
}

int main()
{
    cin >> N;
    for(int i=0;i<N;i++)
    {
        road[0]=i+1;
        num++;
        // cin >> x[i] >> y[i];
        dfs(i);
    }
}