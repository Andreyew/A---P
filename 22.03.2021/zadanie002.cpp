// prosi o width i height
// podpowiedz
// i%2==0 oraz i%2==1

//  #_#_#_#_#
//  #_#_#_#_#
//  #_#_#_#_#
//  #_#_#_#_#
//  #_#_#_#_#
//  #_#_#_#_#
//  #_#_#_#_#


#include<iostream>

using namespace std;

int main(){
    int width, height;
    cout<<"Podaj wysokość: ";
    cin>>height;
    cout<<"Podaj długość: ";
    cin>>width;
    char star='#', space='_';
    for (int i=1; i<=height; i++){
        for (int j=1; j<=width; j++){
            if (j%2==1){
                cout<<star;
            }
            else if (j%2==0){
                cout<<space;
            }
        }
    cout<<"\n";
    }



}