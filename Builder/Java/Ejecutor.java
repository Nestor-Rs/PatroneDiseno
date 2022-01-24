public class Ejecutor {
	public static void main(String[] args) {		
		Pizza Orden1 = new Pizza();
		Orden1.setMasa().setSalsa().setQueso().setJamon().setPina();
		Orden1.PrintPizza();

		Pizza Orden2 = new Pizza();
		Orden2.setMasa().setSalsa().setQueso().setPeperoni().setSalchicha();
		Orden2.PrintPizza();
	}
}