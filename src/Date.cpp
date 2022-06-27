#include "Date.h"
#include <string>
#include <iostream>

using namespace std;

Date::Date(int day, int month, int year)
{
    this->day=day;
    this->month=month;
    this->year=year;
}

void Date::show(){
    cout<<day<<"/"<<month<<"/"<<year<<endl;
}

void Date::load(){
    cout<<"Input date: (day/month/year)"<<endl;
    cin>>day>>month>>year;
}

Date::~Date()
{
    //dtor
}
