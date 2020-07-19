#include <iostream> 
using namespace std; 

int main() 
{ 
    int a[4][4] = { {2,4,6,8}, {5,9,12,16}, {2,11,5,9}, {3,2,1,8}};
    int m=4, n=4;
    int Top=0, Bottom= m-1, Left=0, Right=n-1, direction=0;  // direction 0 : right, 1 : down, 2 : left, 3 : up

    while(Top <= Bottom && Left <= Right)
    {
        if(direction == 0){
            for(int i=Left; i<=Right; i++)
                cout<<a[Top][i]<<" ";
            Top++;
            
        }
        else if(direction == 1){
            for(int i=Top; i<= Bottom; i++)
                cout<<a[i][Right]<<" ";
            Right--;
            
        }
        else if(direction == 2){
            for(int i=Right; i>=Left; i--)
                cout<<a[Bottom][i]<<" ";
            Bottom--;
            
        }
        else if(direction == 3){
            for(int i=Bottom; i>=Top; i--)
                cout<<a[i][Left]<<" ";
            Left++;
    
        }
        direction = (direction+1)%4;
    }
    return 0;
} 
