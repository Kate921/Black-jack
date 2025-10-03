#include <iostream>
#include <time.h>
#include <string>
#include <math.h>
#include <windows.h>
#include <stdlib.h>



using namespace std;

string losowanie(string karty[]){
    //funkcja do usuniencia powtorek kart

    int losowa;
    string karta_wylosowana;

    do{
        losowa = rand() % 52;
    }while(karty[losowa] == "brak");

        karta_wylosowana = karty[losowa];
        karty[losowa] = "brak";

    return karta_wylosowana;
}


int punkty(string wylosowana){
    //funkcja zajmujanca sie punktami
    int punkty = 0;

    if (wylosowana[0] == 'J' || wylosowana[0] == 'D' || wylosowana[0] == 'K'){
        punkty = 10;
    } else if (wylosowana[0] == 'A'){
        punkty = 11;
    } else {
        punkty = stoi(wylosowana);
    }
    return punkty;
}

void gra(string karty[]){
//funkcaja do wyswietlenia gry

    //formalnosci
    string karty_gracza[12];
    string karty_dilera[12];

    int punkty_gracza = 0;
    int punkty_dilera = 0;

    bool A_gracza = false;
    bool A_dilera = false;

    bool diler = false;
    bool koniec = false;

    char pytanie = '+';

    int i = 0;

    //gra
    while (pytanie == '+' || diler == true){

        string gra_punkty;

            if (diler == false){
                karty_gracza[i] = losowanie(karty);
                gra_punkty = karty_gracza[i];
                punkty_gracza += punkty(gra_punkty);

                if(gra_punkty[0] == 'A'){
                   A_gracza = true;
                }

                if(punkty_gracza > 21 && A_gracza == true){
                    punkty_gracza = punkty_gracza - 10;
                    A_gracza = false;
                }
            }

            if (punkty_dilera <= 18 || diler == true){

                karty_dilera[i] = losowanie(karty);
                gra_punkty = karty_dilera[i];
                punkty_dilera += punkty(gra_punkty);

                if(gra_punkty[0] == 'A'){
                   A_dilera = true;
                }

                 if(punkty_dilera > 21 && A_dilera == true){
                    punkty_dilera = punkty_dilera - 10;
                    A_dilera = false;
                }
            }else {
                koniec = true;
            }


        //wynik
        cout << "karty gracza   karty dilera" << endl;


        for(int j = 0; j<i+1; j++){

            cout << karty_gracza[j];

            for(int k = 0; k < 12 - karty_gracza[j].size()+3; k++){
                cout << " ";
            }


            cout << karty_dilera[j];

            cout << endl;
        }
        cout << "punkty gracza  punkty dilera" << endl;

        cout << punkty_gracza << "             ";
        if(punkty_gracza < 10){
            cout << " ";
        }
        cout << punkty_dilera << endl;

        if (diler == true){
            Sleep(3000);
        }


        if(diler == false){
            cout << "nacisnij '+' zeby kontynuowac" << endl;
            cin >> pytanie;
        }

        if(punkty_dilera < punkty_gracza && punkty_gracza <= 21 && pytanie != '+' && koniec == false){
            diler = true;
        }else {
            diler = false;
        }

        system("cls");

        i++;

    }

    //resultat
    if (punkty_gracza == punkty_dilera){
        cout << "nikt nie wygral" << endl;
    } else if (punkty_gracza <= 21){

        if(punkty_dilera < punkty_gracza || punkty_dilera > 21){
            cout << "WYGRALES!!!"<< endl;
        }else{
            cout << "przegrales("<< endl;
        }

    }else{

        if (punkty_dilera < punkty_gracza){
            cout << "przegrales("<< endl;
        } else{
            cout << "WYGRALES!!!"<< endl;
        }

    }

      cout << endl << "twoje punkty " << punkty_gracza;
      cout << endl << "punkty dilera " << punkty_dilera;

}




int main()
{
    srand(time(NULL));

    string karty[52] = {
    "2 pik", "3 pik", "4 pik", "5 pik", "6 pik", "7 pik", "8 pik", "9 pik", "10 pik", "J pik", "D pik", "K pik", "A pik",
    "2 kier", "3 kier", "4 kier", "5 kier", "6 kier", "7 kier", "8 kier", "9 kier", "10 kier", "J kier", "D kier", "K kier", "A kier",
    "2 karo", "3 karo", "4 karo", "5 karo", "6 karo", "7 karo", "8 karo", "9 karo", "10 karo", "J karo", "D karo", "K karo", "A karo",
    "2 trefl", "3 trefl", "4 trefl", "5 trefl", "6 trefl", "7 trefl", "8 trefl", "9 trefl", "10 trefl", "J trefl", "D trefl", "K trefl", "A trefl"
    };

    gra(karty);

    return 0;
}
