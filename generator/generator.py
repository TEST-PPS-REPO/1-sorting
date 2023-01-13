import sys
import random
import hashlib

from random import randint as rnd

# Fixed Random Seed
hashValue = hashlib.sha256("|".join(sys.argv[1:]).encode()).hexdigest()
random.seed(hashValue)

n = int(sys.argv[1])
l = int(sys.argv[2])
r = int(sys.argv[3])

a = [rnd(l, r) for _ in range(n)]
print(n)
for i in a:
  print(i)