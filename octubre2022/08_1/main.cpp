#include <bits/stdc++.h>
using namespace std;

int birthday(vector<int> s, int d, int m) {
    int sum, comb = 0;
    for(int i=0; i<s.size(); i++){
        sum = 0;
        for(int j=i; j<i+m && j<s.size(); j++){
            sum+= s[j];
        }
        if(sum == d) comb++;
    }
    
    return comb;
}
int main(int argc, char **argv){
    ios_base::sync_with_stdio(false); //fast I/O
    cin.tie(NULL);                    //

     //read n times from std input 
   /*
    vector<int> vec;
    int num;
    cin>> num; 
    while (num!=0){
        int aux; 
        cin>>aux; 
        vec.push_back(aux);
    }
    */
    return 0;
}
