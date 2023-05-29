#include <iostream>
#include "klasa.h"
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;

bool sortowanie(druzyna a, druzyna b)
{
    return (a.Punkty() < b.Punkty());
}



int main()
{
    druzyna liczba;
    cout << "nazwa: " << liczba.nazwa << endl;
    cout << "\033[0;32m"<< "Wygrane: " << liczba.wins << "\033[0m" << endl;
    cout << "Remisy: " << liczba.draw << endl;
    cout << "\033[1;31m" << "Przegrane: " << liczba.loses <<"\033[0m"<< endl;
    cout << "\033[0;32m" << "Gole: " << liczba.bramki <<"\033[0m"<< endl;
    cout << "\033[1;31m" << "Stracone Gole: " << liczba.Sbramki <<"\033[0m"<< endl;

    druzyna jeden;
    jeden.nazwa= "Truskawka";
    jeden.wins= 5;
    jeden.loses= 0;
    jeden.draw= 2;
    jeden.bramki=10;
    jeden.Sbramki=2;

    druzyna dwa;
    dwa.nazwa= "Banan";
    dwa.wins= 3;
    dwa.loses= 1;
    dwa.draw= 3;
    dwa.bramki=3;
    dwa.Sbramki=1;

druzyna trzy;
    trzy.nazwa= "Kiwi";
    trzy.wins= 6;
    trzy.loses= 1;
    trzy.draw= 0;
    trzy.bramki=4;
    trzy.Sbramki=0;

druzyna cztery;
    cztery.nazwa= "Poziomka";
    cztery.wins= 2;
    cztery.loses= 3;
    cztery.draw= 2;
    cztery.bramki=2;
    cztery.Sbramki=3;

druzyna piec;
    piec.nazwa= "Agrest";
    piec.wins= 4;
    piec.loses= 1;
    piec.draw= 2;
    piec.bramki=3;
    piec.Sbramki=1;

druzyna szesc;
    szesc.nazwa= "Morele";
    szesc.wins= 2;
    szesc.loses= 2;
    szesc.draw= 3;
    szesc.bramki=2;
    szesc.Sbramki=3;

druzyna siedem;
    siedem.nazwa= "Granat";
    siedem.wins= 1;
    siedem.loses= 4;
    siedem.draw= 2;
    siedem.bramki=2;
    siedem.Sbramki=5;

druzyna osiem;
    osiem.nazwa= "Malina";
    osiem.wins= 3;
    osiem.loses= 2;
    osiem.draw= 2;
    osiem.bramki=3;
    osiem.Sbramki=1;

druzyna dziewiec;
    dziewiec.nazwa= "Cytryna";
    dziewiec.wins= 5;
    dziewiec.loses= 1;
    dziewiec.draw= 1;
    dziewiec.bramki=4;
    dziewiec.Sbramki=2;

druzyna dzisiec;
    dzisiec.nazwa= "Grejfrut";
    dzisiec.wins= 4;
    dzisiec.loses= 0;
    dzisiec.draw= 3;
    dzisiec.bramki=5;
    dzisiec.Sbramki=2;

vector<druzyna> Liga;
Liga.push_back(jeden);
Liga.push_back(dwa);
Liga.push_back(trzy);
Liga.push_back(cztery);
Liga.push_back(piec);
Liga.push_back(szesc);
Liga.push_back(siedem);
Liga.push_back(osiem);
Liga.push_back(dziewiec);
Liga.push_back(dzisiec);

sort(Liga.begin(), Liga.end(), sortowanie);
for(const auto& pilka : Liga)
{
    cout <<"\033[0m" << pilka.nazwa << '\t' <<"\033[0;32m"<< pilka.wins <<"\033[0m"<< '\t' << pilka.draw << '\t' << "\033[1;31m" 
    << pilka.loses << "\033[0m" << '\t' << "\033[0;32m" << pilka.bramki << "\033[0m" << '\t' << "\033[1;31m" << pilka.Sbramki << endl;
}
    return 0;
}
