#include <bits/stdc++.h>
using namespace std;

//preprocessing 
char* searchOptions(string s){
    static char  aux[]={s[0],s[2]};
    return aux;
}

string splitOptions(string s){
    return s.substr(4,s.size()-4);
}

// meaning options
string combine(string s){
    string aux_return;
    for(char x : s){
       if (x ==' ')
           continue; 
        aux_return.push_back(x);
    }
    return aux_return;
}
string split(string s){
    string aux_return;
    for (char x : s){
        if (x<91){//ascii code
            aux_return.push_back(' ');
            aux_return.push_back(x+32);
        }
    }
    return aux_return;
}
//secondary options 
string classOption(string s){

}
string methodOption(string s){

}
string varOption(string s){

}


int main(int argc,char ** argv){
	    	
	return 0;
}



