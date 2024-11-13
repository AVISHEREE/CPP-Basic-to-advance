#include<iostream>
#include<vector>
using namespace std;

class Chai{
public:
    string teaName;
    int servings;
    vector<string> ingredients;
    // default constructor
    Chai(){
        teaName = "masala chai";
        servings = 3;
        ingredients = {"tea","water","sugar","milk"};
        cout<<"contructor set"<<endl;
    }

    void displayChaiDetails(){
            cout << "tea names: " << teaName << endl;
            cout << "servings: " << servings << endl;
            cout << "Ingredients: " ;
            for(string ingrident:ingredients){
                cout << ingrident << " ";
            }
            cout << endl;
    }
};

int main(){
    Chai defaultChai;
    defaultChai.displayChaiDetails();
    return 0;
}