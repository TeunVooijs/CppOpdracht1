#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main(){
    int geb_jaar;
    int schrikkeljaren;
    int begin_jaar=1901,begin_maand=1,begin_dag=1;

    cin >> geb_jaar;
    schrikkeljaren=(geb_jaar-begin_jaar)/4;
    cout << schrikkeljaren;
    return 0;
    
}