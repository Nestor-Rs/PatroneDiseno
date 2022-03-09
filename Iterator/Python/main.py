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