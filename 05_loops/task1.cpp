#include<iostream>
using namespace std;

int main(){
    int teaCups;
    cout<<"Enter the number of teacups";
    cin>>teaCups;
    while(teaCups > 0){
        teaCups--;
        cout<<"Serving a cup of tea \n"<<teaCups<<" remaining \n";
    }
    cout<<"All cups served ";
    return 0;
}