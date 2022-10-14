#include <bits/stdc++.h>
#include <limits>
using namespace std;


int getTotalX(vector<int> a, vector<int> b){

    int count = 0;

    int max=numeric_limits<int>::min();
    int min=numeric_limits<int>::max();
    for(int x: a){
        if(x> max)
            max=x;
        if(x< min)
            min=x;
    }
   for(int y: b){
       if(y> max)
            max=y;
        if(y< min)
            min=y;
    }


   for(int w=min; w<=max; w++){
      bool flag=false;
      for(int x: a){
        if(w%x!=0){
            flag=true;
            continue;
        }
      }
      for(int x: b){
          if(w%x!=0){
              flag=true;
              continue;
          }
      }
      if(flag)
          continue;
      count++;
   } 
   return count;
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
