#include <bits/stdc++.h>
#include <limits>
using namespace std;


int minimumAbsoluteDifference(vector<int> arr) {
    int min_dif=numeric_limits<int>::max();
    sort(arr.begin(), arr.end());
    for (int x=1;x<arr.size();x++){
        if(abs(arr[x-1]-arr[x])<min_dif){
            min_dif=abs(arr[x-1]-arr[x]);
        }
    }
    return min_dif;
}



int main(int argc, char **argv){
    ios_base::sync_with_stdio(false); //fast I/O
    cin.tie(NULL);                    //
    cout.tie(NULL);



    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans=minimumAbsoluteDifference(a);
    cout << ans << "\n";


    return 0;

}
