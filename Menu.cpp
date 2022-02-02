#include <iostream>
#include "Menu.h"
using namespace std;

Menu::Menu(){}

void Menu::menuLogowanie(){
    cout << "1. Logowanie \n";
    cout << "2. Rejestracja \n";
    cout << "9. Zakoncz program \n";
}

void Menu::menuLogowanieWyborOpcji(){
        cout << "Wybierz :  \n";
        int x;
         cin >> x;
         switch ( x ) {
    case 1:
        cout << "wybrano opcje nr1";
       // zalogujUrzytkownika();
        break;
    case 2:
    cout << "wybrano opcje nr 2";
       // dodajUrzytkownika();
        break;
    case 9:
    cout << "wybrano opcje nr 9";
      // exit ( 0 );
    }

}
