#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <iostream>
#include "Date.h"

using namespace std;

class Document
{
    public:
        Document(string name="Document",Date signingDate=Date(),string number="1111");
        ~Document();

        void load();
        void show();
    protected:
        string name;
        Date signingDate;
        string number;
    private:
};

#endif // DOCUMENT_H
