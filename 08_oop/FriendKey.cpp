#include<iostream>
#include<vector>

using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
    public:
        Chai(string name,int serve): teaName(name) , servings(serve){}
        void displayTea() const {
            cout << teaName << endl;
            cout << servings << endl;
        }
    friend bool CompareChais(const Chai &chai1,const Chai &chai2);
};

bool CompareChais(const Chai &chai1,const Chai &chai2){
    return chai1.servings > chai2.servings;
}

int main(){
    Chai MasalaChai("Masala Chai",5);
    Chai GingerChai("Ginger Chai",4);
    MasalaChai.displayTea();
    GingerChai.displayTea();
    if (CompareChais(MasalaChai,GingerChai))
    {
        cout<<"Chai 1 have more servins"<<endl;
    }
    else{
        cout<<"Chai 2 have more servins"<<endl;
    }
    
    return 0;
}