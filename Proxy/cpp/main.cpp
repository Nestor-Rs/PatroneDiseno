#include <bits/stdc++.h>
#include "proxy.cpp"

using namespace std;

int main() {
    
    video* miVideoHD = new video();

    Ivideo* nubeVideo = new videoProxy();
    
    nubeVideo->editarVideo(miVideoHD, 0);
    nubeVideo->getCambio(miVideoHD);
    nubeVideo->editarVideo(miVideoHD, 1);
    nubeVideo->getCambio(miVideoHD);


    return 0;
}