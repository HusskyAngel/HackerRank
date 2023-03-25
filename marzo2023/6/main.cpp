#include <bits/stdc++.h>
using namespace std;


vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector <vector<int>> arr; 
    
    //creando arrays solicitados
    for (int i=0; i<n;i++){
        arr.push_back(vector<int>{});
    }

    //last answer
    int lastAnswer=0;

    //iterate queries
    for (vector<int> q: queries){
        int tq=q[0];
        int x=q[1];
        int y=q[2];

        int idx =((x^lastAnswer)%n);

        if ( tq == 1){
            arr[idx].push_back(y);
        }else{ //when tq is equal to 2 
            arr[idx][y% arr[idx].size()]=
        }
    }


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
