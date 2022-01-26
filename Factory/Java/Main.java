public class Main {
    public static void main(String[] args) {
        Botellas Bote =null;
        Fabrica Fabrica1= new FabricaPet();
        Fabrica Fabrica2= new FabricaVidrio();
        Fabrica Fabrica3= new FabricaMix();
        Bote = Fabrica1.createBotella();
        Bote.MiBotella();

        Bote=Fabrica2.createBotella();
        Bote.MiBotella();

        Bote=Fabrica3.createBotella();
        Bote.MiBotella();
    }
}
