#include<stdio.h>
#include<math.h>
int main(){
    int r;
    scanf("%d",&r);
    int w = r;
    int i = 1;
    int n = r/2;
    for(i;i<=n;i++){
        int j = 1;
        int s = r/2;
        for(j;j<=s-i;j++){
            printf("  ");
        }
        for(int o = 1; o<=i;o++){
            printf(" *  ");
        }
        int t = r/2;
        int q = 1;
        for (q;q<=s-i;q++){
            printf("    ");
        }
        for(int o = 1;o<=i;o++){
            printf(" *  ");
        }
        printf("\n");
    }
    printf(" ");
    int rows = r-1;
    int u, j, space;
    for (u = rows; u >= 1; --u) {
        for (space = 0; space < rows - u; ++space){
            printf("  ");}
        for (j = u; j <= 2 * u - 1; ++j){
            printf(" *   ");}
        printf("\n");
   }

}


