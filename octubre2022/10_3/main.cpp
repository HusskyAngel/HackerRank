#include <bits/stdc++.h>
using namespace std;


int pageCount(int n, int p) {
    if (n-p < p){
        if (n-p==1 && n%2==0)
            return 1;
        else 
            return (n-p)/2;
    }else{
        return p/2;
    }
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
    cout<< pageCount(6,5)<<endl;
    return 0;
}
