#include <bits/stdc++.h>
#include "IViewModel.cpp"

using namespace std;

//Clase abstracta de la implementacion

class ListItemView{
    private:

    protected:
        IViewModel* viewModel;
    public:
        ListItemView(IViewModel*);
        virtual void render();
};

ListItemView::ListItemView(IViewModel* viewModel){
    this->viewModel=viewModel;
}

void ListItemView::render(){
    cout << "defautl abstract render" << endl;
}


//Clase concreta de uso de brige

class MiniaturaListItemView:public ListItemView{
    private:
        /* data */
    public:
        MiniaturaListItemView(IViewModel*);
        virtual void render();
};

MiniaturaListItemView::MiniaturaListItemView(IViewModel* viewModel):ListItemView(viewModel){

}

void MiniaturaListItemView::render(){
    cout << "---------------" << endl;
    cout << "Increible lo que veras: "+this->viewModel->image()<< endl;
    cout << "---------------" << endl;
}


//Clase concreta de uso de brige 2

class SoloTexto:public ListItemView{
    private:
        /* data */
    public:
        SoloTexto(IViewModel*);
        virtual void render();
};

SoloTexto::SoloTexto(IViewModel* viewModel):ListItemView(viewModel){

}

void SoloTexto::render(){
    cout << "---------------" << endl;
    cout << "Increible lo que veras: "+this->viewModel->title()<< endl;
    cout << "---------------" << endl;
}