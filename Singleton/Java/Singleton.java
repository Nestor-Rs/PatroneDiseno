public class Singleton {
    static private Singleton singleton = null;
    private Singleton(){
        
    }
    static public Singleton getSingleton(){
       if (singleton == null){
           singleton = new Singleton();
       }
       return singleton;
    }
}