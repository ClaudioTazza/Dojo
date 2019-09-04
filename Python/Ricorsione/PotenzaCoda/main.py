def potenzaCoda(base, esponente):
  return potenzaCoda_Helper(base, esponente, 1)

def potenzaCoda_Helper(base, esponente, ris):
  if(esponente == 0):
    return ris 

  else:
    ris *= base
    esponente -= 1
    print(base)
    print(esponente)
    print(ris)
    potenzaCoda_Helper(base, esponente, ris)


print( potenzaCoda(10, 1) )
print( potenzaCoda_Helper(10, 0, 10) )
