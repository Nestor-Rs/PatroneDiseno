public class Samsung implements Celular{

    private String Marca;
    private float VersionOS;

    public Samsung(float OSVersion){
        Marca="Samsung";
        VersionOS=OSVersion;
    }

    @Override
    public Celular Clonar(){
        Samsung cell=null;
        try {
            cell=(Samsung)clone();
        } 
        catch (CloneNotSupportedException e) {
            e.printStackTrace();
        }
        return cell;
    }

    public String getMarca() {
        return Marca;
    }

    public float getVersionOS() {
        return VersionOS;
    }

    public void setVersionOS(float versionOS) {
        VersionOS = versionOS;
    }

}
