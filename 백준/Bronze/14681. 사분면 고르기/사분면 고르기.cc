#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float x,y;
    
    scanf("%f %f", &x ,&y);
    
    if (x>0) {
        if(y>0){
            printf("1\n");
        }else if (y<0){
            printf("4\n");
        }
        else{
            printf("1\n");
        }

    }
    
    if(x<0){
        if(y>0){
            printf("2\n");
        }else if (y<0){
            printf("3\n");
        }
        
    };

};

