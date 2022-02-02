#include <iostream>

using namespace std;

class Urzytkownik{

    int id;
    string login, haslo;

    public:
    Urzytkownik(string, string);
    ~Urzytkownik();
    string getLogin();

    void pokaz();

};
