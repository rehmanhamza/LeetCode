#include<stdio.h>
#include<stdlib.h>

#define N 3


void dfs(int** image, int sr, int sc, int newColor, int rows, int cols, int source){
    if(sr<0 || sr>=rows || sc<0 || sc>=cols){
         return;
    }else if(image[sr][sc] != source){
        return;
    }
    
    image[sr][sc] = newColor;
        
    dfs(image, sr-1, sc, newColor, rows, cols, source);
    dfs(image, sr+1, sc, newColor, rows, cols, source);
    dfs(image, sr, sc-1, newColor, rows, cols, source);
    dfs(image, sr, sc+1, newColor, rows, cols, source);
}

int** floodFill(int** image, int sr, int sc, int newColor) {
    if(newColor == image[sr][sc]){
        return image;
    }

    int rows = N;
    int cols = N;
    int source = image[sr][sc];
        
    dfs(image, sr, sc, newColor, rows, cols, source);

    return image;
}

void destroyArray(int** ptr){
    free(*ptr);
    free(ptr);
}

void print_image(int** ptr){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int ** image;
    image = (int **)malloc(N*sizeof(int*));
    for(int i=0; i<N;i++){
        image[i] = (int*)malloc(N*sizeof(int));
    }
    int image1[N][N] = {{1,1,1},{1,1,0},{1,0,1}};
    int sr = 1;
    int sc = 1;
    int newColor = 2;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            image[i][j] = image1[i][j];
        }
    }

    int** ptr = floodFill(image, sr, sc, newColor);
    print_image(ptr);
    destroyArray(ptr);

    return 0;
}

/*
Input: image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, newColor = 2
Output: [[2,2,2],[2,2,0],[2,0,1]]
*/