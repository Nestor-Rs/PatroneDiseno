#include <bits/stdc++.h>
#include "Singleton.cpp"

using namespace std;

int main() {
    
    Singleton* miSingleton = miSingleton->getSingleton();
    Singleton* otroSingleto= otroSingleto->getSingleton();
    
    string resu=(miSingleton==otroSingleto)?"True":"False";
    cout<<resu<<endl;

    return 0;
}