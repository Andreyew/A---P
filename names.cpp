#include<iostream>

using namespace std;

int main(){
    
    string names[3];

    cout << sizeof (names) << endl;
    cout << sizeof (string) << endl;
    int namesnumber;
    namesnumber = sizeof (names) / sizeof (string);
    cout << namesnumber << "\n";

    
    for (int i=0; i<3; i++){
        cout<<"Type " << i+1 <<" name ";
        cin>>names[i];

        cout<<sizeof(names[i]) << endl;
    }
    cout<<"Names you typed ";

    for (int i=0; i<3; i++){
        cout<<names[i];
        if (i==3-1){
            cout<<"."<<endl;
        }   
        else {
            cout<<", ";
        }

    }


}