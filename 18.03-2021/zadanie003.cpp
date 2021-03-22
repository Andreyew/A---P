// napisz program sprawdzający
// poprosisz o imie
// na ekranie czesc .... inie
// poprosisz o nazwisko
// poprosisz o plec m/f
// poprosisz o wiek --- komentarz wiecej lub równe 18
// jezeli m i ma mnie niz 18 lat
// to napisze pamietaj szanuj kobiety
// jezeli m i ma wiecej niz 18 lat
// zapytaj sie czy ma dzieci
// jezeli f i ma mniej niz 18 lat
// to uwazaj na mezczyzn
// jezli f i ma wiecej niz 18
// czy masz meża
// jezeli f i nie ma meza
// zapytaj czy pojdziemy na kawe
// jezeli f i ma meza
// to narka

#include<iostream>

using namespace std;

int main(){
    string imie, nazwisko, plec;
    int wiek;
    cout<<"Proszę podać imię: ";
    cin>>imie;
    cout<<"Cześć "<<imie<<" podaj swoje nazwisko: ";
    cin>>nazwisko;
    cout<<"prosze podać wiek: ";
    cin>>wiek;
    cout<<"Proszę podać płec (f/m): ";
    cin>>plec;
    
    if (plec=="m"&& wiek<18){                                    //nie wiem jak zrobic nby wczytywało plec f, od razu wykrywa plec m nawet jak wpisze sie bylejaka wartosc
        cout<<imie<<" "<<nazwisko<<" szanuj kobiety \n";
    }    
    else if (plec=="m"&& wiek>=18){
        string dzieci;
        cout<<imie<<" "<<nazwisko<<" masz dzieci? y/n: ";
        cin>>dzieci;
        if (dzieci=="y"){
            cout<<" gratuluje \n";
        }
            else{
                cout<<"a to pech \n";
            }  
    }              
    else if(plec=="f"&& wiek<18){
        cout<<imie<<" "<<nazwisko<<" uważaj na mężczyż \n";
    }
    else if(plec=="f"&& wiek>=18){
        string maz;
        cout<<imie<<" "<<nazwisko<<" czy masz meza? y/n : ";
        cin>>maz;
        if (maz=="n"){
            string randka;
            cout<<imie<<" "<<nazwisko<<" czy umówisz sie ze mna na randke? y/n: ";
            cin>>randka;
            if (randka=="y"){
                cout<<"ekstra :D \n";
            }
            else{
                cout<<"narka \n";
            }
        }    
        else{
            cout<<"narka \n";
            }    
           
        } 
}
