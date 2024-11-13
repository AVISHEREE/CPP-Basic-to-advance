#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string>
#include<iterator>

using namespace std;

struct Employee{
    int ID;
    string name;
    double salary;
};

//Employee& it takes refrence and just using it don't store it
void displayEmployee(const Employee& emp){
    cout << "ID" << emp.ID << " ,Name" << emp.name << " , Salary" << emp.salary << endl;
}

int main(){

    vector<Employee> employees = {
        {101,"Akash",1000},
        {102,"Jaya",900},
        {103,"Pankesh",800},
        {104,"Abc",500},
        {105,"Xyz",100},
    };
       //begin of our vector,end of our vector,a lamda function to compare value and return true or false
    sort(employees.begin(),employees.end(),[](const Employee& e1,const Employee& e2){
        return e1.salary > e2.salary;
    });
    cout << "Employess sorted by salary highest to lowest" << endl;

    for_each(employees.begin(),employees.end(),displayEmployee);

    vector<Employee> highEarners;

    copy_if(
        employees.begin(),
        employees.end(),
        back_inserter(highEarners),
        [](const Employee& e){
            return e.salary > 500;
        });
    
    cout << "Employess with salary greater than 500" << endl;
    for_each(highEarners.begin(),highEarners.end(),displayEmployee);
    double totalSalary = accumulate(employees.begin(),employees.end(),0.0,[](double sum,const Employee& e){
        return sum + e.salary;
    });
    double averageSalary = totalSalary / employees.size();

    auto highestPaid = max_element(employees.begin(),employees.end(),[](const Employee& e1,const Employee e2){
        return e1.salary < e2.salary; 
    });
    
    return 0;
}