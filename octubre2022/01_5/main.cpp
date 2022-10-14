#include <bits/stdc++.h>
using namespace std;

int findMedian(vector<int> arr) {
    vector<int> aux_vec= arr;
    sort(aux_vec.begin(),aux_vec.end());
    return aux_vec[(aux_vec.size()/2) +0.5];
} 

int main(int argc, char **argv){
    ios_base::sync_with_stdio(false); //fast I/O
    cin.tie(NULL);                    //
    return 0;
}
