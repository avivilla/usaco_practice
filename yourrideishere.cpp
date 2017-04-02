/*ID: avimall1
LANG: C++
TASK: ride
*/

#include<bits/stdc++.h>
#define pii                pair<int,int>
#define mkp            make_pair
#define fs                 first
#define sc                 second
#define pb                push_back
#define ppb              pop_back()
#define pf                 printf
#define pf1(a)           printf("%d\n",a)
#define pf2(a,b)           printf("%d %d\n",a,b)
#define hi                  printf("hi!\n");
#define sf                  scanf
#define sf1(a)            scanf("%d",&a)
#define sf2(a,b)         scanf("%d %d",&a,&b)
#define sf3(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define sf1ll(a)          scanf("%lld",&a)
#define sf2ll(a,b)       scanf("%lld %lld",&a,&b)
#define sf3ll(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define pcase(x)        printf("Case %d: ",x)
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
    freopen("ride.in","r",stdin);
    freopen("ride.out","w",stdout);
    char a[10],b[10];
    sf("%s",a);
    sf("%s",b);
    int cnt1=1;
int   n=strlen(a);
    FOR(i,n)
    {
        int x=a[i]-'A'+1;
        cnt1=(cnt1*x)%47;
    }
    int cnt2=1;
     n=strlen(b);
    FOR(i,n)
    {
        int x=b[i]-'A'+1;
        cnt2=(cnt2*x)%47;
    }
    if(cnt1==cnt2)
        pf("GO\n");
    else
        pf("STAY\n");
return 0;
}



