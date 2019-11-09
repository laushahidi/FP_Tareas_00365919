n=int(input("Multiplicacion de varios numeros\n\nIngrese cuantos numeros quiere multiplicar: "))
multiplicacion=1
for i in range(0, n):
    num=float(input("Ingrese el numero " + str(i+1) + ": "))
    multiplicacion*=num

print("Resultado: " + str(multiplicacion))