package Fabrica;

import java.util.ArrayList;
import java.util.List;
import LineaLigera.*;
import ConcretLineal.*;

public class FabricaDeLineas {

    private List<ILineaLigera> lineas;
    // --------------------
    public FabricaDeLineas(){
         this.lineas = new ArrayList<ILineaLigera>();
    }
    // --------------------
     public ILineaLigera getLine( String color ){
        // Comprobar si hemos creado una línea con el color solicitado, y devolverla en tal caso
         for(ILineaLigera linea : this.lineas){
             if( linea.getColor().equals(color) ){
                System.out.println("Línea de color [" + color + "] encontrada, la devolvemos");
                return linea;
            }
        }
        // Si no ha sido creada la creamos ahora, la agregamos a la lista y la devolvemos
        System.out.println("Creando una línea de color [" + color + "]");
         ILineaLigera linea = new Lineal( color );
         this.lineas.add( linea );
        return linea;
    }
}
