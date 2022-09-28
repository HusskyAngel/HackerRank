#include <bits/stdc++.h>
using namespace std;

vector<int> breakingRecords(vector<int> scores) {
    int max=scores[0];
    int min=scores[0]; 

    int max_count=0;
    int min_count=0;

    for(int x: scores) {
        //cout<<x<<endl;
        if(x<min){
            min=x;
            min_count++;
        }
        if(x>max){
            max=x;
            max_count++;
        }
    }

    vector<int> auxvec{max_count,min_count};
    return auxvec;
}

int main(int argc,char ** argv){
		
    vector<int> aux{10 ,5 ,20 ,20 ,4 ,5 ,2 ,25 ,1};
    cout << breakingRecords(aux)[0] <<" "<<  breakingRecords(aux)[1] <<endl;
	return 0;
}



