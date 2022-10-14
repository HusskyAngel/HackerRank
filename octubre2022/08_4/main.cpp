#include <bits/stdc++.h>
#include <limits>
using namespace std;



int migratoryBirds(vector<int> arr) {
    vector <int> vec{0,0,0,0,0};
    for(int z: arr)
        vec[z-1]++;

    int max;
    int max_aux=numeric_limits<int>::min();
    for (int w=0; w<vec.size();w++){
        if(vec[w]>max_aux){
            max=w+1;
            max_aux=vec[w];
        }
    }
    return max;

}



int main(int argc, char **argv){
    ios_base::sync_with_stdio(false); //fast I/O
    cin.tie(NULL);                    //
    int n;
    cin >> n ;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout<<migratoryBirds(arr)<<endl;
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
