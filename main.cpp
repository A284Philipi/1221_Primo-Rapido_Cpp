#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int cont = 0, casos, numero, cont2 = 7, cont3 = 5, def = 0;
    cin >> casos;
    while (cont < casos){
        cin >> numero;
        if (numero <= 3){
            cout << "Prime" <<endl;
        }else{
            cont2 = 7;
            cont3 = 5;
            def = 0;
            if (numero % 6 == 1 || numero % 6 == 5){
                while(cont2 < numero / 6){
                    if (numero % cont2 == 0 || numero % cont3 == 0){
                        def = 1;
                        cont2 = numero;
                    }else{
                        def = 0;
                    }
                    cont3 = cont3 + 6;
                    cont2 = cont2 + 6;
                }
                if (def == 0){
                    cout << "Prime" <<endl;
                }else{
                    cout << "Not Prime" <<endl;
                }
            }else{
                cout << "Not Prime" <<endl;
            }
        }
        cont++;
    }
    return 0;
}
