print("Money\nDetermina il numero minimo di banconote.\n\n")
Money = int( input("importo (dollari): ") )

if(Money < 10):
  print("Se hai dei debiti veditela con qualcun altro")

else:
  print("\nbiglietti da $20: ", Money//20)
  Money %= 20
  print("\nbiglietti da $10: ", Money//10)
  Money %= 10
  print("\nbiglietti da $5: ", Money//5)
  Money %= 5
  print("\nbiglietti da $1: ", Money)

