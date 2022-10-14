#include <bits/stdc++.h>
#include <cmath>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    
    int distance_between=abs(x1-x2);
    bool first1=false;
    if(x1>x2) first1=true;
    if (v1==v2 && x1!= x2) return "NO";

    while (true) {
        if (abs((v1+x1 - x2-v2))>distance_between)
            return "NO";
        else if(x1==x2) 
            return "YES";
        else if(!first1 && x1 > x2)
            return "NO";
        else if(first1 && x2>x1) 
            return "NO";

        cout<< "x1"<< x1<<" x2"<< x2<<endl;
        x1+=v1;
        x2+=v2;
    }
    return "YES";
}


int main(int argc, char **argv){
    ios_base::sync_with_stdio(false); //fast I/O
    cin.tie(NULL);                    //
    cout.tie(NULL);
    vector <int> aux; 

    cout << kangaroo(43, 2, 70,2)<<endl;
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
