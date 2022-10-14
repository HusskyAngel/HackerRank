#include <bits/stdc++.h>
using namespace std;

int marsExploration(string s) {
    int aux = 0;
    for( int i = 0; i < s.size(); i += 3 ){
        if( s[i] != 'S' ) aux++;
        if( s[i+1] != 'O' ) aux++;
        if( s[i+2] != 'S' ) aux++;
    }
    return aux;
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
