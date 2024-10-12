#include<iostream>
#include<string>
using namespace std;
int main(){
    string response;
    while(true){
        cout<<"do you want more tea (type stop to exit): ";
        getline(cin,response);
        if(response == "stop"){
            cout<<"no more teas you want ";
            break;
        }
        cout<<"Heres your tea"<<endl;
    }
    return 0;
}