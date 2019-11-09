print("Division de 2 digitos\n")
num1=int(input("Ingrese el primer numero: "))
num2=int(input("Ingrese el segundo numero: "))
while num2==0:
    num2=int(input("Ingrese un numero diferente a cero: "))
resultado=float(num1/num2)
print("\n" + str(num1) + " ÷ " + str(num2) + " = " + str(resultado) + "\n")