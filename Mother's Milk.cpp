/*ID: avimall1
LANG: C++
TASK: milk3
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
int a,b,c,mark[22][22][22]={0};
set<int>s;
void solve(int x,int y,int z)
{
	//hi;
	if(x<0 || x>a || y>b ||z>c || y<0 ||z<0)
		return ;
	if(x==0)
	{
		//hi;
  s.insert(z);
 
	}
	//hi;
	//cout<<x<<" "<<y<<" "<<z<<endl;
	if(mark[x][y][z])
		return ;
	//hi;
	mark[x][y][z]=1;
	//cout<<z<<endl;
	if(z>0)
	{
		//cout<<"akfhjkafh\n";
		if(z>a-x)
			solve(a,y,z-(a-x));
		else solve(x+z,y,0);
		if(z>b-y)
			solve(x,b,z-(b-y));
		else solve(x,y+z,0);
	}
      if(x>0){
      	if(x>b-y)
			solve(x-(b-y),b,z);
		else solve(0,y+x,z);
		if(x>c-z)
			solve(x-(c-z),y,c);
		else solve(0,y,z+x);
	}
if(y>0)
	{
		if(y>a-x)
			solve(a,y-(a-x),z);
		else solve(x+y,0,z);
		if(y>c-z)
			solve(x,y-(c-z),c);
		else solve(x,0,y+z);
	}
	return ;

}
int main()
{
ios_base::sync_with_stdio(false);
int test,case_no=1;
freopen("milk3.in","r",stdin);
freopen("milk3.out","w",stdout);

cin>>a>>b>>c;
solve(0,0,c);
set<int>::iterator it;
int cnt=0;
for(it=s.begin();it!=s.end();it++)
{
	int x=*it;
	cout<<x;
	cnt++;
	if(cnt==s.size())
		cout<<endl;
	else cout<<" ";
}

return 0;
}
