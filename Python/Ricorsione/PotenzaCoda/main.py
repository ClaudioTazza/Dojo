def potenzaCoda(base, esponente):
  return potenzaCoda_Helper(base, esponente, 1)

def potenzaCoda_Helper(base, esponente, ris):
  if(esponente == 0):
    return ris 

  else:
    ris *= base
    potenzaCoda_Helper(base, esponente-1, ris)

print(potenzaCoda(10, 1))
