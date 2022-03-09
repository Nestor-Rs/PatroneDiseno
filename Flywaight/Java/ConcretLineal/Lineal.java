package ConcretLineal;

import LineaLigera.*;

public class Lineal implements ILineaLigera{
    private String color;
    // --------------------
    public Lineal( String color ){
        this.color = color;
    }
    // --------------------
    @Override
    public String getColor(){
        return this.color;
    }
    // --------------------
    @Override
     public void dibujar( int col, int fila ){
        System.out.println( "Dibujando línea de color [" + this.color + "] en [" + col + ", " + fila + "]" );
    }
}
