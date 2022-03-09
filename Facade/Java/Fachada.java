public class Fachada {
    private Perro perro;
    private Gato gato;

    public Fachada(){
        perro = new Perro();
        gato = new Gato();
    }

    public void crear(){
        gato.crearGato();
        perro.crearPerro();
    }
}
