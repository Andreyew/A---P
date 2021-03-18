//program ma wyswietlic kwadrat o boku lenhgt oraz bok ma sie skladac ze znaków = *
//program ma prosic o dlugosc boku a nastep[nie wyswietlac kwadrat

#include<iostream>

using namespace std;

int main () {
    int length, hight;    
    string sign0="**", sign1="  "; //char pojedyńczy cudzysłów
    cout << "jaka ma być dlugość postawy prostokąta: ";
    cin >> length;
    cout << "jaka ma być wysokość prostokąta";
    cin >> hight;
    for (int i=0; i<hight; i++){
        for (int j=0; j<length; j++){
            if (i==0){
                cout<<sign0;
            } 
            else if (i==hight-1){
                cout<<sign0;
            }
            else if (j==0){
                cout<<sign0;
            }
            else if (j==length-1){
                cout<<sign0;
            }
            else{
                cout<<sign1;
            }    
        }
        cout<<"\n";
    }



}