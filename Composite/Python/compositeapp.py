import Entity

#Declarando lista inicial
initList=[Entity.Ball('Fire'),Entity.Ball("Stone"),Entity.Ball("Grass")]
#Usando mi composite
myNewEnemy= Entity.Enemy(initList);
myNewEnemy.logic(myNewEnemy);
myNewEnemy.add(Entity.Ball("Thunder"))
for i in range(0,3):
    myNewEnemy.logic(myNewEnemy)