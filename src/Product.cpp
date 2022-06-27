#include "Product.h"
#include <string>
#include <iostream>

using namespace std;

Product::Product(string name,float price,int amount)
{
    this->name=name;
    this->price=price;
    this->amount=amount;
}

void Product::load(){
    cout<<"Input product name:";
    cin>>name;
    cout<<"Product price:";
    cin>>price;
    cout<<"Product count:";
    cin>>amount;
}

float Product::getCost(){
    return price*amount;
}

void Product::show(){
    cout<<"Product "<<name<<endl;
    cout<<"In price "<<price<<endl;
    cout<<"In amount "<<amount<<endl;
}

Product::~Product()
{
    //dtor
}
