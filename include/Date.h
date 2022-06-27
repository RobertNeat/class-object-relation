#ifndef DATE_H
#define DATE_H
#include <string>

using namespace std;

class Date
{
    public:
        Date(int day=1,int month=1,int year=2000);
        ~Date();

        void show();
        void load();
    private:
        int day;
        int month;
        int year;
};

#endif // DATE_H
