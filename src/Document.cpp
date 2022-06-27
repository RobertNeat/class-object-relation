#include "Document.h"
#include "Date.h"

#include <iostream>
#include <string>

using namespace std;

Document::Document(string name, Date signingDate, string number)
{
    this->name=name;
    this->signingDate=signingDate;
    this->number=number;
}

void Document::show(){
    cout<<name<<endl<<"Signed ";
    signingDate.show();
    cout<<" with number "<<number<<endl;
}

void Document::load(){
    cout<<"Input document name:";
    cin>>name;
    signingDate.load();
    cout<<"Input document number:";
    cin>>number;
}

Document::~Document()
{
    //dtor
}
