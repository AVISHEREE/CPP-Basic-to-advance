#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<ctime>
#include<unordered_map>
#include<unordered_set>

using namespace std;

struct Product{
    int ProductID;
    string ProductName;
    string productCategory;
};

struct Order{
    int productID;
    int orderID;
    int quantity;
    string customerID;
    time_t orderDate;
    friend void PrintOrder(const Order& order){
        cout << " productID " << order.productID
             << " OrderId " << order.orderID 
             << " quantity " << order.quantity 
             << " customerID " << order.customerID
             << " Order date " << order.orderDate;  
}
    

};



int main(){
    vector<Product> products = {
        {101,"Samsung a14","Electronics"},
        {102,"Realme Narzo","Electronics"},
        {103,"Bowl","Utensils"},
        {104,"sunscream","Skincare"},
        {105,"Pen","Stationary"}
    };

    deque<string> recentCustomers = {"custmr1","custmr2","custmr3","custmr4"};
    recentCustomers.push_back("custmr5");
    recentCustomers.push_front("custmr6");
    for(string customers : recentCustomers){
        cout << customers << endl;
    }

    list<Order> orderHistory;
    orderHistory.push_back({01,101,3,"abc",time(0)});
    orderHistory.push_back({02, 102, 3, "abc", time(0)});
    orderHistory.push_back({03, 105, 7, "abc", time(0)});
    set<string> categories;
    for(const auto &product : products){
        categories.insert(product.productCategory);
    }

    map<int,int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 7}
    };

    multimap<string,Order> customerOrders; 
    for(const auto &order: orderHistory){
        customerOrders.insert({order.customerID,order});
    }
    for (const auto& pair : customerOrders) {
        cout << "CustomerID: " << pair.first << "=>"; 
        PrintOrder(pair.second);
        cout << endl;
    }

    unordered_map<string, string> customerData = {
        {"C001", "Alice"},
        {"C002", "hitesh"},
        {"C003", "Vidya"},
        {"C004", "max"},
        {"C005", "harry"},
    };

    unordered_set<int> uniqueProductIDs;

    for(const auto &product: products){
        uniqueProductIDs.insert(product.productID);
    }


    return 0;
}