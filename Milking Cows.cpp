/*ID: avimall1
LANG: C++
TASK: milk2
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

struct acompare{

	bool operator()(pii a,pii b)
	{
		return a.fs<b.fs;
	}
};

int main()
{
	freopen("milk2.in","r",stdin);
	freopen("milk2.out","w",stdout);
ios_base::sync_with_stdio(false);
int test,case_no=1;
int n;
cin>>n;
vector<pii>vt,v;
while(n--)
{
	int strt,fnsh;
	cin>>strt>>fnsh;
   vt.push_back(jora(strt,fnsh));

}
sort(vt.begin(),vt.end(),acompare());
pii tem=vt[0];
int strt=tem.fs,fnsh=tem.fs,max_milk=0;
FOR(i,vt.size())
{
     tem=vt[i];
    if(tem.fs<fnsh+1)
    {
    	strt=min(strt,tem.fs);
    	fnsh=max(fnsh,tem.sc);

    }
    else
    {    max_milk=max(max_milk,fnsh-strt);
    	v.push_back(jora(strt,fnsh));
    	strt=tem.fs;
    	fnsh=tem.sc;
    }
}
 max_milk=max(max_milk,fnsh-strt);
    	v.push_back(jora(strt,fnsh));
int no_milk=0;
FOR(i,v.size()-1)
{
   tem=v[i];
   pii tem1=v[i+1];
   no_milk=max(tem1.fs-tem.sc,no_milk);
}
cout<<max_milk<<" "<<no_milk<<endl;
return 0;
}
