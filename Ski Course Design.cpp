/*ID: avimall1
LANG: C++
TASK: skidesign
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


int main()
{
ios_base::sync_with_stdio(false);
int test,case_no=1;
freopen("skidesign.in","r",stdin);
freopen("skidesign.out","w",stdout);
int n;
cin>>n;
int a[n+5];
FOR(i,n)
  cin>>a[i];
  int mark[105]={0};
sort(a,a+n);

int minimum=inf;
int hill[105]={0};

for(int i=a[0];i<=a[n-1]-17;i++)
{
	int cnt=0;
    int soil=0;
	int s=i;
	int e=i+17;
	FOR(i,n)
	{
		if(a[i]<s)
		{
			cnt+=(s-a[i])*(s-a[i]);
			soil+=(s-a[i]);
		}
		else if(a[i]>e)
		{
			{
			cnt+=(e-a[i])*(e-a[i]);
			soil+=(e-a[i]);
		    }
		}
		
	}
       
		
			minimum=min(cnt,minimum);
		
}
cout<<minimum<<endl;
return 0;
}
