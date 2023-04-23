#include <stdio.h>

void Menu() {
    printf("|--------------------------|\n");
    printf("| 1. Nhap thong tin        |\n");
    printf("| 2. Tim kiem theo ID      |\n");
    printf("| 3. TNhap them question   |\n");
    printf("| 6. Thoat                 |\n");
    printf("|--------------------------|\n");
}

typedef struct {
    long ID; // Question ID
    int chapter; // Chapter (from 1 to 20)
    char content[50]; // Question content (containing space)
} Question;

Question Q[200];

int main() {
    int NQuestion = 0;
    
    int choose = -1;
    while (choose != 6) {
        Menu();
        printf("Nhap Lua chon: ");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            do {
                printf("Nhap So Cau Hoi: ");
                scanf("%d", &NQuestion);
                if (NQuestion < 1 || NQuestion > 100)
                    printf("Must be > 0 and <= 100\n");
            } while (NQuestion < 1 || NQuestion > 100);
            for (int i = 0; i < NQuestion; i++) {
                printf("Nhap thong tin cau hoi thu %d: \n", i);
                Q[i].ID = i + 1;
                printf("Chapter: ");
                scanf("%d", &Q[i].chapter);
                printf("Content: ");
                scanf("%s", &Q[i].content);
                printf("\n");
            }

            printf("         Thong tin\n");
            printf("    ID    Chap Content\n");
            for (int i = 0; i < NQuestion; i++) {
                printf("%5d %5d % 10s\n", Q[i].ID , Q[i].chapter, Q[i].content);
            }
            break;

        case 2:
            printf("Nhap ID can tin kiem: ");
            int id;
            scanf("%d", &id);
            int check = 0;
            for (int i = 0; i < NQuestion; i++) {
                if (id == Q[i].ID) {
                    printf("    ID    Chap Content\n");
                    printf("%5d %5d % 10s\n", Q[i].ID , Q[i].chapter, Q[i].content);
                    check = 1;
                }
            }

            if (check == 0) 
                printf("ID not found\n");
            break;

        case 3:
            printf("Nhap cau hoi thu: %d\n", NQuestion);
                Q[NQuestion].ID = NQuestion + 1;
                printf("Chapter: ");
                scanf("%d", &Q[NQuestion].chapter);
                printf("Content: ");
                scanf("%s", &Q[NQuestion].content);
                printf("\n");
                NQuestion++;
                
            printf("         Thong tin\n");
            printf("    ID    Chap Content\n");
            for (int i = 0; i < NQuestion; i++) {
                printf("%5d %5d % 10s\n", Q[i].ID , Q[i].chapter, Q[i].content);
            }
            printf("\n\n");
            break;
        default:
            break;
        }
    }
    printf("Thanks");
}