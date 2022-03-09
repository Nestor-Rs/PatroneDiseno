#include <bits/stdc++.h>
#include "FabricaDeLineas.cpp"


using namespace std;

int main() {
    
    FabricaDeLineas* fabrica = new FabricaDeLineas();
     IlineaLigera* linea1 = fabrica->getLine( "AZUL" );
     IlineaLigera* linea2 = fabrica->getLine( "ROJO" );
     IlineaLigera* linea3 = fabrica->getLine( "AMARILLO" );
     IlineaLigera* linea4 = fabrica->getLine( "AZUL" );
    //System.out.println("-------------------");
    //can use the lines independently
    linea1->dibujar( 100, 400 ) ;
    linea2->dibujar( 200, 500 );
    linea3->dibujar( 300, 600 );
    linea4->dibujar( 400, 700 );

    return 0;
}