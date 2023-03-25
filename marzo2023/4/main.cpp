#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool search(string pattern ,string s){ 
    for (char i: s){
        for (char t: pattern){
            if (i==t)
                return true;
        }
    }
    return false;
}


int minimumNumber(int n, string password) {
    // return the minimum number of characters to make the password strong
    int cumple=0;

    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";
    
    for (string s: vector<string>{numbers,lower_case,upper_case,special_characters})
        if (search(s, password))
            cumple++;
    int count=0;


    printf("cumple: %d\n",cumple);
    while(cumple < 4 ||  n<6){
        count++;
        cumple++;
        n++;
        printf("count: %d\n",count);
        printf("cumple: %d\n",cumple);
        printf("n: %d\n",n);
    }
    return count;
}


int main(int argc, char **argv){
    ios_base::sync_with_stdio(false); //fast I/O
    cin.tie(NULL);                    //
    cout.tie(NULL);
    string test="Ab1";
    cout<< minimumNumber(test.size(),test); 

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
