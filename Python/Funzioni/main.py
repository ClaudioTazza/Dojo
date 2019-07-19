import math

def distanza(xy, xy2):
  disX = xy[0] - xy2[0]
  disY = xy[1] - xy2[1]
  dis = math.sqrt( (disX * disX) + (disY * disY) )
  return dis

print(distanza((0, 0), (-3, -4)))
