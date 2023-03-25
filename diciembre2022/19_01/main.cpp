#include <bits/stdc++.h>
using namespace std;

char caesarMin(char x,int k){
    int w=(int)x;
    if ((w+k)>122){
        char aux=k+w+97-122;
        return aux;
    }
    else{ 
        char aux=(k+w);
        return aux;
    }
}

char caesarMax(char x, int k){
    int w=(int)x;
    if ((w+k)>90){
        char aux=k+w+65-90;
        return aux;
    }
    else{
        char aux=(char)(w+x);
        return aux;
    }
}

string caesarCipher(string s, int k) {
    string r=s;
    string aux_return="";
    for (int x=0; x<s.size();x++){
       if(x>=65 and x<=90){
            aux_return+=caesarMax(r[x],k);
       }else if (x>=97 and x<=122){
            aux_return+=caesarMin(r[x],k);
       }else
           continue;
    }
    cout<<aux_return<<endl;
    return aux_return;
}


int main(int argc, char **argv){
    ios_base::sync_with_stdio(false); //fast I/O
    cin.tie(NULL);                    //
    cout.tie(NULL);
    cout<<caesarCipher("middle-Outz", 2)<<endl;

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
