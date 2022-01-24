#include <bits/stdc++.h>
#include "Pizza.cpp"

using namespace std;

int main() {
    Pizza* Orden1 = new Pizza();
    Orden1->setMasa(Orden1);
    Orden1->setSalsa(Orden1);
    Orden1->setQueso(Orden1);
    Orden1->setPeperoni(Orden1);
    Orden1->PrintPizza(Orden1);
    Orden1->~Pizza();
    return 0;
}