print("Factorial")
n=int(input("\nIngrese un numero: "))
f=1
for i in range(2,n+1):
  f=f*i
print("\n" + str(n) + "! = " + str(f))