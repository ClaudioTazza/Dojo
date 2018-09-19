print("Money\nDetermina il numero minimo di banconote.\n\n")
money = int( input("importo (dollari): ") )

if(money < 0):
  print("Se hai dei debiti veditela con qualcun altro")

else:
  print("\nbiglietti da $20: ", money//20)
  money %= 20
  print("\nbiglietti da $10: ", money//10)
  money %= 10
  print("\nbiglietti da $5: ", money//5)
  money %= 5
  print("\nbiglietti da $1: ", money)

