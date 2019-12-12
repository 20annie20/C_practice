#include <iostream>

using namespace std;

int main(){
    int liczba1, liczba2;
    float wynikDzielenia;
    cout << "podaj pierwsza liczbe: ";
    cin >> liczba1;
    cout << "podaj druga liczbe: ";
    cin >> liczba2;
    cout << "Dodawanie: "
    << liczba1 + liczba2 << endl;
    cout << "Odejmowanie: "
    << liczba1 - liczba2 << endl;
    cout << "Mnozenie: "
    << liczba1 * liczba2 << endl;
    wynikDzielenia = liczba1 / liczba2;
    cout << "Dzielenie: "
    << wynikDzielenia << endl;

    return 0;

}