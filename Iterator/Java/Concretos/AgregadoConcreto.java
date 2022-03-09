package Concretos;

import java.util.Vector;

import IAgregado.*;
import Iterator.*;

public class AgregadoConcreto implements Agregado{
    
    protected Vector<String> aDatos = new Vector<String>();
    // -------------------------
    public AgregadoConcreto() {
        this.llenar();
    }
    // -------------------------
    @Override
     public Iterador getIterador(){
        return new IteradorConcreto( this );
    }
    // -------------------------
    public void llenar(){
        this.aDatos.add( new String("JOSE") );
        this.aDatos.add( new String("MARTA") );
        this.aDatos.add( new String("ANTONIO") );
        this.aDatos.add( new String("ROMINA") );
    }
}
