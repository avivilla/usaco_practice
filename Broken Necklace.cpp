/*ID: avimall1
LANG: C++
TASK: beads
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
freopen("beads.in","r",stdin);
freopen("beads.out","w",stdout);
int test,case_no=1;
int n;
cin>>n;
  string a;

 cin>>a;
  vector<char>vt;

 FOR(i,a.size())
   vt.push_back(a[i]);
   FOR(i,a.size())
   vt.push_back(a[i]);
   int maximum=0;
  vector<int>back,frnt;
  int mark[2*n+5]={0};

  FOR(i,vt.size())
   {
    char ch=vt[i];
      if(!mark[i] && vt[i]!='w')
      {
   int cnt=0;
   while(cnt<=n)
   {
    if(vt[i+cnt]=='w' || vt[i+cnt]==ch)
      {
       
        mark[i+cnt]=1;
            cnt++;

      }
      else
        break;

   }
    int j=i-1;
    int cmn=0;
    while(cnt<=n && j>=0)
    {
      if(vt[j]=='w')
        cnt++,cmn++,j--;
      else
        break;
    }
    frnt.push_back(cnt);
    back.push_back(cmn);
    //cout<<cnt<<" "<<cmn<<endl;
      }
   }

   if(frnt.size()<=1)
        {
          cout<<n<<endl;
          return 0;
        }
   FOR(i,frnt.size()-1)
   {
    
     maximum=max(maximum,frnt[i]+frnt[i+1]-back[i+1]); 
    
   }

cout<<min(maximum,n)<<endl;
return 0;
}
