#include <bits/stdc++.h>
using namespace std;




int lonelyinteger(vector<int> a) {
    sort(a.begin(), a.end());
    for(int i =0; i<a.size();i+=2){
        if (a[i]!=a[i+1])
            return a[i];
    } 
    //never should return a[0] with problems limitations 
    return a[0];
}


int main(int argc, char **argv){
    ios_base::sync_with_stdio(false); //fast I/O
    cin.tie(NULL);                    //
    vector<int> aux{1,2,3,4,3,2,1};
    cout<<lonelyinteger(aux)<<endl;
    return 0;
}
