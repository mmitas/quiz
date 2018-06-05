#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    int poprawna, zla;
    string odpowiedz;
    string podsumowanie;

    struct pytanie {
        string tresc;
        bool odpowiedz;
    };

    pytanie pytania[10] = {
        {"2+2*2-2 = 4", true},
        {"Stolica Niemiec to Bonn", false},
        {"Delfin jest ssakiem",true},
        {"Samolot jest lzejszy od powietrza bo lata",false},
        {"Wiosna zaczyna sie 21-go marca",true},
        {"Mecz pilkarski ma 3 polowy",false},
        {"Kobza to instrument dety",false},
        {"Jan Kochanowski byl malarzem",false},
    };

//    for(int i=0; i<10; i++){
//        if (pytania[i].tresc.size()>0) {
//        cout << "pytanie: {" << pytania[i].tresc << "} i poprawna odpowiedz - " << (pytania[i].odpowiedz == true ? "tak" : "nie") << "}" << endl;
//        }
//    }

    do {
        poprawna = 0, zla = 0;
        cout << "Czas na quiz ..." << endl << "Odpowiedz tak lub nie " << endl;
        for(int i=0; i<10; i++){
            pytanie danePytania = pytania[i];

            if (danePytania.tresc.size()>0) {
                cout << "pytanie " << i+1 << ": " << danePytania.tresc << " ? - ";
                cin >> odpowiedz;
                if (odpowiedz == (danePytania.odpowiedz == true ? "tak" : "nie")) {
                    poprawna++;
                } else {
                    zla++;
                }
                continue;
            }
            cout << endl << "Koniec quizu ..." << endl << endl;
            break;
        }

        podsumowanie = (zla < poprawna ? "Brawo masz wiecej dobrych odpowiedzi :) !!!" : "Popraw sie, masz wiecej zlych odpowiedzi. :(");

        cout << "Twoj wynik, odpowiedzi poprawne [" << poprawna << "] i bledne [" << zla << "] " << endl << podsumowanie << endl << endl;
        cout << "Jeszcze raz [tak/nie] ? ";
        cin >> odpowiedz;
    } while(odpowiedz=="tak");

    cout << endl << "Do widzenia !!!" << endl;

    return 0;
}
