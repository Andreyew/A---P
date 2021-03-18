#include<iostream>

using namespace std;

int main () {
    string sign="*";
    string line="";
    int wysoko;
    cout<<"podaj wysokość górki :";
    cin>>wysoko;
    for (int i=0; i<wysoko; i++){
        line=line+sign;
        cout<<line  <<"\n";

    }
}    

