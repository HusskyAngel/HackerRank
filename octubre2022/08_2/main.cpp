#include <bits/stdc++.h>
using namespace std;

string strings_xor(string s, string t) {
    string aux_return;
     for (int n=0; n<s.size();n++){
        if (s[n]!= t[n])
            aux_return+='1';
        else
            aux_return+='0';
     }
     return aux_return;
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
