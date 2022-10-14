#include <bits/stdc++.h>
using namespace std;

int sockMerchant(int n, vector<int> ar) {

    sort(ar.begin(),ar.end());
    int count = 0;
    for(int x=0; x<ar.size()-1;x++){
        if(ar[x+1]==ar[x]){
            count++;
            x++;
        }
    }
    return count;
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
