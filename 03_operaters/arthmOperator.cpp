#include<iostream>
#include<string>

using namespace std;

int main(){
    int NumberOfCups;
    double pricePerCup,totalPrice,discountedPrice;
    //getting input from user
    cout << "enter number of cup tea you want: ";
    cin >> NumberOfCups;
    cout << "enter the price per cup: ";
    cin >> pricePerCup;
    //calculation part
    totalPrice = NumberOfCups * pricePerCup;
    if(totalPrice >= 100){
        discountedPrice = totalPrice - (totalPrice * 0.3);
        cout << "congratulations you have a discount of "<<(totalPrice - discountedPrice) << "\n";
        cout << "your total is " << discountedPrice << "\n"; 
    }
    else{
        cout << "your total is " << totalPrice << "\n"; 
    }

    return 0;
}