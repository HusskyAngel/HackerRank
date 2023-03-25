#include <bits/stdc++.h>
#include <limits>
using namespace std;
vector<int>  unfariness(vector <int> arr){
    vector <int> stack;

}

int maxMin(int k, vector<int> arr) {
    sort(arr.begin(),arr.end());
    int minimun=numeric_limits<int>::max();    
    for (int i=0; i<(arr.size()-k+1); i++){
        if (minimun<arr[i+k-1]-arr[i])
            minimun=arr[i+k-1]-arr[i];
    }
    return minimun;
}

int main(int argc, char **argv){
    ios_base::sync_with_stdio(false); //fast I/O
    cin.tie(NULL);                    //
    cout.tie(NULL);


/*
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int ans = 0;
    for(int i = 0; i < n; i++) ans = max(ans, f(i, a));

    cout << ans << "\n";


    return 0;
*/
}
