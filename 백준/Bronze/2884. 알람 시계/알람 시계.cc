#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int H,M;
    
    scanf("%d %d", &H ,&M);
    
    if (H>0&&H<24) {
        if(M>0&&M<60){
            if(M<45){
                --H;
                printf("%d ",H);
                printf("%d\n",M%60+15);
                
            }else{
                M = M -45;
                printf("%d ",H);
                printf("%d\n",M);
            }
            
            
            
        }

    }else if(H==0&&M<45){
        printf("%d ",H+23);
        printf("%d\n",M%60+15);
    }else{
        H = 0;
        M = M-45;
        printf("%d ",H);
        printf("%d\n",M);
    }
    


};

