#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main(){
    int geb_jaar, geb_maand, geb_dag;
    int peil_jaar=2021, peil_maand=9, peil_dag=19;
    int leeftijd_jaar, leeftijd_maand,leeftijd_maanden;
    int schrikkeljaren;
    int begin_jaar=1901,begin_maand=1,begin_dag=1;
    int dagen_tussenjaren, dagen_geb_jaar=0, dagen_naar_geb;
    char dag_geboorte_persoon, controle_letter_persoon;
    char dag_geboorte, controle_letter;



    cout << "Geef alstublieft uw geboorte jaar: ";
    cin >> geb_jaar;
    if ((peil_jaar-geb_jaar)>=100 || (peil_jaar-geb_jaar)<=10){
        cout << "Sorry u bent niet geschikt voor een studie ivm met uw leeftijd\n";
        return 1;
    }
    
    cout << "Geef alstublieft uw geboorte maand: ";
    cin >> geb_maand;

    if (geb_maand>12 || geb_maand<=0){
        cout << "Dit is geen geldige geboorte maand";
        return 1;
    }

    cout << "Geef alstublieft uw geboorte dag: ";
    cin >> geb_dag;
    if (geb_dag<=0){
        cout << "Dit is geen geldige geboorte dag";
    }

    switch (geb_maand)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if (geb_dag>31){
            cout << "Dit is geen geldige geboorte dag";
            return 1;
        }
        break;
    case 4: case 6: case 9: case 11:
        if (geb_dag>30){
            cout << "Dit is geen geldige geboorte dag";\
            return 1;
        }
        break;
    case 2:
        if (geb_jaar%4==0  && geb_dag>29){
            cout << "Dit is geen geldige geboorte dag";
            return 1;
        }
        else if (geb_jaar%4!=0 && geb_dag>28){
            cout << "Dit is geen geldige geboorte dag";
            return 1;
        }
        break;
    }

    if (geb_dag==peil_dag){
        cout << "Gefeliciteerd met uw vermaanddag!\n";
    }

    leeftijd_jaar=peil_jaar-geb_jaar;
    
    if (geb_maand>peil_maand){
        leeftijd_jaar-=1;
        leeftijd_maand=12-(peil_maand-geb_maand);
    }
    if (geb_maand==peil_maand){
        if (geb_dag>peil_dag){
            leeftijd_jaar-=1;
        }
        leeftijd_maand=0;
    }
    if (geb_maand<peil_maand){
        leeftijd_maand=peil_maand-geb_maand;
    }


    schrikkeljaren=(geb_jaar-begin_jaar)/4;

    dagen_tussenjaren=((schrikkeljaren*366)+((geb_jaar-begin_jaar-schrikkeljaren)*365));
    
    switch (geb_maand){                   // Hier wordt het aantal dagen in het geboorte jaar uitgerekend
    case 1:
        dagen_geb_jaar=geb_dag;
        break;
    case 2:
        dagen_geb_jaar=geb_dag+31;
        break;
    case 3:
        dagen_geb_jaar=geb_dag+59;
        break;
    case 4:
        dagen_geb_jaar=geb_dag+90;
        break;
    case 5:
        dagen_geb_jaar=geb_dag+120;
        break;
    case 6:
        dagen_geb_jaar=geb_dag+151;
        break;
    case 7:
        dagen_geb_jaar=geb_dag+181;
        break;
    case 8:
        dagen_geb_jaar=geb_dag+212;
        break;
    case 9:
        dagen_geb_jaar=geb_dag+243;
        break;
    case 10:
        dagen_geb_jaar=geb_dag+273;
        break;
    case 11:
        dagen_geb_jaar=geb_dag+304;
        break;
    case 12:
        dagen_geb_jaar=geb_dag+334;
        break;
    }    

    if (geb_jaar%4==0 && geb_maand>=3){                 //Dit is voor het missen van 1 dag als het geboorte jaar een schrikkeljaar is
        dagen_geb_jaar+=1;
    }
    dagen_naar_geb=dagen_tussenjaren+dagen_geb_jaar-1;
    
    // cout << endl << dagen_naar_geb << endl;
    
    dagen_naar_geb=dagen_naar_geb%7;

    switch (dagen_naar_geb)
    {
    case 0:
        dag_geboorte = 'd';
        controle_letter = 'i';
        break;
    case 1:
        dag_geboorte = 'w';
        break;
    case 2:
        dag_geboorte = 'd';
        controle_letter = 'o';
        break;
    case 3:
        dag_geboorte = 'v';
        break;
    case 4:
        dag_geboorte = 'z';
        controle_letter = 'a';
        break;
    case 5:
        dag_geboorte = 'z';
        controle_letter = 'o';
        break;
    case 6:
        dag_geboorte = 'm';
        break;
    }

    if(leeftijd_jaar>=30){
    cout << "Op welke dag van de week bent u geboren: ";
    cin >> dag_geboorte_persoon;
    }
    else {
        cout << "Op welke dag van de week ben je geboren: ";
        cin >> dag_geboorte_persoon;
    }
    if (dag_geboorte_persoon!=dag_geboorte){
        cout << "Dit is een incorrecte dag";
        return 1;
    }

    if (dagen_naar_geb== 0 || dagen_naar_geb== 2 || dagen_naar_geb== 4 || dagen_naar_geb== 5){
        cout << "Wat is de tweede letter?: ";
        cin >> controle_letter_persoon;  
        if (controle_letter =! controle_letter_persoon){
            cout << "Dit is een incorrecte dag\n";
        }   
    }

    


    
    
    leeftijd_maanden= (leeftijd_jaar*12)+leeftijd_maand;
    if (leeftijd_jaar>=30){
        cout << "U bent: " << leeftijd_jaar << " jaren en " << leeftijd_maand << " maanden oud.\n";
    }
    else{
        cout << "Je bent: " << leeftijd_jaar << " jaren en " << leeftijd_maand << " maanden oud.\n";
    }
    cout << "Dat staat gelijk aan: " << leeftijd_maanden << " maanden.\n";
    
    
    
    
    
    
    
    
    int a,b,c;
    double d;
    double x1,x2;
    int goed_antwoord=0;
    int antwoord_persoon;
    srand(time(0));
    
    
    a=rand()%20+1, b=(rand()%40+(-20)), c=-(rand()%40+(-20));
    /*  Het genereren van random nummers voor de a,b en c plaatsen in de ax^2+bx+c=0 formule
        Waarbij de a waarde boven de 1 is en de b en c waarde ook negatief en 0 kunnen zijn
    */
    cout << a << "x^2+" << b << "x+" << c << "=0" << endl;
    /* Dit print de net gegenereerde formule met de xen erin */


    d=  ((b*b)-(4*a*c));
    x1= (-b+sqrt(d))/(2*a);
    x2= (-b-sqrt(d))/(2*a);
    // ABC formule uitrekenen met + en -
    // cout << x2 << endl << x1;
    if (x1==x2){                    /* Hier wordt gekeken of de antwoorden hetzelfde zijn */
        goed_antwoord+=1;
        cout << x1;
    }
    else{                           /* Als dat niet het geval is wordt er gekeken*/
        if (x1 == double(x1)){
            goed_antwoord+=1;
            cout << x1 << endl;
        }

        if (x2== double(x2)){
            goed_antwoord+=1;
            cout << x2 << endl; 
        }
    }
    cout << "Hoeveel oplossingen geeft de bovenstaande formule voor x?(antwoord met 0,1,2): ";
    cin >> antwoord_persoon;
    
    if (antwoord_persoon==goed_antwoord){
        cout << "Dit klopt\nJe mag een beta studie doen!\n";
        if (goed_antwoord==1){
            cout << x1 << endl;
        }
        else if (goed_antwoord==2){
            cout << x1 << endl << x2 << endl;
        }
        return 1;
    }
    else{
        cout << "Dit is incorrect\n";
    }
    
    if (leeftijd_jaar<30){
        cout << "Daarom nu een vraag over literatuur om te kijken of een alpha studie beter is.\n\n";
        cout << ""

    }












}

