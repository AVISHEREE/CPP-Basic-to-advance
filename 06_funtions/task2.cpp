#include<iostream>
#include<string>
using namespace std;

string askName();//function declaration
void sayHello(string name){
    cout<<"Hello "<<name<<" welcome to cpp codes " << endl;
}

int main(){
    string temp = askName();
    sayHello(temp);
    return 0;
}

string askName(){ // function define 
    string userName;
    cout<<"Whats your name: ";
    getline(cin,userName);
    return userName;
}