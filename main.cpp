#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //hibás változónév (N_ELEMENTS)
    std::cout << '1-100 ertekek duplazasa' //aposztróf használva idézőjel helyett, pontosvessző hiányzik sor végén
    for (int i = 0;) //hiányzik a ciklusfeltétel és a léptetés üteme
    {
        b[i] = i * 2; //(i+1). elemnek kell a kétszeresét venni
    }
    for (int i = 0; i; i++) //hibás ciklusfeltétel
    {
        std::cout << "Ertek:" //hiányzik az értékkiíratás és a pontosvessző
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //értékadás (0) hiányzik
    for (int i = 0; i < N_ELEMENTS, i++) //szintaktikai hiba
    {
        atlag += b[i] //pontosvessző hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
