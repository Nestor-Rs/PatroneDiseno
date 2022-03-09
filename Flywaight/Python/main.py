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