from Celular import Samsung

Galaxy=Samsung(0.1)
GalaxyTab= Galaxy.Clonar(Galaxy)

if GalaxyTab!=None:
    print(GalaxyTab.getMarca())
    print(GalaxyTab.getOS())

print(GalaxyTab==Galaxy)