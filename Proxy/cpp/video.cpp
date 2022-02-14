#include <bits/stdc++.h>

using namespace std;

class video{
    private:
        string Cambio;
    public:
        void setCambio(string cambio);
        string getCambio();
};

void video::setCambio(string cambio){
    Cambio=cambio;
}
string video::getCambio(){
    return Cambio;
}