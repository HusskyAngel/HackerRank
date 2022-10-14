#include <bits/stdc++.h>
#include <vector>
using namespace std;


int f(int i, vector<int> &a){
    int ans = 1;
    int mini, maxi;
    mini = maxi = a[i];
    
    for(int j = i + 1; j < a.size(); j++){
        mini = min(mini, a[j]);
        maxi = max(maxi, a[j]);
        if(maxi - mini > 1) break;
        ans++;
    }
    
    return ans;
}


int main(){
    ios_base::sync_with_stdio(false); //fast I/O
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int ans = 0;
    for(int i = 0; i < n; i++) ans = max(ans, f(i, a));

    cout << ans << "\n";

    return 0;
}
