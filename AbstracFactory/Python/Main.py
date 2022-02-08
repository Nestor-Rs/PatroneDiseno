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