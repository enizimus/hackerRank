n = int(input().strip())
unsorted = []

for val in range(n):   
   unsorted.append(str(input().strip()))

unsorted.sort(key=lambda x: int(x))

for val in unsorted:
    print(val)