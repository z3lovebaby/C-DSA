#include<stdio.h>
int main(){
  char per='%';
  char am[]="AM",pm[]="PM";
  char ver[]="____________";
  char empty[]="           ";
  char str[]="||||||||||||";
  //khai bao 1 so bien hay dung
  printf("\t%-25s%s\n","HA NOI","Change location");
  printf("\t%s\n\n","Vietnam");
  printf("\t%d\\%d, %s %s\n\n\n\n",10,15,"6:06",am);
  printf("\t%s %s\n","ICON MUA", "Showers");
  printf("\t%s\t%s\n\n","72*","70*");
  printf("\t%d%c%c\n\n",72,'*','F');
  printf("\t\t\t\t%s\n","Copyright by lucymagoo_image on FLICKR");
  printf(" %s%s%s%s%s%s\n",ver,ver,ver,ver,ver,ver);
  printf("| Forescast %s%s%s%s%s\t |\n|",empty,empty,empty,empty,empty);
  printf("%s%s%s%s%s%s|\n",ver,ver,ver,ver,ver,ver);
  printf("|__%s%s%s%s%s%s\t |\n|%s%s%s%s%s%s\t |\n|","Temperature",ver,empty,empty,empty,empty,empty,empty,empty,empty,empty,empty);
  printf("\t%d %s\t%d %s\t%d %s\t%d %s\t%d %s\t%d %s\t%d %s\t%d %s\t |\n",11,am,12,pm,1,pm,2,pm,3,pm,4,pm,5,pm,6,pm);
  printf("|\t %s\t %s\t %s\t %s\t %s\t %s\t %s\t %s\t |\n","Mua","Mua","Mua","Mua","Mua","Mua","Mua","Mua");
  printf("|\t %d%c \t %d%c \t %d%c \t %d%c \t %d%c \t %d%c \t %d%c \t %d%c\t |\n",72,'*',72,'*',72,'*',72,'*',72,'*',72,'*',72,'*',72,'*');
  printf("|%s%s%s%s%s%s|\n\n",ver,ver,ver,ver,ver,ver); 
  printf("||%s%s%s%s%s%s\n",str,str,str,str,str,str);
  printf(" %s%s%s%s%s%s\n",ver,ver,ver,ver,ver,ver);
  //printing form of next 5 days
  printf("| %-20s %-16s %d%c %12d%c \t%d%c\t |\n","Friday","Mua",70,per,72,'*',70,'*');
  printf("| %-20s %-16s %d%c %12d%c \t%d%c\t |\n","Saturday","Mua",70,per,72,'*',70,'*');
  printf("| %-20s %-16s %d%c %12d%c \t%d%c\t |\n","Sunday","Mua",70,per,72,'*',70,'*');
  printf("| %-20s %-16s %d%c %12d%c \t%d%c\t |\n","Monday","Mua",70,per,72,'*',70,'*');
  printf("| %-20s %-16s %d%c %12d%c \t%d%c\t |\n","Tuesday","Mua",70,per,72,'*',70,'*');
  printf("|%s%s%s%s%s%s|\n",ver,ver,ver,ver,ver,ver); 
}
