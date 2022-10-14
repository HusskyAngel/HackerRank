#include <bits/stdc++.h>
using namespace std;

vector<int> maximumPerimeterTriangle(vector<int> sticks) {
    int max_side,second_side,third_side;
    max_side=second_side=third_side=0;
    int max_index;
    
    for(int x=0; x<sticks.size(); x++){
        if (sticks[x]>max_side){
            max_side=sticks[x];
            max_index=x;
        }
    }

    int max_sticks_val=0;

    for (int w=0; w<sticks.size()-1;w++){
        if (w==max_index)continue;

        for(int y=w+1;y<sticks.size();y++){
            if (y==max_index) continue;
            if(max_side+sticks[w]> sticks[y] &&
              max_side+sticks[y]>sticks[w]&& 
              sticks[w]+sticks[y]>max_side &&
              sticks[w]+sticks[y]+max_side>max_sticks_val&&
              sticks[w] !=0 && sticks[y]!=0){

                second_side=sticks[w];
                third_side=sticks[y];
                max_sticks_val=max_side+sticks[w]+sticks[y];

            }
                

        }
    }
    return {second_side,third_side,max_side};

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
