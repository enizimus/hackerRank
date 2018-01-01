# Bot saves princess 2 
# 1.1.2018 Eniz Museljic

def nextMove(n, c, r, grid):
    princess_location = []
    for i in range(0, n):
        line = grid[i]
        for j in range(0, n):
            if(line[j] == 'p'):
                princess_location.append(j)
                princess_location.append(i)
                break

    while c != princess_location[1]:
        if (princess_location[1] < c):
            return "UP"
        elif (princess_location[1] > c):
            return "DOWN"

    while r != princess_location[0]:
        if(princess_location[0] < r):
            return "LEFT"
        elif(princess_location[0] > r):
            return "RIGHT"



# print all the moves h
n = int(input())
r,c = [int(i) for i in input().strip().split()]
grid = []
for i in range(0, n):
    grid.append(input().strip())

print(nextMove(n, r, c, grid))