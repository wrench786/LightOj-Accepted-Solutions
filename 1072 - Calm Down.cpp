#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define i64 long long
#define PI (acos(-1.0))
#define LIMIT 1000000007
using namespace std;

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif


    int tc,t;
    cin>>tc;
    for(t=1;t<=tc;t++){
    	double R,n,theta,ans;
    	cin>>R>>n;
    	theta = PI/n;
    	ans = (R * sin(theta))/(sin(theta)+1);
    	cout<<"Case "<<t<<": "<<fixed<<setprecision(6)<<ans<<endl;
    }



#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
