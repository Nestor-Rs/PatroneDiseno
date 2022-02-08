public class PhoneH implements AbstracFactory{
    public Screen CreateScreen(){
        return new ScreenOled();
    }

    public CameraUP CreateCamera(){
        return new CameraUP();
    }

    public CarcasaAcero CreateCase(){
        return new CarcasaAcero();
    }

}