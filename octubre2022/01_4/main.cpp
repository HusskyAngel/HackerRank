#include <bits/stdc++.h>
#include <regex>
#include <string>
using namespace std;



vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> result;
    for (string x:queries){
        string aux_re=x;  
        regex re(aux_re);
        int count=0;
        for(string y: strings){
           if (regex_match(y,re)){
                count++;
           } 
        }
        result.push_back(count);
    }
    return result;
}



int main(int argc, char **argv){
    ios_base::sync_with_stdio(false); //fast I/O
    cin.tie(NULL);                    //


    vector<string> list_strings;

    string  sstrings; 
    cin>> sstrings;
    int sstrings_num=stoi(sstrings);
    for (int str=sstrings_num; str!=0; str--){
        string aux_concatenate; 
        cin >>aux_concatenate;
        list_strings.push_back(aux_concatenate);
    }



    vector<string> list_queries;

    string squeries;
    cin>>squeries;
    int squeries_num=stoi(squeries);
     for (int str=squeries_num; str!=0; str--){
        string aux_concatenate; 
        cin >>aux_concatenate;
        list_queries.push_back(aux_concatenate);
    }
    vector<int > result= matchingStrings(list_strings,list_queries);
    for (int u: result)
        cout<< u<< endl;

    return 0;
}
