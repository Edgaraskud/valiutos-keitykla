// valiutos keityklos programa
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int pasirinkimas;
    int valiuta;
    double kiekis;

    cout<<"1-palyginti 2-pirkti 3-parduoti\n";
    cin>>pasirinkimas;

    cout<<"1-GBP 2-USD 3-INR\n";
    cin>>valiuta;

    cout<<"kiekis:\n";
    cin>>kiekis;

    cout << fixed << setprecision(2);
    cout << "Rezultatas: ";

    if(pasirinkimas==1){
        if(valiuta==1) cout<<kiekis<<" EUR = "<<kiekis*0.8729<<" GBP\n";
        if(valiuta==2) cout<<kiekis<<" EUR = "<<kiekis*1.1793<<" USD\n";
        if(valiuta==3) cout<<kiekis<<" EUR = "<<kiekis*104.6918<<" INR\n";
    }

    if(pasirinkimas==2){
        if(valiuta==1) cout<<kiekis*0.8600<<" GBP\n";
        if(valiuta==2) cout<<kiekis*1.1460<<" USD\n";
        if(valiuta==3) cout<<kiekis*101.3862<<" INR\n";
    }

    if(pasirinkimas==3){
        if(valiuta==1) cout<<kiekis*0.9220<<" EUR\n";
        if(valiuta==2) cout<<kiekis*1.2340<<" EUR\n";
        if(valiuta==3) cout<<kiekis*107.8546<<" EUR\n";
    }

    return 0;
}
// programos pabaiga
