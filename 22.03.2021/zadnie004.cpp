// prosi o width i height

//   (i+j)%2 == 0  // lub 1

//  ##  ##  ##  ##  ##
//    ##  ##  ##  ##
//  ##  ##  ##  ##  ##
//    ##  ##  ##  ##
//  ##  ##  ##  ##  ##
//    ##  ##  ##  ##
//  ##  ##  ##  ##  ##
//    ##  ##  ##  ##
//  ##  ##  ##  ##  ##

#include<iostream>

using namespace std;

int main(){
    int width=9, height=9;
    // cout<<"Podaj wysokość: ";
    // cin>>height;
    // cout<<"Podaj długość: ";
    // cin>>width;
     string star="##", space="  ";
    for (int i=1; i<=height; i++){
        for (int j=1; j<=width; j++){
            if ((i+j)%2==0){
                cout<<star;
            }
            else if ((i+j)%2==1){
                cout<<space;
            }
        }
    cout<<"\n";
    }



}