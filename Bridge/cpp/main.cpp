#include <bits/stdc++.h>
#include "ListItemView.cpp"


using namespace std;

int main() {
    
    ListItemView* miVideo,* miStream;

    miVideo= new SoloTexto(new VideoViewModel());

    miVideo->render();

    miStream = new MiniaturaListItemView(new StreamViewModel());

    miStream->render();

    return 0;
}