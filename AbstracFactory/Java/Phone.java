public class Phone {
    private Screen Pantalla;
    private Camera Camera;
    private Case Carcasa;

    public void setCamera(Camera camera) {
        Camera = camera;
    }

    public void setCarcasa(Case carcasa) {
        Carcasa = carcasa;
    }

    public void setPantalla(Screen pantalla) {
        Pantalla = pantalla;
    }

    public Camera getCamera() {
        return Camera;
    }

    public Case getCarcasa() {
        return Carcasa;
    }
    
    public Screen getPantalla() {
        return Pantalla;
    }
}
