#include <iostream>
#include "Urzytkownik.h"

using namespace std;



Urzytkownik::Urzytkownik(string l, string h){
    login = l;
    haslo = h;
}
    string Urzytkownik::getLogin(){
    return (login);
    }

void Urzytkownik::pokaz(){
      cout << Urzytkownik::getLogin();
    }

    Urzytkownik::~Urzytkownik(){
    }
