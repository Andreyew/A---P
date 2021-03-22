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
 
}


