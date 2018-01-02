# Head ends here
import random
def next_move(posc, posr, grid):

    directions = ["UP", "RIGHT", "DOWN", "LEFT"]
    side_dir = [0] * 4
    allowed_directions = [0] * 4

    #cleaning
    line = grid[posc]
    if(line[posr] == 'd'):
        print("CLEAN")
        return


    if(posc - 1 >= 0):
        line = grid[posc - 1]
        if (line[posr] == 'd'):
            print("UP")
            return
        else:
            allowed_directions[0] = 1
            if(posr - 1 >= 0 and line[posr - 1] == 'd'):
                side_dir[0] = 1
            elif(posr + 1 < 5 and line[posr + 1] == 'd'):
                side_dir[1] = 1


    if (posr + 1 < 5):
        line = grid[posc]
        if (line[posr + 1] == 'd'):
            print("RIGHT")
            return
        else:
            allowed_directions[1] = 1
            if(posc - 1 >= 0):
                line = grid[posc - 1]
                if(line[posr + 1] == 'd'):
                    side_dir[1] = 1
            elif(posc + 1 < 5):
                line = grid[posc + 1]
                if(line[posr + 1] == 'd'):
                    side_dir[2] = 1


    if (posc + 1 < 5):
        line = grid[posc + 1]
        if (line[posr] == 'd'):
            print("DOWN")
            return
        else:
            allowed_directions[2] = 1
            if (posr - 1 >= 0 and line[posr - 1] == 'd'):
                side_dir[3] = 1
            elif (posr + 1 < 5 and line[posr + 1] == 'd'):
                side_dir[2] = 1

    if (posr - 1 >= 0):
        line = grid[posc]
        if (line[posr - 1] == 'd'):
            print("LEFT")
            return
        else:
            allowed_directions[3] = 1
            if (posc - 1 >= 0):
                line = grid[posc - 1]
                if (line[posr - 1] == 'd'):
                    side_dir[0] = 1
            elif (posc + 1 < 5):
                line = grid[posc + 1]
                if (line[posr - 1] == 'd'):
                    side_dir[3] = 1

    for i in range(1, 5):
        if(side_dir[i % 4] == 1):
            if(allowed_directions[i % 4] == 1):
                print(directions[i % 4])
                return
            elif(allowed_directions[(i - 1) % 4] == 1):
                print(directions[(i - 1) % 4])
                return

    num = 1
    while num == 1:
        i = random.randint(0, 3)
        if(allowed_directions[i] == 1):
            print(directions[i])
            return

# Tail starts here
if __name__ == "__main__":
    pos = [int(i) for i in input().strip().split()]
    board = [[j for j in input().strip()] for i in range(5)]
    next_move(pos[0], pos[1], board)