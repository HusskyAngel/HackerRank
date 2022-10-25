#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;


char caesarMin(char x,int k){
    int w=(int)x;
    if ((w+k)>122)
        return char(k+w+97-122);
    else 
        return char(k+w);
}

char caesarMax(char x, int k){
    int w=(int)x;
    if ((w+k)>90){
        return char(k+w+65-90);
    }
    else 
        return char(w+x);
}

string caesarCipher(string s, int k) {
    string r;
    for (int x=0; x<s.size();x++){

       if(s[x]>=65 and s[x]<=90){
           cout<<"entro"<<endl,
            r.push_back(caesarMax(s[x],k));
           cout<<caesarMax(s[x],k)<<endl;
       }else if (s[x]>=97 and s[x]<=122){
            r.push_back(caesarMin(s[x],k));
            cout<<caesarMin(s[x],k)<<endl;
       }else
           r.push_back(s[x]);
    }
    return r;
}

int main(int argc, char **argv){
    ios_base::sync_with_stdio(false); //fast I/O
    cin.tie(NULL);                    //
    cout.tie(NULL);

    cout<<caesarCipher("middle-Outz",2)<<endl;
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
