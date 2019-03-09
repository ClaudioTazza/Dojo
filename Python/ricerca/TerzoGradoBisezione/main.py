low = 0.3
high = 0.75
soglia = 0.00001

print "Terzo Grado\n\n"

print "Data l'equazione x^3 + 4.5 x^2 + 3.5 x - 3 = 0\n\n"

print "Trova la soluzione compresa nell'intervallo (", low, ",", high, ")"
print "mediate metodo di bisezione\n\n"

print "Intervallo di ricerca: (", low, ",", high, ")\n"
print "Valore soglia per lo zero:", soglia, "\n\n"

x = (low + high) / 2
segno = 0
conta = 0 

while low < high:
    value = (x**3 + 4.5*x**2 + 3.5*x - 3)
    conta += 1

    if value < 0:
        segno = -1
        value *= -1

    if value < soglia:
        break

    if segno == -1:
      low = x  
    else:
      high = x   

    x = (low + high) / 2
    segno = 0

print "Soluzione = ", x
print "Passaggi = ", conta
