#include <iostream>
#include <string>

#include "Client.h"
#include "Bill.h"
#include "Date.h"

using namespace std;

void line(){cout<<"-----------------------------------------\n";}

int main()
{
line();
    cout<<"Bill_1:"<<endl;
    Client *client1 = new Client();
    client1->load();
    client1->show();

    Bill bill1(client1);
    bill1.show();

line();
    cout<<endl<<"Bill_2:"<<endl;
    Client *client2 = new Client("Adam","Kovalsky","76543210");

    Bill bill2("Bill_2",Date(),"1240",3,client2);

    bill2.loadProducts();
    bill2.show();

line();
    cout<<endl<<"Bill_3:"<<endl;
    Bill *bill3 = new Bill(client2);

    bill3->load();
    bill3->show();

    return 0;
}
