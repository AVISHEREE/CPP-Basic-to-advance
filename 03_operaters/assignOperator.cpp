#include<iostream>
#include<string>

using namespace std;

int main(){
    int teaBags;
    cout << "enter the number of tea Bags you have :";
    cin >> teaBags;
    if(teaBags < 10){
        teaBags += 5;
        cout << "congratulation you got more tea Bages, total teabags is " << teaBags << endl;
    }
    else{
        cout << "total teabags " << teaBags << endl;
    }

    return 0;
}