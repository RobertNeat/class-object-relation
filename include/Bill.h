#ifndef BILL_H
#define BILL_H

#include "Document.h"
#include "Client.h"
#include "Product.h"
#include "Date.h"

#include <string>

using namespace std;

class Bill:public Document
{
    public:
        Bill(Client *client);
        Bill(string name,Date signingDate,string number,int producsAmount, Client *client);
        ~Bill();

        void loadProducts();
        void load();
        void show();

        float calculateValue();
    protected:
        int productAmount;
        Product *products;
        Client *client;
    private:
};

#endif // BILL_H
