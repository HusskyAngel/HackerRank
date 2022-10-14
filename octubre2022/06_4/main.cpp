#include <bits/stdc++.h>
using namespace std;



int sum(vector<vector<int>> a){
    int size_s=a.size()/2;
    int count=0;
    for(int x=0; x<size_s;x++){
        for(int y=0;y<size_s;y++){
            count+=a[x][y];
        }
    }
    return count;
} 

int flippingMatrix(vector<vector<int>> matrix) {
    int size_s=matrix.size();
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
