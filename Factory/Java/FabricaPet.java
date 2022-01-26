public class FabricaPet implements Fabrica{
    public Botellas createBotella(){
        BotellaPet MiBotella = new BotellaPet();
        return MiBotella;
    }
}
