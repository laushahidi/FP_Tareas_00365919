n=int(input("Division de varios numeros\n\nIngrese cuantos numeros quiere dividir: "))
num=float(input("Ingrese el numero 1: "))
division=num
for i in range(1, n):
    num=float(input("Ingrese el numero " + str(i+1) + ": "))
    while num==0:
        num=float(input("Ingrese un numero diferente a cero: "))
    division/=num

print("Resultado: " + str(division))