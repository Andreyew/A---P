//program ma wyswietlic kwadrat o boku lenhgt oraz bok ma sie skladac ze znaków = *
//program ma prosic o dlugosc boku a nastep[nie wyswietlac kwadrat

#include<iostream>

using namespace std;

int main () {
    int lenght;    
    string sign0="**", sign1="  "; //char pojedyńczy cudzysłów
    cout << "jaka ma być dlugość boku kwadratu: ";
    cin >> lenght;
    for (int i=0; i<lenght; i++){
        for (int j=0; j<lenght; j++){
            if (i==0){
                cout<<sign0;
            } 
            else if (i==lenght-1){
                cout<<sign0;
            }
            else if (j==0){
                cout<<sign0;
            }
            else if (j==lenght-1){
                cout<<sign0;
            }
            else{
                cout<<sign1;
            }    
        }
        cout<<"\n";
    }



}