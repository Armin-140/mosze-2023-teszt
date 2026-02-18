#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //hibasan hivatkozas a integerre
    std::cout << "1-100 ertekek duplazasa" << std::endl;; //szimpla idezojel van megadva macskakorom helyett, nincs pontosvesszo, nincs endl
    for (int i = 1; i <= N_ELEMENTS; i++) //a ciklusnak nem 0-tol hanem 1-tol kell indulnia, a forciklusnak hianyoznak ertekei, i<= nem <
    {
        b[i-1] = i * 2; // az i 1-es kezdoerteke miatt ki kell vonni 1-et a tombnek az indexelesehez
    }
    for (int i = 0; i < N_ELEMENTS; i++) //forciklus maximuma hibas
    {
        std::cout << "Ertek: " << b[i] << std::endl; //hianyzik a pontosvesszo, emellett hianyzik az "i"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; //nincs megadva kezdoertek
    for (int i = 0; i < N_ELEMENTS; i++) // sima vesszo van megadva pontosvesszo helyett
    {
        atlag += b[i]; //nincs pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
