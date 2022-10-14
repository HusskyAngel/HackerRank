#include <bits/stdc++.h>
using namespace std;

int countingValleys(int steps, string path) {
     int where=0;
     bool in_valley=false;
     int where_enter_valley;
     int count_valleys=0;

     for(char x: path){
       if (x=='D'){
            where--;
            if (where<0 && !in_valley){
                in_valley=true;
                where_enter_valley=where;
                count_valleys++;
            }
       }else{
           where++;
           if (where>where_enter_valley && in_valley){
                in_valley=false; 
           } 
       } 
     }
     return count_valleys;
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
