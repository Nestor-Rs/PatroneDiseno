public class FabricaVidrio implements Fabrica{
    public Botellas createBotella(){
        BotellaVidrio MiBotella = new BotellaVidrio();
        return MiBotella;
    }
}
