#include  <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) {
    vector <vector<int>> pairs;
     for (int i=n-1; i>=0; i--){
        for (int j=i-1; j>=0;j--){
            if( (ar[i]+ar[j])%k ==0){
                vector <int> aux_push{ar[i],ar[j]};
                pairs.push_back(aux_push);
            }
        } 
     }
     return pairs.size();
}


int main(int argc, char **argv){

}
