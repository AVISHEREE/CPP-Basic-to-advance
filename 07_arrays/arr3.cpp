#include<iostream>
using namespace std;

int main(){
    int array[3][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };
    for(int i = 0; i < 3 ; i++){
        cout<<"array "<<i+1<<" Row: \n";
        for(int j = 0; j < 5 ; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}