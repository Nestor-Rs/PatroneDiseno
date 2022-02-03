public class Main {
    public static void main(String[] args) {
        Singleton miSingleton = Singleton.getSingleton();
        
        Singleton otroSingleton=Singleton.getSingleton();

        System.out.println(miSingleton==otroSingleton);
    }
}
