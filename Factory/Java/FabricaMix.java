public class FabricaMix implements Fabrica{

    public Botellas createBotella(){
        
        int MiRand=(int) (Math.random() * (75-25+1)+25)%2;
        Botellas MiBotella;

        if(MiRand==1){
            MiBotella=new BotellaVidrio();
        }
        else{
            MiBotella=new BotellaPet();
        }
        return MiBotella;
    }
}
