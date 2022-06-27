#ifndef CLIENT_H
#define CLIENT_H
#include <string>

using namespace std;

class Client
{
    public:
        Client(string name="Robert", string surname="Neat", string NIP="01234567");
        ~Client();

        void load();
        void show();
    protected:
        string name;
        string surname;
        string NIP;
    private:
};

#endif // CLIENT_H
