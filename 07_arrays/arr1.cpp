#include<iostream>
using namespace std;

int totalChaiServed(int chai[],int size){
    int total = 0;
    for(int i = 0; i < size; i++){
        total += chai[i];
    }
    return total;
}

int main(){
    int chaiServed[7] = {50,30,40,60,75,30,99};
    int totalChais = totalChaiServed(chaiServed,7);
    cout << totalChais; 
    return 0;
}
