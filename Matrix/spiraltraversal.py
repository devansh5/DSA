# In given matrix print the spiral traversal 
# spiral form 
# most important question in matrix 
# First make four variable top.down,left,right,direction
# direction variable have four values in which
# if direction=0 left to right
# direction=1 top to down
# direction=2 right to left 
# direction=3 down to top
def spiraltraverse(m,n,arr):
    top=0
    down=m-1
    left=0
    right=n-1
    direction=0
    while(top<=down and left<=right):
        for i in range(left,right+1):
            print(arr[top][i],end=" ")
        top+=1
        for i in range(top,down+1):
            print(arr[i][right],end=" ")
        right-=1
        if top<down:
            for i in range(right,left-1,-1):
                print(arr[down][i],end=" ")
            down-=1

        if left<right:
            for i in range(down,top-1,-1):
                print(arr[i][left],end=" ")
            left+=1
        
    
