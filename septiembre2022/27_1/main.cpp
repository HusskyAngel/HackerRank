#include <bits/stdc++.h>
using namespace std;


string timeConversion(string s) {
    size_t size_s=s.size();
    string wformat=s.substr(0,size_s-2);
    string aux_return;

    //find first :
    int pos=0;
    for (char x : s){
        pos++;
        if( x==':')
            break;
    }
    //extract hour
    string straux=wformat.substr(0,pos);
    int aux=12 +( stoi(straux)%12);

    if (s[size_s-2]=='A' && (aux!= 12)){

        return  wformat;

    } else if (aux==12 && s[size_s-2]!='P'){
        aux_return="00";
        aux_return.append(wformat.substr(pos-1,wformat.size()));
        return aux_return;

    } 
    else{
        aux_return=to_string(aux);
        aux_return.append(wformat.substr(pos-1,wformat.size()));
        return aux_return;

    }
}
        

    
int main(int argc, char **argv){
    ios_base::sync_with_stdio(false); //fast I/O
    cin.tie(NULL);                    //
                                      //
    string inputString="12:45:54PM";
    cout<< timeConversion(inputString)<<endl;
    return 0;
}
