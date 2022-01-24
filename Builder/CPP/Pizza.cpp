#include <bits/stdc++.h>

using namespace std;

class Pizza{
private:
    list<string> PizzaBuild;
public:
    Pizza(); 
    ~Pizza();
    Pizza setMasa(Pizza* MiPizza);
    Pizza setSalsa(Pizza* MiPizza);
    Pizza setQueso(Pizza* MiPizza);
    Pizza setPeperoni(Pizza* MiPizza);
    Pizza setPina(Pizza* MiPizza);
    Pizza setSalchica(Pizza* MiPizza);
    Pizza setJamon(Pizza* MiPizza);
    void PrintPizza(Pizza* MiPizza);
};

Pizza::Pizza(){
    PizzaBuild = list<string>();
    
}

Pizza::~Pizza(){
    PizzaBuild.clear();
}

Pizza Pizza::setMasa(Pizza* MiPizza){
    MiPizza->PizzaBuild.push_back("Masa");
    return *MiPizza;
}

Pizza Pizza::setSalsa(Pizza* MiPizza){
    MiPizza->PizzaBuild.push_back("Salsa");
    return *MiPizza;
}

Pizza Pizza::setQueso(Pizza* MiPizza){
    MiPizza->PizzaBuild.push_back("Queso");
    return *MiPizza;
}

Pizza Pizza::setPeperoni(Pizza* MiPizza){
    MiPizza->PizzaBuild.push_back("Peperoni");
    return *MiPizza;
}

Pizza Pizza::setPina(Pizza* MiPizza){
    MiPizza->PizzaBuild.push_back("Pina");
    return *MiPizza;
}

Pizza Pizza::setSalchica(Pizza* MiPizza){
    MiPizza->PizzaBuild.push_back("Salchicha");
    return *MiPizza;
}

Pizza Pizza::setJamon(Pizza* MiPizza){
    MiPizza->PizzaBuild.push_back("Jamon");
    return *MiPizza;
}

void Pizza::PrintPizza(Pizza* MiPizza){
    while (!MiPizza->PizzaBuild.empty()){
        cout<<MiPizza->PizzaBuild.front()<<" ,";
        MiPizza->PizzaBuild.pop_front();
    }
    cout<<endl;
}