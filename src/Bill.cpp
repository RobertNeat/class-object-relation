#include "Bill.h"

#include "Client.h"
#include "Product.h"
#include "Date.h"

#include <string>
#include <iostream>

using namespace std;

Bill::Bill(Client *client):Document()
{
    productAmount=5;
    this->client=client;
    this->products=new Product[productAmount]();
}

Bill::Bill(string name,Date signingDate,string number,int producsAmount, Client *client){
    this->client=client;
    this->productAmount=productAmount;
    this->products=new Product[producsAmount]();
}

void Bill::loadProducts(){
    for(int a=0;a<productAmount;a++){
        Product product;
        product.load();
        products[a]=product;
    }
}


void Bill::load(){
    Document::load();
    cout<<"Input product count:";
    cin>>productAmount;
    loadProducts();
}


void Bill::show(){
    Document::show();
    cout<<"Client:"<<endl;
    client->show();
    cout<<"Goods:"<<endl;
    for (int a=0;a<productAmount;a++){
        products[a].show();
    }
    cout<<"Summary cost: "<<calculateValue()<<endl;
}

float Bill::calculateValue(){
    float result=0;
    for (int a=0;a<productAmount;a++){
            result+=products[a].getCost();
    }
    return result;
}

Bill::~Bill()
{
    //dtor
}
