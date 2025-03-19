a=[]
n = int(input("Ingrese cuantos numeros quiere en su lista: "))
l=0
while l<n:
    i = int(input("Ingrese el numero: "))
    a.append(i)
    l+=1
    
print (a)
suma=sum(a)
print (suma)
prom = suma/n
print (prom)
    
