low = 0.30
high = 0.75
passo = 0.001
soglia = 0.00001
passaggi = 0
x = low

print "Terzo Grado\n\n"

print "Data l'equazione x^3 + 4.5 x^2 + 3.5 x - 3 = 0\n\n"

print "Trova la soluzione compresa nell'intervallo (", low,  "," , high ,")" 
print "mediante metodo di bisezione\n" 

print "x" 

print "\n\tValore iniziale: ", high,"\n"
print "\tvalore finale: ", low,"\n"
print "\tpasso: ", passo,"\n\n\n"

print "Valore soglia per lo zero : ", soglia

while x < high:
    valore = (x**3 + 4.5 * x**2 + 3.5 * x - 3)
    if valore < 0:
        valore *= -1

    if valore < soglia:
        break;

    else:
       passaggi += 1
       x += passo

print "Soluzione:", x
print "Passaggi", passaggi

