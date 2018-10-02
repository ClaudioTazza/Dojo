import os

if not( os.path.isfile("sum.dat") ): # Se in file non esiste 
  num = 0
   
else:
  f = open("sum.dat", 'r')
  # Apre il file in lettura

  line = f.readline()
  num = int(line)
  # Legge il numero presente in sum.dat

  f.close()

f = open("sum.dat", 'w')
# Apre in scrittura 

newNum = int( input('Inserire il numero da sommare: ') )
f.write(num + newNum)
# Chiede un numero e lo somma a quello gia' presente

f.close()
# Chiude il file

