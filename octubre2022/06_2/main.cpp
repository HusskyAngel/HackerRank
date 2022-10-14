#include <bits/stdc++.h>
using namespace std;




string pangrams(string s) {
    vector <int> aux(26,0);
    for (char x: s ){
        aux[tolower(x)-97]++; 
    }
    for (int r: aux){
        if (r==0)
            return "not pangram";
    }
    return "pangram";

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
