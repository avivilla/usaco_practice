/*
ID: avimall1
LANG: C++
TASK: friday

*/
#include<bits/stdc++.h>
#define pii                pair<int,int>
#define mkp            make_pair
#define fs                 first
#define sc                 second
#define pb                push_back
#define ppb              pop_back()
#define pf                 printf

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
   freopen("friday.in","r",stdin);
   freopen("friday.out","w",stdout);
    int n;
    int cnt=2;
    int month[]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int day_cnt[10]={0},tem_cnt=0;
    cin>>n;
    for(int i=1900; i<1900+n; i++)
    {

        FOR(j,12)
        {


            int day_of_month=month[j];
            if(((i%400==0) || (i%4==0 && i%100!=0)) && j==1)
            {


                day_of_month=29;
            }

            FOR(k,day_of_month)
            {
               if(k==12) {
                    day_cnt[cnt%7]++;
                    tem_cnt++;
               }
                cnt++;


            }


        }



    }
    cout<<day_cnt[0];
    for(int i=1;i<7;i++)
        cout<<" "<<day_cnt[i];
    cout<<endl;

    return 0;
}
