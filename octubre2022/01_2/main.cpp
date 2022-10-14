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
            aux_return.push_back(x);
        }
    }
    return aux_return;
}
//secondary options 
string classOption(string s, char option){

}
string methodOption(string s, char option){

}
string varOption(string s, char option){

}




int main(int argc,char ** argv){
    string s;
    cin>>s;	    	
    char *options=searchOptions(s);
    s=splitOptions(s);

    if (options[0]=='S'){
        s=split(s);
        if (options[1]=='C'){

        }else if(options[1]=='M'){

        }else{

        }

    }else{
        if (options[1]=='C'){

        }else if(options[1]=='M'){

        }else{

        }
    }

    cout<<s;
	return 0;
}



