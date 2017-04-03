/*ID: avimall1
LANG: C++
TASK: wormhole
*/
#include<bits/stdc++.h>
#define pii                pair<int,int>
#define mkp            make_pair
#define fs                 first
#define sc                 second
#define pb                push_back
#define ppb              pop_back()
#define pcase(x)       cout<<"Case "<<x<<": ";
#define hi        cout<<"hi"<<endl;
#define mx                 1000000007
#define inf                  1000000007
#define pi                    acos(-1.0)
#define mem(arr,x)    memset((arr), (x), sizeof((arr)));
#define FOR(i,x)          for(int i=0;i<(x); i++)
#define FOR1(i,x)       for(int i = 1; i<=(x) ; i++)
#define jora(a,b)       make_pair(a,b)
using namespace std;
typedef long long int lint;
typedef double dbl;
int side[15],mark[15]={0};
set<vector<pii> >s;
int x[15],y[15];
map<int,int>mp;
int vis[2][15];
int dfs(int n,int node,int level)
{

	if (vis[level%2][node]==1)
	return 1;
    vis[level%2][node]=1;
	int a=0;
	if(level%2==0)
	{
         return dfs(n,mark[node],level+1);
	}
	else 
	{
    if(mp.find(node)==mp.end())
    	return 0;
    else return dfs(n,mp[node],level+1);
	}

}
void solve(int node,int n,vector<pii>vt)
{
  if(node>n)
  {
    sort(vt.begin(),vt.end());
    int ans=0;
    FOR1(i,n)
    {
    	mem(vis,0);
    	ans=ans|dfs(n,i,0);

    	if(ans)
    		{
    			s.insert(vt);
    			//cout<<i<<endl;
    			FOR(i,vt.size())
    			{
    			  pii tem=vt[i];
    			  //cout<<tem.fs<<" "<<tem.sc<<endl;
    			}
    		//hi;hi;hi;
    			return ;
    		}
    }

  	return ;
  }
   if(mark[node])
   	 solve(node+1,n,vt);
   	else
   	{
     
     for(int i=node+1;i<=n;i++)
     {
     	if(i==node || mark[i])
     		continue;
     mark[node]=i;
     mark[i]=node;
     vt.push_back(jora(node,i));
     solve(node+1,n,vt);
     mark[node]=0;
     //pii tem=vt[vt.size()-1];

    // cout<<node<<" "<<i<<" "<<tem.fs<<" "<<tem.sc<<endl;
     vt.pop_back();
     mark[i]=0;
     }


   	}
  return ;


}
int main()
{
ios_base::sync_with_stdio(false);
int test,case_no=1;
freopen("wormhole.in","r",stdin);
freopen("wormhole.out","w",stdout);
int n;
cin>>n;
FOR1(i,n)
{
	
	cin>>x[i]>>y[i];

}
FOR1(i,n)
{
	vector<pii>tem;
	FOR1(j,n)
	{
     if(j==i)
     	continue;
     if(y[i]==y[j] && x[i]<x[j])
     {
     	
     	tem.push_back(jora(x[j],j));
     }
	}
	sort(tem.begin(),tem.end());
	if(tem.size())
	{
		pii t=tem[0];
		mp[i]=t.sc;
		
     }

}
vector<pii>vt;
solve(1,n,vt);
cout<<s.size()<<endl;
return 0;
}
/*1 2 3 6 4 5 
1 3 2 4 5 6 
1 4 2 3 5 6 
1 4 2 5 3 6 
1 4 2 6 3 5 
1 5 2 3 4 6 
1 5 2 4 3 6 
1 6 2 3 4 5 
1 6 2 4 3 5 
1 6 2 5 3 4 
10
*/