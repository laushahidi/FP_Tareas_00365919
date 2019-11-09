def menu():
    print("\nMenu de cine: \n1. Peliculas\n2. Comida\n3. Salir\nEliga una opcion: ")

def menu2():
    print("\nPeliculas en carteleta: \n1. Titanic \n2. Joker \n3. Yo antes de ti \nEliga una opcion: ")


def horarios(pelicula):
    if pelicula==1:
        print("\nHorarios en cartelera: \n3:30pm\n8:00pm")
    elif pelicula==2:
        print("\nHorarios en cartelera: \n4:30pm\n9:00pm")
    elif pelicula==3:
        print("\nHorarios en cartelera: \n5:30pm\n10:00pm")
    else:
        print("\nOpcion invalida")

def comida():
    print("\nMenu de comida: \n1. Palomitas de maiz\n2. Hot dog\n3. Nachos\nQue precios desea ver (digite la opcion): ")


def precios(opcioncomida):

    if opcioncomida==1:
        print("\nPequeña: $3.50\nMediana: $4.50\nGrande: $5.50")
    elif opcioncomida==2:
        print("\n$3.50")
    elif opcioncomida==3:
        print("\nOrden pequeña: $2.50\nOrden mediana: $3.50\nOrden grande: $4.50")
    else:
        print("\nOpcion invalida")

menu()
opcion=int(input())
while opcion!=3:
    if opcion==1:
        menu2()
        pelicula=int(input())
        horarios(pelicula)

    elif opcion==2:
        comida()
        opcioncomida=int(input())
        precios(opcioncomida)

    
    elif opcion>3:
        print("\nOpcion invalida")
    
    menu()
    opcion=int(input())

if opcion==3:
    print("\nSalida exitosa")
