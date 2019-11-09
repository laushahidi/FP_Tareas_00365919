n=int(input("Resta de varios numeros\n\nIngrese cuantos numeros quiere restar: "))
num=float(input("Ingrese el numero 1: "))
resta=num
for i in range(1, n):
    num=float(input("Ingrese el numero " + str(i+1) + ": "))
    resta-=num

print("Resultado: " + str(resta))