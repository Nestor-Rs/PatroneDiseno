import LineaLigera.*;
import Fabrica.*;

public class flyweight {
    public static void main(String[] args) {
        FabricaDeLineas fabrica = new FabricaDeLineas();
         ILineaLigera linea1 = fabrica.getLine( "AZUL" );
         ILineaLigera linea2 = fabrica.getLine( "ROJO" );
         ILineaLigera linea3 = fabrica.getLine( "AMARILLO" );
         ILineaLigera linea4 = fabrica.getLine( "AZUL" );
        System.out.println("-------------------");
        //can use the lines independently
        linea1.dibujar( 100, 400 );
        linea2.dibujar( 200, 500 );
        linea3.dibujar( 300, 600 );
        linea4.dibujar( 400, 700 );
    }
}
