#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;


vector<int> gradingStudents(vector<int> grades) {
    for (int x=0;x<grades.size();x++){
        if (grades[x] <38)
            continue;
        else{
            int aux=grades[x]%5;
            if (aux==3){
                grades[x]+=2;
            }
            else if (aux==4){
                grades[x]+=1;
            }
            else 
                continue;
        }
    }
    return grades;

}


int main(int argc, char **argv){
    ios_base::sync_with_stdio(false); //fast I/O
    cin.tie(NULL);                    //

    vector<int> vec{73,67,38,33};
    vector<int> v=gradingStudents(vec);
    for(int w: v){
        cout<<w<<endl;
    }
    return 0;
}
