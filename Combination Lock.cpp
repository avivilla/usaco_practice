/*ID: avimall1
LANG: C++
TASK: combo
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
set<vector<int> >s;
vector<int>a;

void solve(int node,vector<int>vt[])
{
	if(node==3)
	{
       s.insert(a);
       
       return ;
	}
	FOR(i,vt[node].size())
	{
		a.push_back(vt[node][i]);
		//b.push_back(john[node][i]);
		solve(node+1,vt);
		a.pop_back();
		//b.pop_back();
	}
	
	return ;
}


int main()
{
ios_base::sync_with_stdio(false);
int test,case_no=1;
freopen("combo.in","r",stdin);
freopen("combo.out","w",stdout);
int n;
int x;

vector<int>john[5],master[5];
cin>>n;
FOR(j,3)
{
	cin>>x;
	
	FOR1(i,n)
	{
		if(n+x-1==i || n+x-2==i || x-1==i || x-2==i ||x==i || x+1==i || x+2==i ||x+1-n==i || x+2-n==i)
        {
        	john[j].push_back(i);
    //cout<<j<<" "<<i<<endl;
}
	}
	
    
}
FOR(j,3)
{
	cin>>x;
	

	FOR1(i,n)
	{
		
		if(n+x-1==i || n+x-2==i || x-1==i || x-2==i ||x==i || x+1==i || x+2==i ||x+1-n==i || x+2-n==i)
        {
        	//cout<<j<<" "<<i<<endl;
        	master[j].push_back(i);
        }
	}
	

}
solve(0,john);
solve(0,master);
cout<<s.size()<<endl;
// set<std::vector<int> >::iterator it;
// for(it=s.begin();it!=s.end();it++)
// {
// 	a=*it;
// 	FOR(i,a.size())
// 	{
// 		cout<<a[i]<<" ";
// 	}
// 	cout<<endl;
// }
return 0;
}
