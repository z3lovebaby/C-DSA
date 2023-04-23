#include<stdio.h>
#include<strings.h>
#define maxSize 30
typedef struct
{
    char book_name[30],author_name[30],publisher[30];
    unsigned int year;
    float price;

}mngbook;
//
typedef struct
{
    unsigned int d,m,y;
}date;

void getdata(mngbook *a){
    printf("Book's name:");
    scanf("%[^\n]%*c",a->book_name);
    printf("Author's book: ");
    scanf("%[^\n]%*c",a->author_name);
    printf("Publisher: ");
    scanf("%[^\n]%*c",a->publisher);
    do{
        printf("Year when book was published: ");
        scanf("%d%*c",&a->year);
        if((a->year<0||a->year>2022)){
            printf("Must be >0 and <2023\n");
        }
    }while(a->year<0||a->year>2022);
    do{
        printf("Price: ");
        scanf("%f%*c",&a->price);
        if(a->price<0) printf("Must be not <0\n");
    }while(a->price<0);
    printf("Successfull ! Enter to continue.\n");
    while(getchar()!='\n');
}
//


//
int compare(date day1, date day2)
{
	if (day1.y < day2.y) return 1;
	else if (day1.y > day2.y) return -1;
	else 
	{
		if (day1.m < day2.m) return 1;
		else if (day1.m > day2.m) return -1;
		else 
		{
			if (day1.d < day2.d) return 1;
			else if (day1.d > day2.d) return -1;
			else return 0;
		} 
	}
}
//
int main(){
    mngbook book[maxSize],temp;
    int i,j,ch,n,check; 
    char title[30],name[30];
    do{
        printf("1. Enter in4 of n book of HUST.\n");
        printf("2. Print the in4 of the entered books on the screen.\n");
        printf("3. Sort des in4 by year publication and display.\n");
        printf("4. Search for book by title.\n");
        printf("5. Search books by author's name.\n");
        printf("6. Exist.\n");
        printf("======================================================\n");
        printf("Your choice: ");
        scanf("%d%*c",&ch);
        switch (ch){
            case 1:
                do{
                    printf("The number of book:\n");
                    scanf("%d%*c",&n);
                    if (n<0) printf("Must be >0\n");
                }while(n<0);
                for (i=0;i<n;i++){
                    getdata(&book[i]);
                }
            break;
            case 2:
                printf("LIST\n");
                printf("======================================================================================================\n");
                printf("|            %-10s             |             %-11s            |     %4s     |    %5s   |\n","Book name","Author name","Year","Price");
                for(i=0;i<n;i++){
                    printf("|   %-30s  |    %-30s  |  %-10d  |  %-10.2lf|\n",book[i].book_name,book[i].author_name,book[i].year,book[i].price);
                }
                printf("======================================================================================================\n");
                printf("Enter to continue.....");
                while(getchar()!='\n');
            break;
            case 3:
                for(i=0;i<n-1;i++){
                    for (j=i+1;j<n;j++){
                        if (book[i].year<book[j].year){
                            temp=book[i];
                            book[i]=book[j];
                            book[j]=temp;
                        }else if (book[i].year==book[j].year){
                            if(book[i].price<book[j].price){
                                temp=book[i];
                                book[i]=book[j];
                                book[j]=temp;
                            }
                        }
                    }
                }
                printf("AFTER SOORT DES BY YEAR<PRICE:\n");
                printf("======================================================================================================\n");
                printf("|            %-10s             |             %-11s            |     %4s     |    %5s   |\n","Book name","Author name","Year","Price");
                for(i=0;i<n;i++){
                    printf("|   %-30s  |    %-30s  |  %-10d  |  %-10.2lf|\n",book[i].book_name,book[i].author_name,book[i].year,book[i].price);
                }
                printf("======================================================================================================\n");
                printf("Enter to continue.....");
                while(getchar()!='\n');
            break;
            case 4:
            check=1;
                printf("Book title that you want to search: ");
                scanf("%[^\n]%*c",title);
                for (i=0;i<n;i++){
                    if ( strstr(book[i].book_name,title)){
                        check=0;
                        printf("%s , %s, %s \n",book[i].book_name,book[i].author_name,book[i].publisher);
                    }
                }
                if (check) printf("Not found.\n");
                printf("Enter to continue.....");
                while(getchar()!='\n');
            break;
            case 5:
                check=0;
                printf("Author's name that you want to search: ");
                scanf("%[^\n]%*c",name);
                for (i=0;i<n;i++){
                    if ( strstr(book[i].author_name,name)){
                        check++;
                        printf("%s , %s, %s \n",book[i].book_name,book[i].author_name,book[i].publisher);
                    }
                }
                if (!check) printf("Not found.\n");
                else printf("The number of accurences: %d.\n",check);
                printf("Enter to continue.....");
                while(getchar()!='\n');
            break;
            case 6:
                printf("Thank youuu! See youu!\n");
                printf("Enter to continue.....");
                while(getchar()!='\n');
            break;
            default:
                printf("Your choice does not exist. Must be 1-7\n");
                printf("Enter to continue.....");
                while(getchar()!='\n');
        }
    }while(ch!=6);

    return 0;
}