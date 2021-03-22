// napisz program sprawdzający
// czy podana liczba jest wieksza, mniejsza czy równa zero


#include<iostream>

using namespace std;

int main(){
    double number, number1;
    cout<<"Podaj cyfrę: ";
    cin>> number;
    if (number<0){
        cout<<number<<" jest liczbą mniejszą od zera \n";
    }
    else if (number==0){
        cout<<number<< " jest liczbą równą zero \n";
    }
    else if (number>0){
        cout<<number<< " jest liczbą większą od zera \n";
    }
    else if (number != number1){  //nie wiem jak sprawic by pojawił się komunikat po wpisaniu wartości innej niż int
        cout<<"podana wartość jest błędna \n";
    }

}


