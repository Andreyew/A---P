// napisz program sprawdzający
// podasz dwie liczby z klawiatury
// sprawdzisz króra jest wiesza
// wynik wypiszesz na ekranie
// pamietaj o warunku równości

#include<iostream>

using namespace std;

int main(){
    double number, number1;
    cout<<"proszę podać 2 cyfry: \n";
    cin>>number>> number1;
if (number>number1){
    cout<<number<<" jest wiekszy od "<<number1<<endl;
}
else if (number<number1){
    cout<<number<<" jest miejszy od "<<number1<<endl;
}
else if (number==number1){
    cout<<number<<" jest równy "<<number1<<endl;
}
}