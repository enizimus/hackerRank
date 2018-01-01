# Bot saves princess 
# 1.1.2018 Eniz Museljic

def displayPathtoPrincess(n, grid):
    my_location = []
    princess_location = []
    for i in range(0, n):
        line = grid[i]
        for j in range(0, n):
            if(line[j] == 'm'):
                my_location.append(j)
                my_location.append(i)
            elif(line[j] == 'p'):
                princess_location.append(j)
                princess_location.append(i)


    while my_location[1] != princess_location[1]:
        if (princess_location[1] < my_location[1]):
            print("UP")
            my_location[1] -= 1
        elif (princess_location[1] > my_location[1]):
            print("DOWN")
            my_location[1] += 1

    while my_location[0] != princess_location[0]:
        if(princess_location[0] < my_location[0]):
            print("LEFT")
            my_location[0] -= 1
        elif(princess_location[0] > my_location[0]):
            print("RIGHT")
            my_location[0] += 1


# print all the moves h
m = int(input())
grid = []
for i in range(0, m):
    grid.append(input().strip())

displayPathtoPrincess(m, grid)

