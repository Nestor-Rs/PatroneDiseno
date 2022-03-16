# Patrones de diseño

por Nestor Rodriguez Salgado

# Creacionales

## Singleton

### Explicacion

Singleton es usado cuando queremos una instancia o un objeto unico de una clase, eso quiere decir que cuando se este creando un objeto siempre se hace una referencia a un objeto ya creado

### Elementos

1. Un constructor privado del objeto
2. Un constructor creado por nosotros, que revise si ya fue creado un objeto

### Ejemplo

#### Java

```java
public class Main {
    public static void main(String[] args) {
        Singleton miSingleton = Singleton.getSingleton();
        
        Singleton otroSingleton=Singleton.getSingleton();

        System.out.println(miSingleton==otroSingleton);
    }
}

```

```java
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
```

#### Python

```python
class SingletonMeta(type):
    _instances={}
    
    def __call__(cls,*args,**kwargs):
        if cls not in cls._instances:
            instance=super().__call__(*args,**kwargs)
            cls._instances[cls]=instance
        return cls._instances[cls]

class Singleton(metaclass=SingletonMeta):
    def metodo(self):
        pass

a=Singleton()
b=Singleton()
```

#### C++

```cpp
#include <bits/stdc++.h>
#include "Singleton.cpp"

using namespace std;

int main() {
    
    Singleton* miSingleton = miSingleton->getSingleton();
    Singleton* otroSingleto= otroSingleto->getSingleton();
    
    string resu=(miSingleton==otroSingleto)?"True":"False";
    cout<<resu<<endl;

    return 0;
}
```

```cpp
#include <bits/stdc++.h>

using namespace std;

class Singleton{
    private:
        static Singleton* singleton;
        Singleton();
    public:
        static Singleton* getSingleton();
};

Singleton* Singleton::singleton=0;

Singleton::Singleton(){

}

Singleton* Singleton::getSingleton(){
    if (singleton == NULL){
        singleton = new Singleton();
    }
    return singleton;
}
```

### Caso de uso

Los casos de uso mas comunes son:

1. El caso de los punteros en c++, son la direccion o referencia hacia un objeto

## Builder

### Explicacion

Builder cosnta en setear todos los componentes y caracteristicas de nuestro objeto

### Elementos

Contiene los siguientes elementos importantes:

1. Contructor: el cual ayuda a crear un objeto base
2. Setters: Estos ayudan a configurar el o los objetos como se necesiten
3. Print, esto es para mostrar como esta seteado el objeto (Opcional)

### Ejemplos

#### Java

```Java
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

```

```java
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
```

#### Python

```python
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
```

```python
from Pizza import Pizza

Orden1=Pizza()
Orden1.setMasa().setSalsa().setQueso().setPeperoni().setPina()
print(Orden1.PrintPizza())

Orden1=Pizza()
Orden1.setMasa().setSalsa().setQueso().setJamon().setSalchicha()
print(Orden1.PrintPizza())
```

#### C++

```cpp
#include <bits/stdc++.h>

using namespace std;

class Pizza{
private:
    list<string> PizzaBuild;
public:
    Pizza(); 
    ~Pizza();
    Pizza setMasa(Pizza* MiPizza);
    Pizza setSalsa(Pizza* MiPizza);
    Pizza setQueso(Pizza* MiPizza);
    Pizza setPeperoni(Pizza* MiPizza);
    Pizza setPina(Pizza* MiPizza);
    Pizza setSalchica(Pizza* MiPizza);
    Pizza setJamon(Pizza* MiPizza);
    void PrintPizza(Pizza* MiPizza);
};

Pizza::Pizza(){
    PizzaBuild = list<string>();
    
}

Pizza::~Pizza(){
    PizzaBuild.clear();
}

Pizza Pizza::setMasa(Pizza* MiPizza){
    MiPizza->PizzaBuild.push_back("Masa");
    return *MiPizza;
}

Pizza Pizza::setSalsa(Pizza* MiPizza){
    MiPizza->PizzaBuild.push_back("Salsa");
    return *MiPizza;
}

Pizza Pizza::setQueso(Pizza* MiPizza){
    MiPizza->PizzaBuild.push_back("Queso");
    return *MiPizza;
}

Pizza Pizza::setPeperoni(Pizza* MiPizza){
    MiPizza->PizzaBuild.push_back("Peperoni");
    return *MiPizza;
}

Pizza Pizza::setPina(Pizza* MiPizza){
    MiPizza->PizzaBuild.push_back("Pina");
    return *MiPizza;
}

Pizza Pizza::setSalchica(Pizza* MiPizza){
    MiPizza->PizzaBuild.push_back("Salchicha");
    return *MiPizza;
}

Pizza Pizza::setJamon(Pizza* MiPizza){
    MiPizza->PizzaBuild.push_back("Jamon");
    return *MiPizza;
}

void Pizza::PrintPizza(Pizza* MiPizza){
    while (!MiPizza->PizzaBuild.empty()){
        cout<<MiPizza->PizzaBuild.front()<<" ,";
        MiPizza->PizzaBuild.pop_front();
    }
    cout<<endl;
}
```

```cpp
#include <bits/stdc++.h>
#include "Pizza.cpp"

using namespace std;

int main() {
    Pizza* Orden1 = new Pizza();
    Orden1->setMasa(Orden1);
    Orden1->setSalsa(Orden1);
    Orden1->setQueso(Orden1);
    Orden1->setPeperoni(Orden1);
    Orden1->PrintPizza(Orden1);
    Orden1->~Pizza();
    return 0;
}
```

### Caso de uso

Los casos de uso mas comunes son:

1. Cuando se necesiten configurar objetos complejos
2. Cuando se quiere hacer enemigos con caracteristicas diferentes

## Factory

### Explicacion

Se utiliza un metodo especial para poder crear diferentes instancias u objetos que necesitemos a partir de las fabricas, ya que cada fabrica es un modo de crear los objetos.

### Elementos

Contiene los siguientes elementos importantes:

1. La interfaz base con la que salen los objetos base
2. Las clases bases para los objetos que seran construidos
3. La interfaz de la fabrica
4. Las fabricas con la que se construyen los objetos

### Ejemplo

#### Java

```java
public class Main {
    public static void main(String[] args) {
        Botellas Bote =null;
        Fabrica Fabrica1= new FabricaPet();
        Fabrica Fabrica2= new FabricaVidrio();
        Fabrica Fabrica3= new FabricaMix();
        Bote = Fabrica1.createBotella();
        Bote.MiBotella();

        Bote=Fabrica2.createBotella();
        Bote.MiBotella();

        Bote=Fabrica3.createBotella();
        Bote.MiBotella();
    }
}
```

```java
public interface Botellas {
    abstract public void MiBotella();
}
```

```java
public class BotellaPet implements Botellas{
    public void MiBotella(){
        System.out.println("Pet");
    }
}
```

```java
public class BotellaVidrio implements Botellas {
    public void MiBotella(){
        System.out.println("Vidrio");
    }
}
```

```java
public interface Fabrica{
    public Botellas createBotella();
}
```

```java
public class FabricaVidrio implements Fabrica{
    public Botellas createBotella(){
        BotellaVidrio MiBotella = new BotellaVidrio();
        return MiBotella;
    }
}
```

```java
public class FabricaPet implements Fabrica{
    public Botellas createBotella(){
        BotellaPet MiBotella = new BotellaPet();
        return MiBotella;
    }
}
```

```java
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
```

#### Python

```py
from Fabricas import FabricaPet,FabricaVidrio,FabricaMix

fabrica1=FabricaPet()
fabrica2=FabricaVidrio()
fabrica3=FabricaMix()

Bote=fabrica1.createBotella()
Bote.MiBotella();

Bote=fabrica2.createBotella()
Bote.MiBotella();

Bote=fabrica2.createBotella()
Bote.MiBotella();
```

```python
from abc import abstractclassmethod
import random

from Botellas import BotellaPet, BotellaVidrio, Botellas

class Fabrica:
    @abstractclassmethod
    def createBotella():
        pass

class FabricaPet(Fabrica):
    @staticmethod
    def createBotella():
        MiBote=BotellaPet()
        return MiBote

class FabricaVidrio(Fabrica):
    @staticmethod
    def createBotella():
        MiBote=BotellaVidrio()
        return MiBote

class FabricaMix(Fabrica):
    @staticmethod
    def createBotella():
        MiRand=random.randint(0, 1)
        if MiRand==1:
            MiBote=BotellaVidrio()
            return MiBote
        else:
            MiBote=BotellaPet()
            return MiBote
```

```python
from abc import abstractclassmethod
import random

from Botellas import BotellaPet, BotellaVidrio, Botellas

class Fabrica:
    @abstractclassmethod
    def createBotella():
        pass

class FabricaPet(Fabrica):
    @staticmethod
    def createBotella():
        MiBote=BotellaPet()
        return MiBote

class FabricaVidrio(Fabrica):
    @staticmethod
    def createBotella():
        MiBote=BotellaVidrio()
        return MiBote

class FabricaMix(Fabrica):
    @staticmethod
    def createBotella():
        MiRand=random.randint(0, 1)
        if MiRand==1:
            MiBote=BotellaVidrio()
            return MiBote
        else:
            MiBote=BotellaPet()
            return MiBote
```

#### C++

```cpp
#include <bits/stdc++.h>
#include "Fabricas.cpp"

using namespace std;

int main() {
    Botellas *Bote=NULL;
    FabricaPet *Fabrica1=new FabricaPet();
    FabricaVidrio *Fabrica2=new FabricaVidrio();
    FabricaMix *Fabrica3=new FabricaMix();

    Bote=Fabrica1->createBotella();
    Bote->MiBotella();

    Bote=Fabrica2->createBotella();
    Bote->MiBotella();

    Bote=Fabrica2->createBotella();
    Bote->MiBotella();

    return 0;
}
```

```cpp
#include <bits/stdc++.h>

using namespace std;

//Interfaz inicial para el resto de clases-----------------------------------------
class Botellas{
    private:
    
    public:
        //virtual define la clase abstracta obligatoria
        virtual void MiBotella()=0;
};



//primera clase heredada de la interfaz--------------------------------------------
class BotellasPet : public Botellas{
    private:

    public:
        virtual void MiBotella();
};

void BotellasPet::MiBotella(){
    cout<<"Pet"<<endl;
}



//Segunta clase heredada de la interfaz--------------------------------------------
class BotellasVidrio : public Botellas{
    private:

    public:
        virtual void MiBotella();
};

void BotellasVidrio::MiBotella(){
    cout<<"Vidrio"<<endl;
}
```

```cpp
#include <bits/stdc++.h>
#include "Botellas.cpp"

using namespace std;

//Interfaz de fabrica---------------------------------------------------------
class Fabrica{
    private:

    public:
        virtual Botellas* createBotella()=0;
};


//Primera clase heredada de la interfaz---------------------------------------

class FabricaPet: public Fabrica{
    private:

    public:
        virtual Botellas* createBotella();
};

Botellas * FabricaPet::createBotella(){
    Botellas* MiBotella = new BotellasPet();
    return MiBotella;
}

//Segunda clase heredada de la interfaz---------------------------------------

class FabricaVidrio: public Fabrica{
    private:

    public:
        virtual Botellas* createBotella();
};

Botellas * FabricaVidrio::createBotella(){
    Botellas* MiBotella = new BotellasVidrio();
    return MiBotella;
}


//Tercera clase heredada de la interfaz---------------------------------------

class FabricaMix: public Fabrica{
    private:

    public:
        virtual Botellas* createBotella();
};

Botellas * FabricaMix::createBotella(){
    int MiRand=rand()%2;
    Botellas* MiBotella=NULL;
    if(MiRand==1){
        MiBotella = new BotellasPet();
    }
    else{
        MiBotella = new BotellasVidrio();
    }
    return MiBotella;
}
```

### Caso de uso

Regularmene se usa cuando se necesiten contruir los objetos de diferentes formas, sin alterar o tener la necesidad de instanciar muchas veces, ejemplo de ellos:

1. En videojuegos que necesiten crear muchos enemygos
2. Creacion de sesiones clientes, administrativos, etc.

## Prototype

### Explicacion

Este metodo de creacion de objetos consta en crear un objeto base y a partir de ese objeto con parametros especificos copiarlo en los siguientes objetos creados.

### Elementos

Contiene los siguientes elementos importantes:

1. El objeto base con su constructor, el cual funciona para dar los parametros iniciales al objeto **prototipo**

2. Una funcion que sirva para **clonar** el objeto a otro

### Ejemplo

#### Java

```java
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
```

```java
public interface Celular extends Cloneable{
    Celular Clonar();
}
```

```java
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
```

#### Python

```python
from Celular import Samsung

Galaxy=Samsung(0.1)
GalaxyTab= Galaxy.Clonar(Galaxy)

if GalaxyTab!=None:
    print(GalaxyTab.getMarca())
    print(GalaxyTab.getOS())

print(GalaxyTab==Galaxy)
```

```python
from abc import abstractmethod
import copy


class Celular:
    @abstractmethod
    def Clonar():
        pass

class Samsung(Celular):
    Marca=''
    OSVersion=0.0

    def __init__(self,VersionOS):
        self.Marca="Samsung"
        self.OSVersion=VersionOS

    @staticmethod
    def Clonar(Phone):
        newPhone = copy.deepcopy(Phone)
        return newPhone
    
    def getMarca(self):
        return self.Marca

    def getOS(self):
        return self.
```

#### C++

```cpp
#include <bits/stdc++.h>
#include "Celular.cpp"

using namespace std;

int main() {
    
    Samsung *Galaxy = new Samsung((float) 0.1);
    Samsung *GalaxyTab = Galaxy->Clone();

    if(GalaxyTab!=NULL){
        cout<<GalaxyTab->getMarca()<<endl;
        cout<<GalaxyTab->getVersionOS()<<endl;
    }
    string resu=(Galaxy==GalaxyTab)?"True":"False";
    cout<<resu<<endl;
    return 0;
}
```

```cpp
#include <bits/stdc++.h>

using namespace std;

// Interfaz Celular------------------------------------------------
class Celular{
    private:
    
    public:
        virtual Celular* Clone()=0;
};

// Clase heredada de la implementacion-----------------------------
class Samsung : public Celular{
    private:
        string Marca;
        float OSVersion;
    public:
        Samsung(float VersionOS);
        virtual Samsung* Clone();
        string getMarca();
        float getVersionOS();
        void setVersionOS(float);
};

Samsung::Samsung(float VersionOS){
    Marca="Samsung";
    OSVersion=VersionOS;
}

Samsung* Samsung::Clone(){
    Samsung* newPhone= new Samsung(*this); 
    return newPhone;
}

string Samsung::getMarca(){
    return Marca;
}

float Samsung::getVersionOS(){
    return OSVersion;
}

void Samsung::setVersionOS(float VersionOS){
    OSVersion=VersionOS;
}
```

### Caso de uso

Los posibles casos donde se puede usar son como creacion de diversos objetos creados a partir de uno base, con la peculiaridad de copiar las caracteristicas o atributos.

1. Un ejemplo de esto el uso de preefabs en los videojuegos donde se crean objetos con los mismos atributos.
2. Otro ejemplo, las celdas de excel, las podemos copiar con todo y su contenido, pegarlas y que se conserve sus caracteristicas.

## Abstract factory

### Explicacion

Abstract factory consta en usar un grupo o familia  de objetos para poder construir un objeto de un tipo en especifico

### Elementos

Consta de un objeto base, un familia de objetos relacionada y una fabrica especifica para cada tipo de familia de objetos

### Ejemplo

#### Java

```java
public class principal{
    public static void main(String[] args) {

        PhoneH Fabrica1=new PhoneH();
        PhoneL Fabrica2=new PhoneL();

        Phone TelefonoGamaAlta = new Phone();
        Phone TelefonoGamaBaja = new Phone();
        //Telefono Gama Alta
        TelefonoGamaAlta.setCamera(Fabrica1.CreateCamera());
        TelefonoGamaAlta.setCarcasa(Fabrica1.CreateCase());
        TelefonoGamaAlta.setPantalla(Fabrica1.CreateScreen());

        TelefonoGamaAlta.getCamera().print();
        TelefonoGamaAlta.getCarcasa().print();
        TelefonoGamaAlta.getPantalla().print();

        //Telefono Gama Baja
        TelefonoGamaBaja.setCamera(Fabrica2.CreateCamera());
        TelefonoGamaBaja.setCarcasa(Fabrica2.CreateCase());
        TelefonoGamaBaja.setPantalla(Fabrica2.CreateScreen());
        TelefonoGamaBaja.getCamera().print();
        TelefonoGamaBaja.getCarcasa().print();
        TelefonoGamaBaja.getPantalla().print();

    }
}

```

```java
public class Phone {
    private Screen Pantalla;
    private Camera Camera;
    private Case Carcasa;

    public void setCamera(Camera camera) {
        Camera = camera;
    }

    public void setCarcasa(Case carcasa) {
        Carcasa = carcasa;
    }

    public void setPantalla(Screen pantalla) {
        Pantalla = pantalla;
    }

    public Camera getCamera() {
        return Camera;
    }

    public Case getCarcasa() {
        return Carcasa;
    }
    
    public Screen getPantalla() {
        return Pantalla;
    }
}


```

```java
public interface AbstracFactory{
    public Screen CreateScreen();
    public Camera CreateCamera();
    public Case CreateCase();
}

```

```java
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

```

```java
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

```

```java
public interface Camera{
    public void print();
}
```

```java
public class CameraDown implements Camera{
    public void print(){
        System.out.println("Camera 5MPx");
    }
}
```

```java
public class CameraUP implements Camera{
    public void print(){
        System.out.println("Camera 48MPx");
    }
}
```

```java
public interface Case{
    public void print();
}
```

```java
public class CarcasaAcero implements Case{
    public void print(){
        System.out.println("Carcasa Acero");
    }
}
```

```java
public class CarcasaPlastica implements Case{
    public void print(){
        System.out.println("Carcasa Plastica");
    }
}
```

```java
public interface Screen{
    public void print();
}
```

```java
public class ScreenLCD implements Screen{
    public void print(){
        System.out.println("Screen LCD");
    }
}
```

```java
public class ScreenOled implements Screen{
    public void print(){
        System.out.println("Screen Oled");
    }
}
```

#### Python

```python
import Telefono
import Fabricas

fabrica1=Fabricas.PhoneH()
fabrica2=Fabricas.PhoneL()

telefono1=Telefono.Phone()
telefono2=Telefono.Phone()
print("Telefono 1")
print()
telefono1.Camera=fabrica1.CreateCamera()
telefono1.Pantalla=fabrica1.CreateScreen()
telefono1.Carcasa=fabrica1.CreateCase()

telefono1.Camera.Print()
telefono1.Pantalla.Print()
telefono1.Carcasa.Print()
print()
print("Telefono 2")
print()
telefono2.Camera=fabrica2.CreateCamera()
telefono2.Pantalla=fabrica2.CreateScreen()
telefono2.Carcasa=fabrica2.CreateCase()

telefono2.Camera.Print()
telefono2.Pantalla.Print()
telefono2.Carcasa.Print()
```

```python
from abc import abstractclassmethod
import Piezas

class AbstrasFactory:
    @abstractclassmethod
    def CreateScreen():
        pass
    @abstractclassmethod
    def CreateCamera():
        pass
    @abstractclassmethod
    def CreateCase():
        pass

class PhoneH(AbstrasFactory):
    @staticmethod
    def CreateScreen():
        return Piezas.ScreenOled()
    @staticmethod
    def CreateCamera():
        return Piezas.CameraUp()
    @staticmethod
    def CreateCase():
        return Piezas.CarcasaAcero()

class PhoneL(AbstrasFactory):
    @staticmethod
    def CreateScreen():
        return Piezas.ScreenLCD()
    @staticmethod
    def CreateCamera():
        return Piezas.CameraDown()
    @staticmethod
    def CreateCase():
        return Piezas.CarcasaPlastico()
```

```python
from abc import abstractclassmethod

#Pantallas
class Screen:
    @abstractclassmethod
    def Print():
        pass
class ScreenOled(Screen):
    @staticmethod
    def Print():
        print("Screen Oled")

class ScreenLCD(Screen):
    @staticmethod
    def Print():
        print("Screen LCD")

#Camaras
class Camera:
    @abstractclassmethod
    def Print():
        pass
class CameraUp(Camera):
    @staticmethod
    def Print():
        print("Camara 48MPX")

class CameraDown(Camera):
    @staticmethod
    def Print():
        print("Camara 4MPX")

#Carcasas
class Case:
    @abstractclassmethod
    def Print():
        pass
class CarcasaAcero(Case):
    @staticmethod
    def Print():
        print("Camara 48MPX")

class CarcasaPlastico(Case):
    @staticmethod
    def Print():
        print("Camara 4MPX")
```

```python
class Phone:
    
    Pantalla=None
    Camera=None
    Carcasa=None

    def __init__(self) -> None:
        pass
```

#### C++

```cpp
#include <bits/stdc++.h>
#include "Telefono.cpp"

using namespace std;

int main() {
    
    Fabricas * fabrica1=new PhoneH();
    Fabricas * fabrica2=new PhoneL();

    Phone* myPhone1= new Phone();
    Phone* myPhone2= new Phone();

    myPhone1->setScreen(fabrica1->CreateScreen());
    myPhone1->setCamera(fabrica1->CreateCamera());
    myPhone1->setCase(fabrica1->CreateCase());

    myPhone1->getScreen()->print();
    myPhone1->getCamera()->print();
    myPhone1->getCase()->print();

    cout<<endl;

    myPhone2->setScreen(fabrica2->CreateScreen());
    myPhone2->setCamera(fabrica2->CreateCamera());
    myPhone2->setCase(fabrica2->CreateCase());

    myPhone2->getScreen()->print();
    myPhone2->getCamera()->print();
    myPhone2->getCase()->print();

    return 0;
}

```

```cpp
#include <bits/stdc++.h>
#include "Piezas.cpp"

using namespace std;

class Fabricas{
    private:

    public:
        virtual Screen* CreateScreen()=0;
        virtual Camera* CreateCamera()=0;
        virtual Case* CreateCase()=0;
};

// Clase de telefono 1 
class PhoneH:public Fabricas{
    private:

    public:
        virtual Screen* CreateScreen();
        virtual Camera* CreateCamera();
        virtual Case* CreateCase();
};

Screen* PhoneH::CreateScreen(){
    Screen* s=new ScreenOled();
    return s;
}
Camera* PhoneH::CreateCamera(){
    Camera* c=new CameraUp();
    return c;
}
Case* PhoneH::CreateCase(){
    Case* c=new CaseAcero();
    return c;
}

// Clase de telefono 2 
class PhoneL:public Fabricas{
    private:

    public:
        virtual Screen* CreateScreen();
        virtual Camera* CreateCamera();
        virtual Case* CreateCase();
};

Screen* PhoneL::CreateScreen(){
    Screen* s=new ScreenLCD();
    return s;
}
Camera* PhoneL::CreateCamera(){
    Camera* c=new CameraDown();
    return c;
}
Case* PhoneL::CreateCase(){
    Case* c=new CasePlastico();
    return c;
}

```

```cpp
#include <bits/stdc++.h>

using namespace std;

class Screen {
    private:
        
    public:
        virtual void print()=0;
};

class ScreenOled:public Screen{
    private:
    
    public:
        virtual void print(){
            cout<<"Screen Oled"<<endl;
        }
};
class ScreenLCD:public Screen{
    private:
    
    public:
        virtual void print(){
            cout<<"Screen LCD"<<endl;
        }
};

class Camera {
    private:
        
    public:
        virtual void print()=0;
};

class CameraUp:public Camera{
    private:
    
    public:
        virtual void print(){
            cout<<"Camera 48 MPX"<<endl;
        }
};
class CameraDown:public Camera{
    private:
    
    public:
        virtual void print(){
            cout<<"Camer 4 MPX"<<endl;
        }
};

class Case {
    private:
        
    public:
        virtual void print()=0;
};

class CaseAcero:public Case{
    private:
    
    public:
        virtual void print(){
            cout<<"Case Acero"<<endl;
        }
};
class CasePlastico:public Case{
    private:
    
    public:
        virtual void print(){
            cout<<"Case Plastico"<<endl;
        }
};

```

```cpp
#include <bits/stdc++.h>
#include "Fabricas.cpp"

using namespace std;

class Phone{
private:
    Screen *Pantalla=NULL;
    Camera *Camara=NULL;
    Case *Carcasa=NULL;
public:
    void setScreen(Screen *pantalla){
        Pantalla=pantalla;
    }

    void setCamera(Camera *camara){
        Camara=camara;
    }

    void setCase(Case *carcasa){
        Carcasa=carcasa;
    }

    Screen* getScreen(){
        return Pantalla;
    }

    Camera* getCamera(){
        return Camara;
    }

    Case* getCase(){
        return Carcasa;
    }
};
```

### Caso de uso

El ejemplo mas claro en donde creo que se implementa es el caso del juego Mario Maker donde se dividen las familias de objetos con su estilo grafico.

# Estructurales

## Proxy

### Explicacion

Proxy consta en manipular un objeto mediante otro que permite controlar tanto el acceso como las acciones realizadas.

### Elementos

Consta del objeto base que se quiere manipular y dos objetos que lo controlaran **main -> proxy -> objeto a controlar**

### Ejemplo

#### Java

```java
import video.Video;
import video.Ivideo;
import video.videoProxy;

public class App {
    public static void main(String[] args) {
        Video miVideoHD = new Video();

        Ivideo nubeVideo = new videoProxy();

        nubeVideo.editarVideo(miVideoHD, 0);
        nubeVideo.getCambio(miVideoHD);
        nubeVideo.editarVideo(miVideoHD, 1);
        nubeVideo.getCambio(miVideoHD);
    }
}

```

```java
package video;

public class Video {
    private String Cambio;

    public void setCambio(String cambio) {
        Cambio = cambio;
    }
    public String getCambio() {
        return Cambio;
    }
}

```

```java
package video;

import video.Video;

public interface Ivideo {
    Video editarVideo(Video miVideo,int Accion);
    void getCambio(Video miVideo);
}
```

```java
package video;
import video.Ivideo;


public class videoHD implements Ivideo{

    @Override
    public Video editarVideo(Video miVideo, int Accion) {
        switch (Accion) {
            case 0:
                miVideo.setCambio("Sin edicion");
                break;
            case 1:
                miVideo.setCambio("Con edicion");
                break;
        }
        return miVideo;
    }

    @Override
    public void getCambio(Video miVideo) {
        System.out.println(miVideo.getCambio());
    }
    
}

```

```java
package video;

import video.Ivideo;
import video.videoHD;

public class videoProxy implements Ivideo {

    private videoHD videoReal;

    @Override
    public Video editarVideo(Video miVideo, int Accion) {
        if(videoReal==null){
            videoReal= new videoHD();
            return videoReal.editarVideo(miVideo, Accion);
        }
        else{
            return videoReal.editarVideo(miVideo, Accion);
        }
    }

    @Override
    public void getCambio(Video miVideo) {
        if(videoReal==null){
            videoReal= new videoHD();
            videoReal.getCambio(miVideo);;
        }
        else{
            videoReal.getCambio(miVideo);;
        }
        
    }

    
}
```

#### Python

```python
import Video
import Videos

miVideoFullHD4K = Video.video()

nubeVideo = Videos.videoProxy()

nubeVideo.editarVideo(nubeVideo,miVideoFullHD4K,0)
nubeVideo.getCambio(nubeVideo,miVideoFullHD4K)
nubeVideo.editarVideo(nubeVideo,miVideoFullHD4K,1)
nubeVideo.getCambio(nubeVideo,miVideoFullHD4K)
```

```python
class video:
    def __init__(self,v='video'):
        self.Cambio=v

    def setCambio(self,c):
        self.Cambio=c
    
    def getCambio(self):
        return self.Cambio
```

```python
from abc import abstractclassmethod
import Video

class Ivideo:
    @abstractclassmethod
    def editarVideo(miVideo,Act):
        pass
    @abstractclassmethod
    def getCambio(miVideo):
        pass

class videoHD(Ivideo):
    @staticmethod
    def editarVideo(miVideo, Act):
        if Act==0:
            miVideo.setCambio("Sin edicion")
        else:
            miVideo.setCambio("Con edicion")
        return miVideo
    @staticmethod
    def getCambio(miVideo):
        print(miVideo.getCambio())

class videoProxy(Ivideo):
    videoReal=None 
    @staticmethod
    def editarVideo(self,miVideo,Act):
        if self.videoReal==None:
            self.videoReal=videoHD()
            return self.videoReal.editarVideo(miVideo,Act)
        else:
            return self.videoReal.editarVideo(miVideo,Act)

    @staticmethod
    def getCambio(self,miVideo):
        if self.videoReal==None:
            self.videoReal=videoHD()
            self.videoReal.getCambio(miVideo)
        else:
            self.videoReal.getCambio(miVideo)
```

#### C++

```cpp
#include <bits/stdc++.h>
#include "proxy.cpp"

using namespace std;

int main() {
    
    video* miVideoHD = new video();

    Ivideo* nubeVideo = new videoProxy();
    
    nubeVideo->editarVideo(miVideoHD, 0);
    nubeVideo->getCambio(miVideoHD);
    nubeVideo->editarVideo(miVideoHD, 1);
    nubeVideo->getCambio(miVideoHD);


    return 0;
}
```

```cpp
#include <bits/stdc++.h>
#include "video.cpp"

using namespace std;
//Interfaz
class Ivideo{
    private:
        
    public:
        virtual video* editarVideo(video* miVideo,int Accion)=0;
        virtual void getCambio(video* miVideo)=0;
};
//Implementacion pero mas pesada
class videoHD:public Ivideo{
    private:
        
    public:
        virtual video* editarVideo(video* miVideo,int Accion);
        virtual void getCambio(video* miVideo);
};

video* videoHD::editarVideo(video* miVideo,int Accion){
    switch (Accion) {
            case 0:
                miVideo->setCambio("Sin edicion");
                break;
            case 1:
                miVideo->setCambio("Con edicion");
                break;
        }
        return miVideo;
}

void videoHD::getCambio(video* miVideo){
    cout<<miVideo->getCambio()<<endl;
}

//Proxy
class videoProxy:public Ivideo{
    private:
        videoHD* videoReal;
    public:
        virtual video* editarVideo(video* miVideo,int Accion);
        virtual void getCambio(video* miVideo);
};

video* videoProxy::editarVideo(video* miVideo,int Accion){
    if(videoReal==NULL){
        videoReal= new videoHD();
        return videoReal->editarVideo(miVideo, Accion);
    }
    else{
        return videoReal->editarVideo(miVideo, Accion);
    }
}
void videoProxy::getCambio(video* miVideo){
    if(videoReal==NULL){
        videoReal= new videoHD();
        videoReal->getCambio(miVideo);;
    }
    else{
        videoReal->getCambio(miVideo);;
    }
}
```

```cpp
#include <bits/stdc++.h>

using namespace std;

class video{
    private:
        string Cambio;
    public:
        void setCambio(string cambio);
        string getCambio();
};

void video::setCambio(string cambio){
    Cambio=cambio;
}
string video::getCambio(){
    return Cambio;
}
```

### Caso de uso

En redes se es un termino comun de uso, pero tambien si queremos manipular archivos a distancia, sin la necesidad de tenerlos descargados.

## Decorator

### Explicacion

Consiste en tener un sistema de capas para nuestros objetos, donde a partir de un objeto base se le empieza añadir mas capas de objetos

### Elementos

Una interfaz donde descienden el objeto base y una clase abstracta donde dependerán los decoradores

### Ejemplo

#### Java

```java
import Enemy.*;
import ConcretEnemy.*;

public class app {
    public static void main(String[] args) {
        enemy EnemigoDesnudo = new enemyBase();

        enemy EnemigoDecorado = new enemyDecoratorBase(EnemigoDesnudo);

        EnemigoDecorado.print();

        enemy EnemigoDecoradoDoble = new enemyDecoratorBase(EnemigoDecorado);

        EnemigoDecoradoDoble.print();
    }
}

```

```java
package Enemy;

public abstract class enemy {
    public abstract void print();
}

```

```java

package ConcretEnemy;

import Enemy.enemy;

public class enemyDecoratorBase extends enemyDecorator{

    public enemyDecoratorBase(enemy Decorado) {
        super(Decorado);
    }

    public void print(){
        super.decoratedEnemy.print();
        System.out.println(" y Estoy Decorado");
    }
}

```

```java

package ConcretEnemy;

import Enemy.*;

public class enemyBase extends enemy{
        public void print(){
            System.out.println("Soy un enemigo");;
        }
}

```

```java

package ConcretEnemy;

import Enemy.*;

public abstract class enemyDecorator extends enemy{
    enemy decoratedEnemy;

    enemyDecorator(enemy Decorado){
        this.decoratedEnemy=Decorado;
    }

    public abstract void print();

}

```

#### Python

```python
from BaseEnemy import *
from HelmetDecorator import *
from ArmourDecorator import *
from DifficultEnemy import *

#enemy = BaseEnemy() # descomentar enemy = BaseEnemy() para probar el reciclado de las clases decoradoras
enemy = DifficultEnemy() # si descomenta la anterior, comentar esta linea
enemyWithHelmet = HelmetDecorator(enemy)
enemyWithHelmetAndArmour = ArmourDecorator(enemyWithHelmet)
computedDamage = enemyWithHelmetAndArmour.takeDamage()
print(computedDamage)
```

```python
from EnemyDecorator import *

class ArmourDecorator(EnemyDecorator):

    def __init__(self, enemy):
        super().__init__(enemy)
    
    def takeDamage(self):
        return super().takeDamage() / 1.5
```

```python
from Enemy import *
class BaseEnemy(Enemy):
    def takeDamage(self):
        return 10
```

```python
from Enemy import *
class DifficultEnemy(Enemy):
    def takeDamage(self):
        return 50
```

```python
from abc import ABC, abstractmethod
class Enemy(ABC):
    @abstractmethod
    def takeDamage(self):
        pass
```

```python
from Enemy import *
class EnemyDecorator(Enemy):

    def __init__(self, enemy):
        self.enemy = enemy
    
    def takeDamage(self):
        return self.enemy.takeDamage()
```

```python
from EnemyDecorator import *
class HelmetDecorator(EnemyDecorator):
    
    def __init__(self, enemy):
        super().__init__(enemy)

    def takeDamage(self):
        return super().takeDamage() / 2
```


#### C++

```cpp
#include <bits/stdc++.h>
#include "enemyDecorator.cpp"


using namespace std;

int main() {
    enemy* EnemigoDesnudo = new enemyBase();

    enemy* EnemigoDecorado = new enemyDecoratorBase(EnemigoDesnudo);

    EnemigoDecorado->print();

    enemy* EnemigoDecoradoDoble = new enemyDecoratorBase(EnemigoDecorado);

    EnemigoDecoradoDoble->print();

    return 0;
}

```

```cpp
#include <bits/stdc++.h>

using namespace std;

class enemy{
    private:
        /* data */
    public:
        virtual void print()=0;
};

class enemyBase:public enemy{
    private:
        /* data */
    public:
        void print();
};

void enemyBase::print(){
    cout << "Son un enemigo" << endl;
}

```

```cpp

#include <bits/stdc++.h>
#include "enemy.cpp"


using namespace std;

class enemyDecorator:public enemy{
    private:
        
    public:
        enemy* decoratedEnemy;
        enemyDecorator(enemy* Decorado);
        virtual void print()=0;
};

enemyDecorator::enemyDecorator(enemy* Decorado){
    this->decoratedEnemy=Decorado;
}

class enemyDecoratorBase:public enemyDecorator{
    private:
        /* data */
    public:
        enemyDecoratorBase(enemy* Decorado);
        void print();
};

enemyDecoratorBase::enemyDecoratorBase(enemy* Decorado):enemyDecorator(Decorado){}

void enemyDecoratorBase::print(){
    decoratedEnemy->print();
    std::cout << "Soy un decorador" << std::endl;
}



```

### Caso de uso

El caso de uso note fue para crear un sistema de paquetes de un servicio donde tienes un plan base con ciertas funciones y que sé agremán más funcionalidad con forme más alto este en el paquete


## Bridge

### Explicacion

Es un patrón de diseño donde a partir de una conjunción de interfaces y una clase abstracta se unan para dar un mismo comportamiento a distintos objetos

### Elementos

Una interfaz donde descienden los objetos concretos.
Una clase abstracta que contiene un objeto de la interfaz.
Los objetos concretos que descienden de la clase abstracta y cambia el comportamiento.

### Ejemplo

#### Java

```java
import Concreciones.*;
import List.*;

public class app {
    public static void main(String[] args) {
        ListItemView miVideo, miStream;

        miVideo= new SoloTexto(new VideoViewModel());

        miVideo.render();

        miStream = new Miniatura(new StreamViewModel());

        miStream.render();
    }
}
```

```java
package ViewModel;

public interface IViewModel {
    public String title();
    public String image();
}

```

```java
package Concreciones;

import ViewModel.IViewModel;

public class VideoViewModel implements IViewModel{
    String video;
    
    public VideoViewModel(){
        this.video="Soy un video";
    }

    @Override
    public String title() {
        return this.video+": Lo mejor que veras";
    }

    @Override
    public String image() {
        return this.video+" con imagen";
    }
}

```

```java
package Concreciones;

import ViewModel.IViewModel;

public class StreamViewModel implements IViewModel{

    String Stream;

    public StreamViewModel(){
        this.Stream="Soy un stream";
    }

    @Override
    public String title() {
        return this.Stream+": Lo mejor que veras";
    }

    @Override
    public String image() {
        return this.Stream+": con imagen";
    }
}

```

```java
package List;

import ViewModel.*;

public abstract class ListItemView {
    protected IViewModel viewModel;
    
    protected ListItemView(IViewModel viewModel){
        this.viewModel= viewModel;
    }

    public void render(){
        System.out.println("defautl abstract render");
    }
}

```

```java
package Concreciones;
import List.*;
import ViewModel.*;

public class SoloTexto extends ListItemView{

    public SoloTexto(IViewModel viewModel) {
        super(viewModel);
    }

    @Override
    public void render(){
        System.out.println("---------------");
        System.out.println("Increible lo que veras: "+super.viewModel.title());
        System.out.println("---------------");
    }
}
```

```java
package Concreciones;
import List.*;
import ViewModel.*;

public class Miniatura extends ListItemView{

    public Miniatura(IViewModel viewModel) {
        super(viewModel);
    }

    @Override
    public void render(){
        System.out.println("---------------");
        System.out.println("Increible lo que veras: "+super.viewModel.image());
        System.out.println("---------------");
    }
}
```

#### Python

```python
from Circle import *
from RedCircle import *
from GreenCircle import *

redCircle = Circle(100, 100, 10, RedCircle())
greeCircle = Circle(100, 100, 10, GreenCircle())

redCircle.draw()
greeCircle.draw()
```

```python
from Shape import *


class Circle(Shape):
    def __init__(self, x, y, radius, drawAPI):
        super().__init__(drawAPI)
        self._x = x
        self._y = y
        self._radius = radius
    
    def draw(self):
        self.drawAPI.drawCircle(self._radius, self._x, self._y)
```

```python
#esta clase es el puento
class DrawAPI:
    def drawCircle(self, radius, x, y):
        pass
```

```python
from DrawAPI import *

class GreenCircle(DrawAPI):
    def drawCircle(self, radius, x, y):
                print("Drawing Circle[ color: green, radius: " + str(radius) + ", x: " + str(x) + ", " + str(y) + "]")
```

```python
from DrawAPI import *


class RedCircle(DrawAPI):
    def drawCircle(self, radius, x, y):
        print("Drawing Circle[ color: red, radius: " + str(radius) + ", x: " + str(x) + ", " + str(y) + "]")
```

```python

from abc import ABC, abstractmethod
class Shape(ABC):

    #drawAPI = None
    def __init__(self, drawAPI):
        self.drawAPI = drawAPI
    
    @abstractmethod
    def draw(self):
        pass
```

#### C++

```cpp
#include <bits/stdc++.h>
#include "ListItemView.cpp"


using namespace std;

int main() {
    
    ListItemView* miVideo,* miStream;

    miVideo= new SoloTexto(new VideoViewModel());

    miVideo->render();

    miStream = new MiniaturaListItemView(new StreamViewModel());

    miStream->render();

    return 0;
}
```

```cpp
#include <bits/stdc++.h>

using namespace std;

//Interfaz----------------------------------

class IViewModel{
    private:
        /* data */
    public:
        virtual string title()=0;
        virtual string image()=0;
};

//Clase concreta1---------------------------
class VideoViewModel:public IViewModel{
    private:
        string video;
    public:
        VideoViewModel();
        virtual string title();
        virtual string image();
        
};

VideoViewModel::VideoViewModel(){
    this->video="Soy un video";
}

string VideoViewModel::title(){
    return this->video+": Lo mejor que veras";
}

string VideoViewModel::image(){
    return this->video+": con imagen";
}



//Clase concreta2---------------------------

class StreamViewModel:public IViewModel{
    private:
        string Stream;
    public:
        StreamViewModel();
        virtual string title();
        virtual string image();
};

StreamViewModel::StreamViewModel(){
    this->Stream="Soy un stream";
}

string StreamViewModel::title(){
    return this->Stream+": Lo mejor que veras";
}

string StreamViewModel::image(){
    return this->Stream+": con imagen";
}
```

```cpp
#include <bits/stdc++.h>
#include "IViewModel.cpp"

using namespace std;

//Clase abstracta de la implementacion-----------------------------------------------------

class ListItemView{
    private:

    protected:
        IViewModel* viewModel;
    public:
        ListItemView(IViewModel*);
        virtual void render();
};

ListItemView::ListItemView(IViewModel* viewModel){
    this->viewModel=viewModel;
}

void ListItemView::render(){
    cout << "defautl abstract render" << endl;
}


//Clase concreta de uso de brige--------------------------------------------------------

class MiniaturaListItemView:public ListItemView{
    private:
        /* data */
    public:
        MiniaturaListItemView(IViewModel*);
        virtual void render();
};

MiniaturaListItemView::MiniaturaListItemView(IViewModel* viewModel):ListItemView(viewModel){
    
}

void MiniaturaListItemView::render(){
    cout << "---------------" << endl;
    cout << "Increible lo que veras: "+this->viewModel->image()<< endl;
    cout << "---------------" << endl;
}


//Clase concreta de uso de brige 2

class SoloTexto:public ListItemView{
    private:
        /* data */
    public:
        SoloTexto(IViewModel*);
        virtual void render();
};

SoloTexto::SoloTexto(IViewModel* viewModel):ListItemView(viewModel){

}

void SoloTexto::render(){
    cout << "---------------" << endl;
    cout << "Increible lo que veras: "+this->viewModel->title()<< endl;
    cout << "---------------" << endl;
}
```

### Caso de uso
En android al mostrar el contenido de un recycleView

## Composite

### Explicacion

Este patron permite crear un objeto complejo compuesto de mas objetos de su misma clase

### Elementos

Una interfaz donde descienden todos los objetos
Un objeto contenedor que funciona como padre de la jerarquía
El resto de objetos que descienden de la interfaz

### Ejemplo

#### Java

```java
import Entidad.*;

import java.util.ArrayList;
import java.util.List;
import ClaseConcretas.*;

public class compositeapp {
    public static void main(String[] args) {
        //declaracion de mi lista inicial
        List<Entity> initList = new ArrayList<Entity>();
        Enemy myNewEnemy; 
        //Añadiendo elementos
        initList.add(new Ball("Fire"));
        initList.add(new Ball("Stone"));
        initList.add(new Ball("Grass"));
        //Iniciando mi composite
        myNewEnemy=new Enemy(initList);
        myNewEnemy.logic();
        myNewEnemy.add(new Ball("Thunder"));
        for(int i=0;i<3;i++){
            myNewEnemy.logic();
        }
    }
}

```

```java
package Entidad;

public interface Entity {
    public void logic();
}

```

```java
package ClaseConcretas;

import java.util.List;
import Entidad.*;

public class Enemy implements Entity {

    List<Entity> myParts;

    public Enemy( List<Entity> newParts){
        myParts=newParts;
    }

    public void logic(){
        System.out.println("Shoot:");
        getChild(0).logic();
        remove(0);
    }

    public void add(Entity newPart){
        myParts.add(newPart);
    }

    public void remove(int index){
        myParts.remove(index);
    }

    public Entity getChild(int index){
        return myParts.get(index);
    }
}

```

```java
package ClaseConcretas;
import Entidad.*;

public class Ball implements Entity {
    
    String type;

    public Ball(String myType){
        type=myType;
    }

    public void logic(){
        System.out.println(type+"ball");
    }
}

```

#### Python

```python
import Entity

#Declarando lista inicial
initList=[Entity.Ball('Fire'),Entity.Ball("Stone"),Entity.Ball("Grass")]
#Usando mi composite
myNewEnemy= Entity.Enemy(initList);
myNewEnemy.logic(myNewEnemy);
myNewEnemy.add(Entity.Ball("Thunder"))
for i in range(0,3):
    myNewEnemy.logic(myNewEnemy)
```

```python
from abc import abstractclassmethod

#Interfaz(Aun que no existan en python)

class Entity:
    @abstractclassmethod
    def logic():
        pass

#Objeto contenido

class Ball(Entity):

    type=""

    def __init__(self,myType):
        super().__init__()
        self.type=myType

    @staticmethod
    def logic(self):
        print(self.type,"ball")

#Clase principal

class Enemy(Entity):
    
    myParts=[]

    def __init__(self,newParts):
        super().__init__()
        self.myParts=newParts

    @staticmethod
    def logic(self):
        print("Shoot:")
        object=self.getChild(0)
        object.logic(object)
        self.remove(0)

    def add(self,newPart):
        self.myParts.append(newPart)
    
    def remove(self,index):
        self.myParts.pop(index)
    
    def getChild(self,index):
        return self.myParts[index]
```

#### C++

```cpp
#include <bits/stdc++.h>
#include "Enemy.cpp"


using namespace std;

int main() {
    
    //declaracion de mi lista inicial
        list<Entity*> initList;
        Enemy* myNewEnemy; 
        //Añadiendo elementos
        initList.push_front(new Ball("Fire"));
        initList.push_front(new Ball("Stone"));
        initList.push_front(new Ball("Grass"));
        //Iniciando mi composite
        myNewEnemy=new Enemy(initList);
        myNewEnemy->logic();
        myNewEnemy->add(new Ball("Thunder"));
        for(int i=0;i<3;i++){
            myNewEnemy->logic();
        }

    return 0;
}
```

```cpp
#include <bits/stdc++.h>

using namespace std;

class Entity{
    private:
        /* data */
    public:
        virtual void logic()=0;
};
```

```cpp
#include <bits/stdc++.h>
#include <list>
#include "Ball.cpp"

using namespace std;

class Enemy:public Entity{
    private:
        list<Entity*> myParts;
    public:
        Enemy(list<Entity*> newPars);
        virtual void logic();
        void add(Entity *newPart);
        void remove();
        Entity* getChild();
};

Enemy::Enemy(list<Entity*> newPars){
    myParts=newPars;
}

void Enemy::add(Entity *newPart){
    this->myParts.push_front(newPart);
}

void Enemy::remove(){
    this->myParts.pop_front();
}

Entity* Enemy::getChild(){
    return this->myParts.front();
}

void Enemy::logic(){
    cout << "Shoot:" << endl;
    this->getChild()->logic();
    this->remove();
}
```

```cpp
#include <bits/stdc++.h>
#include "Entity.cpp"

using namespace std;

class Ball:public Entity{
    private:
        string type;
    public:
        Ball(string);
        virtual void logic();
};

Ball::Ball(string myType){
    type=myType;
}

void Ball::logic(){
    cout<<type+"ball"<<endl;
}

```

### Caso de uso

Unity usa este tipo de patron para unir sus objeto, los cuales decienden de GameObject

## Facade

### Explicacion

### Elementos

### Ejemplo

#### Java

```java

```

#### Python

```python

```

#### C++

```cpp

```

### Caso de uso


## FlayWaight

### Explicacion

Este patron evita la creacion excesiva de objetos, sino que te permite usar siempre el mismo objeto.

### Elementos

Una interfaz donde se crean las clases concretas y una fabrica que gestiona la creacion de los objetos

### Ejemplo

#### Java

```java
import LineaLigera.*;
import Fabrica.*;

public class flyweight {
    public static void main(String[] args) {
        FabricaDeLineas fabrica = new FabricaDeLineas();
         ILineaLigera linea1 = fabrica.getLine( "AZUL" );
         ILineaLigera linea2 = fabrica.getLine( "ROJO" );
         ILineaLigera linea3 = fabrica.getLine( "AMARILLO" );
         ILineaLigera linea4 = fabrica.getLine( "AZUL" );
        System.out.println("-------------------");
        //can use the lines independently
        linea1.dibujar( 100, 400 );
        linea2.dibujar( 200, 500 );
        linea3.dibujar( 300, 600 );
        linea4.dibujar( 400, 700 );
    }
}
```

```java
package LineaLigera;

public interface ILineaLigera {
    public String getColor();
    public void dibujar( int col, int fila );
}
```

```java
package ConcretLineal;

import LineaLigera.*;

public class Lineal implements ILineaLigera{
    private String color;
    // --------------------
    public Lineal( String color ){
        this.color = color;
    }
    // --------------------
    @Override
    public String getColor(){
        return this.color;
    }
    // --------------------
    @Override
     public void dibujar( int col, int fila ){
        System.out.println( "Dibujando línea de color [" + this.color + "] en [" + col + ", " + fila + "]" );
    }
}
```

```java
package Fabrica;

import java.util.ArrayList;
import java.util.List;
import LineaLigera.*;
import ConcretLineal.*;

public class FabricaDeLineas {

    private List<ILineaLigera> lineas;
    // --------------------
    public FabricaDeLineas(){
         this.lineas = new ArrayList<ILineaLigera>();
    }
    // --------------------
     public ILineaLigera getLine( String color ){
        // Comprobar si hemos creado una línea con el color solicitado, y devolverla en tal caso
         for(ILineaLigera linea : this.lineas){
             if( linea.getColor().equals(color) ){
                System.out.println("Línea de color [" + color + "] encontrada, la devolvemos");
                return linea;
            }
        }
        // Si no ha sido creada la creamos ahora, la agregamos a la lista y la devolvemos
        System.out.println("Creando una línea de color [" + color + "]");
         ILineaLigera linea = new Lineal( color );
         this.lineas.add( linea );
        return linea;
    }
}
```

#### Python

```python
import LineaLigera

fabrica = LineaLigera.FabricasDeLineas()
linea1 = fabrica.getLine( "AZUL" )
linea2 = fabrica.getLine( "ROJO" )
linea3 = fabrica.getLine( "AMARILLO" )
linea4 = fabrica.getLine( "AZUL" )

linea1.dibujar(linea1, 100, 400 )
linea2.dibujar(linea2, 200, 500 )
linea3.dibujar(linea3, 300, 600 )
linea4.dibujar(linea4, 400, 700 )
```

```python
from abc import abstractclassmethod


class ILineaLigera:
    @abstractclassmethod
    def getColor():
        pass
    @abstractclassmethod
    def dibujar():
        pass

class Linea(ILineaLigera):
    Color:str
    def __init__(self,colo:str) -> None:
        self.Color=colo
    @staticmethod
    def getColor(self):
        return self.Color
    @staticmethod
    def dibujar(self,col,fil):
        print("Dibujando línea de color ["+self.Color+"] en ["+str(col)+", "+str(fil)+"]")

class FabricasDeLineas:
    lineas=[]
    def __init__(self) -> None:
        self.lineas.clear()
    
    def getLine(self,color:str):
        for i in self.lineas:
            if i.getColor(i)==color:
                print("Línea de color [" + color + "] encontrada, la devolvemos")
                return i
        print("Creando una línea de color [" + color + "]")
        self.lineas.append(Linea(color))
        return self.lineas[len(self.lineas)-1]
```

#### C++

```cpp
#include <bits/stdc++.h>
#include "FabricaDeLineas.cpp"


using namespace std;

int main() {
    
    FabricaDeLineas* fabrica = new FabricaDeLineas();
     IlineaLigera* linea1 = fabrica->getLine( "AZUL" );
     IlineaLigera* linea2 = fabrica->getLine( "ROJO" );
     IlineaLigera* linea3 = fabrica->getLine( "AMARILLO" );
     IlineaLigera* linea4 = fabrica->getLine( "AZUL" );
    //System.out.println("-------------------");
    //can use the lines independently
    linea1->dibujar( 100, 400 ) ;
    linea2->dibujar( 200, 500 );
    linea3->dibujar( 300, 600 );
    linea4->dibujar( 400, 700 );

    return 0;
}
```

```cpp
#include <bits/stdc++.h>

using namespace std;

//-----------------interfaz----------------
class IlineaLigera{
    private:
        /* data */
    public:
        virtual string getColor()=0;
        virtual void dibujar(int,int)=0;
};

//----------------clase concreta-----------

class Linea:public IlineaLigera{
    private:
        string Color;
    public:
        Linea(string c);
        virtual string getColor();
        virtual void dibujar(int,int);
};

Linea::Linea(string c){
    Color=c;
}

string Linea::getColor(){
    return this->Color;
}

void Linea::dibujar(int col, int fila){
    cout << "Dibujando línea de color ["<<this->Color<<"] en ["<<col<<", "<<fila<< "]" <<endl;
}
```

```cpp
#include <bits/stdc++.h>
#include "LineaLigera.cpp"

using namespace std;

class FabricaDeLineas{
    private:
        list<IlineaLigera*> lineas;
        list<IlineaLigera*>::iterator i;
    public:
        FabricaDeLineas();
        IlineaLigera* getLine( string color );

};

FabricaDeLineas::FabricaDeLineas(){
    lineas.clear();
    i=lineas.begin();
}

IlineaLigera* FabricaDeLineas::getLine( string color ){
    // Comprobar si hemos creado una línea con el color solicitado, y devolverla en tal caso
     for(i=lineas.begin();i!=lineas.end();i++){
        IlineaLigera* a=*i;
        if(a->getColor()==color){
            cout<<"Línea de color [" + color + "] encontrada, la devolvemos"<<endl;
            return a;
        }
    }
    // Si no ha sido creada la creamos ahora, la agregamos a la lista y la devolvemos
    cout<<"Creando una línea de color [" + color + "]"<<endl;
    IlineaLigera* linea = new Linea( color );
     this->lineas.push_front( linea );
    return linea;
}    
```

### Caso de uso

En el caso de los videojuegos a la hora de crear escenarios

# Comportamiento

## Iterator

### Explicacion

El iterator es un patron de diseño que busca el poder recorrer una lista, vector, arbol, etc.

### Elementos

Un interfaz donde se implementa a nuestro iterador concreto
Una interfaz para nuestra lista o elemento a iterar
Las clases concretas de ambos

### Ejemplo

#### Java

```java
import Concretos.*;
import Iterator.*;

public class IteratorMain {
    public static void main(String[] args) {
        try{
            // Crear el objeto agregado que contiene la lista (un vector en este ejemplo)
            AgregadoConcreto agregado = new AgregadoConcreto();
            // Crear el objeto iterador para recorrer la lista
            Iterador iterador = agregado.getIterador();
            // Mover una posición adelante y mostrar el elemento
            String obj = (String) iterador.primero();
            System.out.println( obj );
            // Mover dos posiciones adelante
            iterador.siguiente();
            iterador.siguiente(); 
            // Mostrar el elemento actual
            System.out.println( (String) iterador.actual() + "\n" );
            // Volver al principio
            iterador.primero();
            // Recorrer todo
            while( iterador.hayMas() == true ) {
                System.out.println( iterador.siguiente() );
            }
        }
        catch( Exception e ){
            e.printStackTrace();
        }
    }
}
```

```java
package Iterator;

public interface Iterador {
    public Object primero();
    public Object siguiente();
    public boolean hayMas();
    public Object actual();
}

```

```java
package IAgregado;

import Iterator.Iterador;

public interface Agregado {
    public Iterador getIterador();
}

```

```java
package Concretos;

import Iterator.*;

public class IteradorConcreto implements Iterador{

     private AgregadoConcreto agregado;
     private int posicion_actual = 0;

    // -------------------------
    public IteradorConcreto( AgregadoConcreto agregado ){
        this.agregado = agregado;
    }

    // -------------------------
    @Override
     public Object primero(){
        Object obj = null;
        if( this.agregado.aDatos.isEmpty() == false ){
            this.posicion_actual = 0;
            obj = this.agregado.aDatos.firstElement();
        }
        return obj;
    }

    // -------------------------
    @Override
     public Object siguiente(){

        Object obj = null;
        if( (this.posicion_actual ) < this.agregado.aDatos.size() ){
            obj = this.agregado.aDatos.elementAt(this.posicion_actual);
            this.posicion_actual = this.posicion_actual + 1;
        }
        return obj;
    }

    // -------------------------
    @Override
     public boolean hayMas(){

        boolean ok = false;
        if( this.posicion_actual < (this.agregado.aDatos.size() ) ){
            ok = true;
        }
        return ok;
    }

    // -------------------------
    @Override
     public Object actual(){

        Object obj = null;
        if( this.posicion_actual < this.agregado.aDatos.size() ){
            obj = this.agregado.aDatos.elementAt( this.posicion_actual );
        }
        return obj;
    }
}
```

```java
package Concretos;

import java.util.Vector;

import IAgregado.*;
import Iterator.*;

public class AgregadoConcreto implements Agregado{
    
    protected Vector<String> aDatos = new Vector<String>();
    // -------------------------
    public AgregadoConcreto() {
        this.llenar();
    }
    // -------------------------
    @Override
     public Iterador getIterador(){
        return new IteradorConcreto( this );
    }
    // -------------------------
    public void llenar(){
        this.aDatos.add( new String("JOSE") );
        this.aDatos.add( new String("MARTA") );
        this.aDatos.add( new String("ANTONIO") );
        this.aDatos.add( new String("ROMINA") );
    }
}

```

#### Python

```python
import Agregado
import Iterator

agregado = Agregado.AgregadoConcreto()
iterador=Iterator.Iterador()
iterador = Agregado.AgregadoConcreto.getIterador(agregado)

obj = iterador.primero(iterador)

print(obj)

iterador.siguiente(iterador)
iterador.siguiente(iterador)

print(iterador.actual(iterador))

print()

iterador.primero(iterador)

while iterador.hayMas(iterador)==True:
    print(iterador.siguiente(iterador))
```

```python
from abc import abstractclassmethod

class Iterador:
    @abstractclassmethod
    def primero():
        pass
    @abstractclassmethod
    def siguiente():
        pass
    @abstractclassmethod
    def hayMas():
        pass
    @abstractclassmethod
    def actual():
        pass

class IteradorConcretor(Iterador):

    def __init__(self,A=None):
        super().__init__()
        self.agregado=A
        self.posicionActual=0

    @staticmethod
    def primero(self):
        obj=None
        if len(self.agregado.aDato)>0:
            self.posicionActual=0
            obj=self.agregado.aDato[0]
        return obj

    @staticmethod
    def siguiente(self):
        obj=None
        if self.posicionActual < len(self.agregado.aDato):
            obj=self.agregado.aDato[self.posicionActual]
            self.posicionActual+=1
        return obj

    @staticmethod
    def hayMas(self):
        ok=False
        if self.posicionActual<len(self.agregado.aDato):
            ok=True
        return ok

    @staticmethod
    def actual(self):
        obj=None
        if self.posicionActual<len(self.agregado.aDato):
            obj=self.agregado.aDato[self.posicionActual]
        return obj
```

```python
from abc import abstractclassmethod
import Iterator

class Agregado:
    @abstractclassmethod
    def getIterador():
        pass

class AgregadoConcreto(Agregado):
    aDato = []
    def __init__(self):
        super().__init__()
        self.llenar()

    @staticmethod
    def getIterador(self):
        return Iterator.IteradorConcretor(self)

    def llenar(self):
        self.aDato.append("Jose")
        self.aDato.append("Maria")
        self.aDato.append("Antonio")
        self.aDato.append("Romina")
```

#### C++

```cpp
#include <bits/stdc++.h>
#include "ClasesConcretas.cpp"

using namespace std;

int main() {

    // Crear el objeto agregado que contiene la lista (un vector en este ejemplo)
    AgregadoConcreto* agregado = new AgregadoConcreto();
    // Crear el objeto iterador para recorrer la lista
    Iterador* iterador = agregado->getIterator();
    // Mover una posición adelante y mostrar el elemento
    string obj = (string) iterador->primero();
    cout<<obj<<endl;
    // Mover dos posiciones adelante
    iterador->siguiente();
    iterador->siguiente(); 
    // Mostrar el elemento actual
    cout<< iterador->actual() << "\n";
    // Volver al principio
    iterador->primero();
    // Recorrer todo
    while( iterador->hayMas() == true ) {
        cout<< iterador->siguiente()<<endl;
    }

    return 0;

}
```

```cpp
#include <bits/stdc++.h>
#include "Interfaces.cpp"

using namespace std;


//Clase concreta de Agregado-------------------------------------
class AgregadoConcreto:public Agregado{
    private:

    public:
        list<string> aDatos;
        list<string>::iterator pos;
        void llenar();
        AgregadoConcreto(/* args */);
        virtual Iterador* getIterator();
};

//Clase concreta  de Iterador --------------------------------------------------

class IteradorConcreto:public Iterador{
    private:
        AgregadoConcreto* agregado;
        int posicionActual;
    public:
        IteradorConcreto(AgregadoConcreto*);
        virtual string primero();
        virtual string siguiente();
        virtual bool hayMas();
        virtual string actual();
};

//Funciones de clase concreta Agregado--------------------------
void AgregadoConcreto::llenar(){
    this->aDatos.push_back("Jose");
    this->aDatos.push_back("Marta");
    this->aDatos.push_back("Antonio");
    this->aDatos.push_back("Romina");
}

AgregadoConcreto::AgregadoConcreto(/* args */){
    this->aDatos.clear();
    this->llenar();
}

Iterador* AgregadoConcreto::getIterator(){
    Iterador* miIterator=new IteradorConcreto(this);
    return miIterator;
}

//Funciones de Iterador Concreto----------------------------------------

IteradorConcreto::IteradorConcreto(AgregadoConcreto* Agregado){
    this->posicionActual=0;
    this->agregado=Agregado;
}

string IteradorConcreto::primero(){
    string obj="";
    if(this->agregado->aDatos.empty()==false){
        this->posicionActual=0;
        this->agregado->pos=this->agregado->aDatos.begin();
        list<string>::iterator position = this->agregado->pos;
        obj = *position;
    }
    return obj;
}

string IteradorConcreto::siguiente(){
    string obj = "";
    list<string>::iterator position;
    if(this->posicionActual<this->agregado->aDatos.size()){
        position=this->agregado->pos;
        obj=*position;
        this->posicionActual++;
        this->agregado->pos++;
    }
    return obj;
}

bool IteradorConcreto::hayMas(){
    bool ok = false;
    if(this->posicionActual<this->agregado->aDatos.size()){
        ok=true;
    }
    return ok;
}

string IteradorConcreto::actual(){
    string obj="";
    list<string>::iterator position;
    if(this->posicionActual<this->agregado->aDatos.size()){
        position = this->agregado->pos;
        obj = *position;
    }
    return obj;
}
```

```cpp
#include <bits/stdc++.h>

using namespace std;

class Iterador{
    private:
        /* data */
    public:
        virtual string primero()=0;
        virtual string siguiente()=0;
        virtual bool hayMas()=0;
        virtual string actual()=0;
};

class Agregado{
    private:
        /* data */
    public:
        virtual Iterador* getIterator()=0;
};

```

### Caso de uso

Se usa en los leguaje comunes como c++ para iterar listas, vectores, arboles binarios, etc.

## Memento

### Explicacion

Este patron busca poder generar puntos de guardado y restaurar objetos a esos estados

### Elementos

Los objetos base
Una lista donde se guardan los estado
Un gestor que se encarga de guardar o restaurar los objetos

### Ejemplo

#### Java

```java
import Originador.*;
import Pojo.*;

class MementoMain{
    public static void main(String[] args) {
        // Crear el objeto originador/creador
        Originator creador = new Originator("Pedro", "Gil Mena");
        // Crear el objeto gestor/vigilante del Memento
        Caretaker vigilante= new Caretaker();
        // Crear el Memento y asociarlo al objeto gestor
        vigilante.setMemento( creador.createMemento() );
        // Mostrar los datos del objeto
        System.out.println("Nombre completo: [" + creador.getNombre() + " " + creador.getApellidos() + "]" );
        // Modificar los datos del objeto
        creador.setNombre("María");
        creador.setApellidos("Mora Miró");
        // Mostrar los datos del objeto
        System.out.println("Nombre completo: [" + creador.getNombre() + " " + creador.getApellidos() + "]" );
        // Restaurar los datos del objeto
        creador.setMemento( vigilante.getMemento() );
        // Mostrar los datos del objeto
        System.out.println("Nombre completo: [" + creador.getNombre() + " " + creador.getApellidos() + "]" );
    }
}
```

```java
package Pojo;

import Memento.*;

public class Caretaker {
    private Memento memento;
    // ---------------------------
     public void setMemento(Memento memento) {
        this.memento = memento;
    }
    // ---------------------------
     public Memento getMemento() {
        return this.memento;
    }
}

```

```java
package Memento;

public class Memento {
    private String nombre;
    private String apellidos;
    // ---------------------------
     public Memento(String nombre, String apellidos) {
        this.nombre = nombre;
        this.apellidos = apellidos;
    }
    // ---------------------------
    public String getNombre() {
        return this.nombre;
    }
    // ---------------------------
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    // ---------------------------
    public String getApellidos() {
        return this.apellidos;
    }
    // ---------------------------
    public void setApellidos(String apellidos) {
        this.apellidos = apellidos;
    }
}
```

```java
package Originador;

import Memento.*;

public class Originator {
    private String nombre;
    private String apellidos;
    // ---------------------------
     public Originator(String nombre, String apellidos) {
        this.nombre = nombre;
        this.apellidos = apellidos;
    }
    // ---------------------------
    public void setMemento(Memento m) {
        this.nombre = m.getNombre();
        this.apellidos = m.getApellidos();
    }
    // ---------------------------
     public Memento createMemento() {
        return new Memento(nombre, apellidos);
    }
    // ---------------------------
    public String getNombre() {
        return this.nombre;
    }
    // ---------------------------
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    // ---------------------------
    public String getApellidos() {
        return this.apellidos;
    }
    // ---------------------------
    public void setApellidos(String apellidos) {
        this.apellidos = apellidos;
    }
}

```

#### Python

```python
import memento

# Crear el objeto originador/creador
creador = memento.Originator("Pedro", "Gil Mena")
# Crear el objeto gestor/vigilante del Memento
vigilante= memento.Caretaker()
# Crear el Memento y asociarlo al objeto gestor
vigilante.memento = creador.createMemento()
# Mostrar los datos del objeto
print("Nombre completo: [" + creador.nombre + " " + creador.apellidos + "]" )
# Modificar los datos del objeto
creador.nombre="María"
creador.apellidos="Mora Miró"
# Mostrar los datos del objeto
print("Nombre completo: [" + creador.nombre + " " + creador.apellidos + "]" )
# Restaurar los datos del objeto
creador.setMemento( vigilante.memento )
# Mostrar los datos del objeto
print("Nombre completo: [" + creador.nombre + " " + creador.apellidos + "]" )
```

```python
class Memento:
    nombre=""
    apellidos=""

    def __init__(self,nombre="",apellidos=""):
        self.nombre=nombre
        self.apellidos=apellidos

class Originator:
    nombre=""
    apellidos=""

    def __init__(self,nombre,apellidos):
        self.nombre=nombre
        self.apellidos=apellidos
    
    def setMemento(self,m):
        self.nombre=m.nombre
        self.apellidos=m.apellidos

    def createMemento(self):
        return Memento(self.nombre,self.apellidos)

class Caretaker:
    memento=Memento()
```

#### C++

```cpp
#include <bits/stdc++.h>
#include "Caretaker.cpp"

using namespace std;

int main() {

    // Crear el objeto originador/creador
    Originator* creador = new Originator("Pedro", "Gil Mena");
    // Crear el objeto gestor/vigilante del Memento
    Caretaker* vigilante= new Caretaker();
    // Crear el Memento y asociarlo al objeto gestor
    vigilante->setMemento( creador->createMemento() );
    // Mostrar los datos del objeto
    cout<<"Nombre completo: [" + creador->getNombre() + " " + creador->getApellidos() + "]"<<endl;
    // Modificar los datos del objeto
    creador->setNombre("María");
    creador->setApellidos("Mora Miró");
    // Mostrar los datos del objeto
    cout<<"Nombre completo: [" + creador->getNombre() + " " + creador->getApellidos() + "]"<<endl;
    // Restaurar los datos del objeto
    creador->setMemento( vigilante->getMemento() );
    // Mostrar los datos del objeto
    cout<<"Nombre completo: [" + creador->getNombre() + " " + creador->getApellidos() + "]"<<endl;
    

    return 0;
}
```

```cpp
#include <bits/stdc++.h>
#include "Originator.cpp"

using namespace std;

class Caretaker{
    private:
        Memento* memento;
    public:
        void setMemento(Memento*);
        Memento* getMemento();
};

void Caretaker::setMemento(Memento* memento){
    this->memento=memento;
}

Memento* Caretaker::getMemento(){
    return this->memento;
}
```

```cpp
#include <bits/stdc++.h>

using namespace std;

class Memento{
    private:
        string nombre;
        string apellidos;
    public:
        Memento(string,string);
        string getNombre();
        void setNombre(string);
        string getApellidos();
        void setApellidos(string);
};

Memento::Memento(string nombre, string apellidos){
    this->nombre=nombre;
    this->apellidos=apellidos;
}

string Memento::getNombre(){
    return this->nombre;
}
void Memento::setNombre(string nombre){
    this->nombre=nombre;
}
string Memento::getApellidos(){
    return this->apellidos;
}
void Memento::setApellidos(string apellidos){
    this->apellidos=apellidos;
}

```

```cpp
#include <bits/stdc++.h>
#include "Memento.cpp"

using namespace std;



class Originator{
    private:
        string nombre;
        string apellidos;
    public:
        Originator(string,string);
        void setMemento(Memento*);
        Memento* createMemento();
        string getNombre();
        void setNombre(string);
        string getApellidos();
        void setApellidos(string);
};

Originator::Originator(string nombre, string apellidos){
    this->nombre = nombre;
    this->apellidos = apellidos;
}

void Originator::setMemento(Memento* m){
    this->nombre = m->getNombre();
    this->apellidos = m->getApellidos();
}

Memento* Originator::createMemento(){
    return new Memento(this->nombre,this->apellidos);
}

string Originator::getNombre(){
    return this->nombre;
}

void Originator::setNombre(string nombre){
    this->nombre=nombre;
}

string Originator::getApellidos(){
    return this->apellidos;
}

void Originator::setApellidos(string apellidos){
    this->apellidos=apellidos;
}
```

### Caso de uso

Usado en videojuegos para restaurar puntos de guardado

## Observer

### Explicacion

### Elementos

### Ejemplo

#### Java

```java

```

#### Python

```python

```

#### C++

```cpp

```

### Caso de uso



## Chain os responsability

### Explicacion

### Elementos

### Ejemplo

#### Java

```java

```

#### Python

```python

```

#### C++

```cpp

```

### Caso de uso


## Mediator

### Explicacion

### Elementos

### Ejemplo

#### Java

```java

```

#### Python

```python

```

#### C++

```cpp

```

### Caso de uso