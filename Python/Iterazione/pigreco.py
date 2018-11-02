print ("Approssimazione di Pi Greco\n"
       "mediante la serie:\n\n"
       
       "4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...\n\n")

n = int(input("Quanti termini vuoi utilizzare? "))
pi = 0.
segno = 1
divisore = 1

for i in range(n):
 pi += (4./divisore) * segno 

 divisore += 2
 segno *= -1

print("PI: ", pi)


