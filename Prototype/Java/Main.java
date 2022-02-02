public class Main {
    public static void main(String[] args) {
        
        Samsung Galaxy = new Samsung((float)1.0);
        Samsung GalaxyTab = (Samsung) Galaxy.Clonar();

        if(GalaxyTab!=null){
            System.out.println(GalaxyTab.getMarca());
            System.out.println(GalaxyTab.getVersionOS());
        }

        System.out.println(Galaxy==GalaxyTab);
    }
}
