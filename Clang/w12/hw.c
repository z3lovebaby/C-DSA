#include<stdio.h>
void arena(float *a,float *b,char name[3][20],float *c){
    int m=0,n=0;
    float health1,health2;
    health1=*(a+3);
    health2=*(b+3);
    printf("%s VS %s\n\n",name[(int)*a],name[(int)*b]);
    if(*(a+1)>=*(b+1)){
       printf("%s attack FIRST (speed: %.2f)\n",name[(int)*a],*(a+1));
       m=1;
    }
    else{
        printf("%s attack FIRST (speed: %.2f)\n",name[(int)*b],*(b+1));
        n=1;
    }
    do{
        if(m==1){
            printf("%s attack =>> ",name[(int)*a]);
            health2=health2-*(a+2);
            printf("%s reduced %.2f health to %.2f health\n",name[(int)*b],*(a+2),health2);
            m=0;
            n=1;
            if(health2<=0){
                printf("!!%s KNOCKED OUT, %s WON !!\n",name[(int)*b],name[(int)*a]);
                for(int i=1;i<4;i++){
                   *(a+i)=*(a+i)*1.02;
                   *(b+i)=*(b+i)*1.01;
                   *(c+i)=*(c+i)*1.015;  }
            }}
        else if(n==1){
            printf("%s attack =>> ",name[(int)*b]);
            health1=health1-*(b+2);
            printf("%s reduced %.2f health to %.2f health\n",name[(int)*a],*(b+2),health1);
            m=1;
            n=0;
            if(health1<=0){
                printf("\n!!%s KNOCKED OUT, %s WON !!\n",name[(int)*a],name[(int)*b]);
                for(int i=1;i<4;i++){
                   *(a+i)=*(a+i)*1.01;
                   *(b+i)=*(b+i)*1.02;
                   *(c+i)=*(c+i)*1.015;  }
            }
        }
    }while((health1>0)&&(health2>0));
    printf("The indicators of 3 fighters after the fight:\n");
    printf("                      _______________________ \n");
    printf("                     |       |       |       |\n");
    printf("                     | Speed | Power | Health|\n");
    printf(" ____________________|_______|_______|_______| \n");
    printf("|                    |       |       |       |\n");
    printf("|%-20s|%-7.2f|%-7.2f|%-7.2f|\n",name[(int)*a],*(a+1),*(a+2),*(a+3));
    printf("|____________________|_______|_______|_______|\n");
    printf("|                    |       |       |       |\n");
    printf("|%-20s|%-7.2f|%-7.2f|%-7.2f|\n",name[(int)*b],*(b+1),*(b+2),*(b+3));
    printf("|____________________|_______|_______|_______|\n");
    printf("|                    |       |       |       |\n");
    printf("|%-20s|%-7.2f|%-7.2f|%-7.2f|\n",name[(int)*c],*(c+1),*(c+2),*(c+3));
    printf("|____________________|_______|_______|_______|\n");
    printf("*******************************************************\n");
    
}
void indicators(float *a,char name[3][20]){
    printf("Type the name of player %d:   ",(int)a[0]+1);
    scanf("%s",name[(int)*a]);
    while(1){
    printf("Type the speed of player %d:  ",(int)a[0]+1);
    scanf("%f%*c",a+1);
    if(*(a+1)>0){
        break;
    }
    else{printf("\nThe speed is error, type again!\n");}}
    while(1){
    printf("Type the power of player %d:  ",(int)a[0]+1);
    scanf("%f%*c",a+2);
    if(*(a+2)>0){
        break;
    }
    else{printf("\nThe power is error, type again!\n");}}
    while(1){
    printf("Type the health of player %d:  ",(int)a[0]+1);
    scanf("%f%*c",a+3);
    if(*(a+3)>0){
        break;
    }
    else{printf("\nThe health is error, type again!\n");}}
    printf("========================================================\n");

}
int main(){
    float a[4];
    float b[4];
    float c[4];
    a[0]=0;
    b[0]=1;
    c[0]=2;
    char name[3][20];
    printf("WELCOME TO NND GAME !!\n");
    printf("LET'S SEE THE RULES : \n");
    printf("There are 3 fighters, each of them has 3 indicators(speed,power, and health).\n");
    printf("3 fighter compete in a round robin format.There are 3 games, each game is a fight of 2 fighters.\n");
    printf("Who has higher speed will go first. \nAfter a fight turn, who is attacked will reduce an amount of health equal to exactly the damage of the attacker.\n");
    printf("Who has the health reduce less or equal to 0 will lose.\n");
    printf("After each game, the winner's indicators will increase for 2%%, the loser will increase for 1%%.\n");
    printf("And the remaining fighter of 3 fighters will increase the indicators for 1.5%%.\n");
    printf("LET'S START!!!!\n");
    printf("__________________________________________________________________________________\n");
    printf("__________________________________________________________________________________\n");

    indicators(a,name);
    indicators(b,name);
    indicators(c,name);
    printf("   GAME 1\n");
    arena(a,b,name,c);
    printf("   GAME 2\n");
    arena(b,c,name,a);
    printf("   GAME 3\n");
    arena(c,a,name,b);

}