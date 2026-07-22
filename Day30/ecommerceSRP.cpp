#include<bits\stdc++.h>
using namespace std;
class Product{
    public:
    string name;
    int price;
    public:
    Product(string name,int price){
        this->name=name;
        this->price=price;
    }
    public:
    void addProduct(){
        cout<<"Product added to cart"<<endl;
    }
    public:
    void getProductPrice(){
        cout<<"Price of the product is : "<<price<<endl;
    }
    public:
    void makePayment(){
        cout<<"Paying the amount Rs "<<price<<" for "<<name<<endl;
    }
};
class Payment{
    public:
    void pay(string name, int price){
        cout << "Paying the amount Rs " << price << " for " << name << endl;
    }
};

class PriceDetails{
    public:
    void getProductPrice(int price){
        cout << "Product Price is: " << price << endl;
    }
};

int main(){
    // Product p("Laptop", 50000);

    Product *ptr = new Product("Laptop", 50000);

    Payment payment;
    PriceDetails price;

    price.getProductPrice(ptr -> price);
    
    payment.pay(ptr -> name, ptr -> price);


}