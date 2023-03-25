#include <bits/stdc++.h>
using namespace std;

bool isIn(char x,string & s ){
    for(int w=0; w<s .length();w++){
        if (s[w]==x){
            s[w]=' '; 
            return true;
        }
    }
    return false ;
}


int anagram(string s) {
    if ( s.length()%2 !=0)
        return -1; 
    //split strings
    
    int l=s.length()/2;

    string word1;
    string word2;

    for (int i=0; i<s.length();i++){
        if (i<l)
            word1+=s[i];
        else 
            word2+=s[i];
    }
    //anagram 
    int count =word1.length();

    for (char t: word1){ 
        if (isIn(t,word2))
            count--;
    }
    return count;
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
