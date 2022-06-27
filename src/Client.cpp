#include "Client.h"
#include <string>
#include <iostream>

using namespace std;

Client::Client(string name, string surname, string NIP)
{
    this->name=name;
    this->surname=surname;
    this->NIP=NIP;
}

void Client::load(){
    cout<<"Input name:";
    cin>>name;
    cout<<"Input surname:";
    cin>>surname;
    cout<<"Input NIP:";
    cin>>NIP;
}

void Client::show(){
    cout<<"Client "<<name<<" "<<surname<<endl;
    cout<<"With NIP "<<NIP<<endl;
}

Client::~Client()
{
    //dtor
}
