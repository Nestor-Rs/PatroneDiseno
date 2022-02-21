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