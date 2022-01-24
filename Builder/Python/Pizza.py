class Pizza:
    PizzaBuild=[]

    def __init__(self):
        self.PizzaBuild=list()

    def setMasa(self):
        self.PizzaBuild.append('Masa')
        return self

    def setSalsa(self):
        self.PizzaBuild.append('Salsa')
        return self

    def setQueso(self):
        self.PizzaBuild.append('Queso')
        return self

    def setPeperoni(self):
        self.PizzaBuild.append('Peperoni')
        return self
    
    def setPina(self):
        self.PizzaBuild.append('Pina')
        return self

    def setSalchicha(self):
        self.PizzaBuild.append('Salchicha')
        return self

    def setJamon(self):
        self.PizzaBuild.append('Jamon')
        return self

    def PrintPizza(self):
        return self.PizzaBuild