#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<queue>
#include<algorithm>
using namespace std;
const int INF=0X3F3F3F3F;
const int MAXN=550;
int Map[MAXN][MAXN];
bool vis[MAXN][MAXN];
int n,m;
struct node
{
    int x,y,step;
    node(){x=y=step=0;}
};
void init()
{
    memset(Map,0,sizeof(Map));
    memset(vis,false,sizeof(vis));
    char s[m+2];
    for(int i=0;i<n;i++)
    {
        scanf("%s",s);
        for(int j=0;j<m;j++)Map[i][j]=s[j]-'0';
    }
}
int bfs()
{
    node now,next;
    queue<node> q;
    now.x=now.y=now.step=0;
    vis[0][0]=true;
    q.push(now);
    while(!q.empty())
    {
        now=q.front();q.pop();
        if(now.x==n-1&&now.y==m-1)return now.step;
        int dir[4][2]={{0,Map[now.x][now.y]},{0,-Map[now.x][now.y]},{Map[now.x][now.y],0},{-Map[now.x][now.y],0}};
        for(int i=0;i<4;i++)
        {
            int xx=now.x+dir[i][0],yy=now.y+dir[i][1];
            if(xx<0||xx>=n||yy<0||yy>=m)continue;
            if(vis[xx][yy])continue;
            next.x=xx;next.y=yy;next.step=now.step+1;
            vis[next.x][next.y]=true;
            q.push(next);
        }
    }
    return -1;
}
int main()
{
    while(~scanf("%d %d\n",&n,&m))
    {
        init();
        int result=bfs();
        printf("%d\n",result);
    }
    return 0;
}