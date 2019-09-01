import random

def sbagliato():
  num = random.randrange(0, 4)
  
  if(num == 0):
    print("No. Please try again\n")
  elif(num == 1):
    print("Wrong. Try once  more.\n")
  elif(num == 2):
    print("Don't give up!\n")
  elif(num == 3):
    print("No. Keep trying\n")
 
def giusto():
 num = random.randrange(0, 4)
  
 if(num == 0):
   print("Very Good!\n")
 elif(num == 1):
   print("Excellent!.\n")
 elif(num == 2):
   print("Nice work!\n")
 elif(num == 3):
   print("Keep up the good work!\n")
  
def estrai_num():
  return random.randrange(1, 10)

if __name__ == '__main__':
  giusto()
  sbagliato()
  print(estrai_num())
