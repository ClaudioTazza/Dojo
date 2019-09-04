def potenza(base, esponente):
  if(esponente == 1):
    return base

  else:
    return base * potenza(base, esponente-1) 

print(potenza(10, 3))
