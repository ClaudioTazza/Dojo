low = 0.3
high = 0.75
soglia = 0.00001

print "Terzo Grado\n\n"

print "Data l'equazione x^3 + 4.5 x^2 + 3.5 x - 3 = 0\n\n"

print "Trova la soluzione compresa nell'intervallo (", low, ",", high, ")"
print "mediate metodo di bisezione\n\n"

print "Intervallo di ricerca: (", low, ",", high, ")\n"
print "Valore soglia per lo zero:", soglia, "\n\n"

g = (low + high) / 2
conta = 0 

while low < high:
    gval = (g**3 + 4.5*g**2 + 3.5*g - 3)
    lval = (low**3 + 4.5*low**2 + 3.5*low - 3)
    conta += 1

    if gval < soglia:
        break
    elif (gval < 0 and lval > 0) or (gval > 0 and lval < 0):
        high = g
    else:
        low = g

    g = (low + high) / 2

print "Soluzione = ", g
print "Passaggi = ", conta
