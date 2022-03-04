#include<bits/stdc++.h>
using namespace std;
#define ll int
#define ff first
#define ss second
#define loop(i,a,b) for(int i = (a);i<=(b);i++)
int main(){
    int T,M,N;
    cin>>T;
    while(T--){
        cin>>N>>M;
        vector< pair<ll, int> > v(N);
        loop(i,0,N-1){
            cin>>v[i].ff;
            v[i].ss = i%M; 
        }
        int count = M ;
        int right =0;
        ll ans = INT_MAX;
        sort(v.begin(), v.end());
        vector<int> cnt(M,0);
        loop(left,0,N-1){
            while(right<N and count>0){
                count -= cnt[v[right].ss]==0;
                cnt[v[right].ss]++;
                right++;
            }
            if(count==0){
                ans = min(ans,v[right-1].ff-v[left].ff);
            }
            if(cnt[v[left].ss]>0){
                cnt[v[left].ss]--;
            }
            count += cnt[v[left].ss]==0;
        }
        cout<<ans<<endl;
 
 
        

    }
   
}
