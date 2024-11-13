#include<iostream>
#include<vector>
using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;
    public:
        Chai(){
            teaName = "Unknown Tea";
            servings = 3;
            ingredients = {"water","tealeaves"};
        }
        Chai(string TeaName , int Servings , vector<string> Ingredients){
            teaName = TeaName;
            servings = Servings;
            ingredients = Ingredients;
        }

        string getTeaName(){
            return teaName;
        }
        void setTeaname(string NewTeaName){
            teaName = NewTeaName;
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
    Chai chai;
    Chai chai2("chocolate Tea",2,{"chocolate","tea","water","milk"});
    cout << "before change" << endl;
    cout << chai.getTeaName() << endl;
    cout << chai2.getTeaName() << endl;
    chai.setTeaname("Kadak Chai");
    cout << "after changes" << endl;
    cout << chai.getTeaName() << endl;
    cout << chai2.getTeaName() << endl;
}