n=int(input("Suma de varios numeros\n\nIngrese cuantos numeros quiere sumar: "))
suma=0
for i in range(0, n):
    num=float(input("Ingrese el numero " + str(i+1) + ": "))
    suma=suma+num

print("Resultado: " + str(suma))