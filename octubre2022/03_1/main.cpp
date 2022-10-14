#include <bits/stdc++.h>
#include <limits>
#include <vector>
using namespace std;


vector<int> countingSort(vector<int> arr) {
    int max=numeric_limits<int>::min();
    int min=numeric_limits<int>::max();

    for(int w: arr) {
        if(w>max)
            max=w;
        if (w<min)
            min=w;
    }
    cout<<max<< " " <<min<< endl;
    vector<int> aux(100,0);
    for (int w:arr){
        aux[w]++;
    }
    return aux;

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
    vector<int> l=countingSort(vector<int>{1,3,1,2,7,5,2});
    for (int a: l){
        cout<<a<<" ";
    }
    return 0;
}
