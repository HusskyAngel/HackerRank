#include <bits/stdc++.h>
using namespace std;

void miniMaxSum(vector<int> arr) {

    int min, max;
    max=numeric_limits<int>::min();
    min=numeric_limits<int>::max();

    for(int x: arr){
     if (x<min)
         min=x;
     if(x>max)
         max=x;
    }

    long int auxmax=0;
    bool maxbool= true;
    for(int w:arr ){
        //minimun
        if(w==max and maxbool){ 
            maxbool=false;
            continue; 
        }
        auxmax+=w;
    } 

    long int auxmin=0;
    bool minbool=true;
    for(int y: arr){
        //maximun
        if (y==min and minbool){ 
            minbool=false;
            continue;
        }
        auxmin+=y;
    }
    cout<< auxmax<<" "; 

    cout<< auxmin<<" ";

}


int main(int argc, char **argv){

    vector<int> arr{140537896,243908675,670291834,923018467 ,520718469};
    miniMaxSum(arr);
    return 0;
}
