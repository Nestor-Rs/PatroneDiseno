public class principal{
    public static void main(String[] args) {

        PhoneH Fabrica1=new PhoneH();
        PhoneL Fabrica2=new PhoneL();

        Phone TelefonoGamaAlta = new Phone();
        Phone TelefonoGamaBaja = new Phone();
        //Telefono Gama Alta
        TelefonoGamaAlta.setCamera(Fabrica1.CreateCamera());
        TelefonoGamaAlta.setCarcasa(Fabrica1.CreateCase());
        TelefonoGamaAlta.setPantalla(Fabrica1.CreateScreen());

        TelefonoGamaAlta.getCamera().print();
        TelefonoGamaAlta.getCarcasa().print();
        TelefonoGamaAlta.getPantalla().print();

        //Telefono Gama Baja
        TelefonoGamaBaja.setCamera(Fabrica2.CreateCamera());
        TelefonoGamaBaja.setCarcasa(Fabrica2.CreateCase());
        TelefonoGamaBaja.setPantalla(Fabrica2.CreateScreen());
        TelefonoGamaBaja.getCamera().print();
        TelefonoGamaBaja.getCarcasa().print();
        TelefonoGamaBaja.getPantalla().print();

    }
}