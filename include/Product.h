#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>

using namespace std;

class Product
{
    public:
        Product(string name="default_name",float price=1.99,int amount=1);
        ~Product();

        void load();
        void show();

        float getCost();

    protected:
        string name;
        float price;
        int amount;
    private:
};

#endif // PRODUCT_H
