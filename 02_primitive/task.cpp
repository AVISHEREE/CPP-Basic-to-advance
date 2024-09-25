#include<iostream>
#include<string>

using namespace std;

int main(){
    string userTea;
    int teaQuantity;

    cout << "what would you like to order in tea :";
    getline(cin,userTea);

    //ask for the quantity from the user
    cout << "how many cups of tea you like to have :";
    cin >> teaQuantity;
    cout <<" here is your " << teaQuantity << " cups of " << userTea << endl;
    cout << userTea << endl;
}