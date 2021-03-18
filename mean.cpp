//ile liczb chcesz podac
//podaj 1-i
//srednia

#include<iostream>

using namespace std;

int main(){

    int amout;
    cout<<"ile liczb chcesz podac : ";
    cin >> amout;
    int number[amout];
    int sum=0;
for (int i=0; i<amout; i++){
    cout<<"Type " << i+1 <<" number : ";
    cin >> number[i];
    sum = sum + number[i];
}
    //cout<<"sum is : "<< sum <<"\n"; 
    
    cout<<"mean of nomber thay you ipe is: "<< double(sum)/amout << endl; //double(zmienaa)

}