#include <bits/stdc++.h>
using namespace std;

/*
 *
    If M is 1, it is obvious that Second player will win because the First player can't move.
    If N is even, Second player can do same operation for first players. For example, if First player move {4, 4, 4, 4} -> {2, 4, 4, 4}, Second player can move {2, 4, 4, 4} -> {2, 2, 4, 4}. Finally Second player can make {1, 1, 1, ..., 1}, so Second player can win.
    If N is odd, First player can reduce height of first tower to 1, so you can return to "N is even" case. So, you can prove that first player wins.
    So, the answer is correct.

*/
int towerBreakers(int n, int m){
    if(m==1 || n%2==0) return 2;
    else return 1;
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
