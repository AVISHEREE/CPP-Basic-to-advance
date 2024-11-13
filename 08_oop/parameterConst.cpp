#include<iostream>
#include<vector>
using namespace std;

class Chai{
public:
    string teaName;
    int servings;
    vector<string> ingredients;
    // parameter constructor
    Chai(string nameChai,int chaiServings,vector<string> ingr){
        teaName = nameChai;
        servings = chaiServings;
        ingredients = ingr;
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
    Chai defaultChai("garamChai",3,{"tea","water","sugar","milk"});
    defaultChai.displayChaiDetails();
    return 0;
}