public class PhoneL implements AbstracFactory{
    public Screen CreateScreen(){
        return new ScreenLCD();
    }

    public Camera CreateCamera(){
        return new CameraDown();
    }
    
    public Case CreateCase(){
        return new CarcasaPlastica();
    }
}