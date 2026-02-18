#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //hibasan hivatkozas a integerre
    std::cout << '1-100 ertekek duplazasa' //szimpla idezojel van megadva macskakorom helyett, nincs pontosvesszo
    for (int i = 0;) //a forciklusnak hianyoznak ertekei
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" //hianyzik a pontosvesszo, emellett hianyzik az "i"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // sima vesszo van megadva pontosvesszo helyett
    {
        atlag += b[i] //nincs pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
