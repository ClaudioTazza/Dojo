import cai

contaErrori = 0
count = 0

while True:
  num1 = cai.estrai_num()
  num2 = cai.estrai_num()

  while True:
    print('Quanto fa ', num1, ' per ', num2, '(CTRL+C per uscire)')

    answer = input()

    count += 1 

    correct_an = num1 * num2

    if (int(answer) != correct_an):
      cai.sbagliato()
      contaErrori += 1

    if (count == 10):
      if( (contaErrori / count) * 100. >= 75. ):
        print('Please ask your instructor for extra help.\n')

    if(int(answer) == correct_an):
      break

  cai.giusto()

