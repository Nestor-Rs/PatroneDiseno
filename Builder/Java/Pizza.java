import java.util.ArrayList;
import java.util.List;

public class Pizza {

    private List<String> PizzaBuild = null;

    Pizza(){
        PizzaBuild = new ArrayList<String>();
    }

    public Pizza setMasa(){
        this.PizzaBuild.add("Masa");
        return Pizza.this;
    }

    public Pizza setSalsa(){
        this.PizzaBuild.add("Salsa");
        return Pizza.this;
    }

    public Pizza setQueso(){
        this.PizzaBuild.add("Queso");
        return Pizza.this;
    }

    public Pizza setPeperoni(){
        this.PizzaBuild.add("Peperoni");
        return Pizza.this;
    }

    public Pizza setPina(){
        this.PizzaBuild.add("Pina");
        return Pizza.this;
    }

    public Pizza setSalchicha(){
        this.PizzaBuild.add("Salchicha");
        return Pizza.this;
    }

    public Pizza setJamon(){
        this.PizzaBuild.add("Jamon");
        return Pizza.this;
    }

    public void PrintPizza(){
        System.out.println(PizzaBuild);
    }
}
