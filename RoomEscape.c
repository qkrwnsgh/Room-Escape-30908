#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

int Findbucket = FALSE;
int FindHammer = FALSE;
int Findknife = FALSE;
int Findredkey = FALSE; // 서랍장 열쇠
int Brokenstatue = FALSE; //석상 파손여부
int Findofficekey = FALSE; //사무실 열쇠
int Openoffice = FALSE; // 사무실 오픈여부 
int Findguestroomkey = FALSE; //손님방 열쇠



// 1층
void livingroom();//거실
void dressroom();//옷방
void bedroom();//안방
void stairs();//1층 계단
void door();//현관
void kitchen();//주방
void attic();//다락방

// 2층
void corridor(); // 복도
void library(); // 서재
void office(); // 사무실
void guestroom(); //손님방
void washroom(); // 화장실
void statue(); // 석상
void steps();// 2층 계단
void book(); // 책장
void vault(); //금고



//오류문
void error(){
  printf("입력오류");
  system("PAUSE");
}



int main(void) {
  int menu;
  while(1) {
		printf("ROOM ESCAPE VER 1.0\n\n");
		printf("1. 입장\n");
		printf("0. 종료\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				livingroom();
				break;
			case 0:
				return 0;
			default:
				error();
				break;
    }
  }
}




void livingroom(){
	int menu;
	while(1){
		printf("[1층 거실]\n\n");
    	printf("거실에서 할 수 있는 것들을 찾아보자.\n\n");
    	printf("1. 이동하기\n2. 둘러보기\n");
    	printf(">> ");
    	scanf("%d",&menu);
		
		switch(menu){
			case 1:
				while(1){
					printf("1. 안방\n2. 주방\n3.계단\n\n");
      				scanf("%d",&menu);
      				printf(">> ");

					switch(menu){
						case 1:
							bedroom();
							break;
						case 2:
							kitchen();
							break;
						case 3:
							stairs();
							break;
						default:
							printf("입력오류");
								}
						}
			case 2:
				while(1){
					printf("1. 벽난로\n2. 카펫\n3.시계\n4.수납장\n\n");
					scanf("%d",&menu);
      				printf(">> ");
      				
      				switch(menu){
      					case 1:
      						Fireplace();
      						break;
      					case 2:
      						Carpet();
      						break;
      					case 3:
      						Clock();
      						break;
      					case 4:
      						Drawer();
      						break;
      					default:
      						error();
      						
					  }
				}
					break;
				default:
					error();
			}
	}


}

void fireplace(){
  switch 
}




void steps(){
int menu;
while(1) {
  system("cls");
  printf("[2층 계단]\n\n");
  printf("복도로 이동하시겠습니까? \n\n");
  printf("1. 이동하기 2. 1층으로 내려가기");

  printf(">>");
  scanf("%d",&menu);

  switch(menu) {
    case 1: 
      corridor();
      break;

    case 2: 
      stairs();
      break;

    default:
      error();
      break;
    }
  }
}

void corridor(){
  int menu;
  while(1) {
    system("cls");
    printf("[2층 복도]\n\n");
    printf("복도에서 할 수 있는 것들을 찾아보자.\n\n");
    printf("1.이동하기 2.석상 둘러보기");

    printf(">>");
    scanf("%d", &menu);

    switch(menu) {
      case 1: 
      while(1) {
        system("cls");
        printf("[2층 복도]\n\n");
        printf("방이 3개가있다 어디로 들어가볼까?\n\n");
        printf("1.서재 2.사무실 3.손님방 4.화장실");
        
        printf(">>");
        scanf("%d",&menu);

        switch(menu) {
          case 1: 
          library();
          break;

          case 2:
          office();
          break;
          while(1) {
            if(Findofficekey) {
              printf("\n방문이 열렸다.\n\n");
              office();
              system("pause");
            }
            printf("\n 열쇠가 없습니다.\n\n");
            corridor();
            system("pause");
          }
          case 3:
          if(Findguestroomkey) {
            printf("\n방문이 열렸다.\n\n");
            guestroom();
            system("pause");
          }
          case 4:
          washroom();
        }
      }
      case 2: 
      statue();
      break;

      default:
            error();
            system("pause");
              	corridor();
    }
  }
}
void statue() {
  int menu;
  while(1) {
  system("cls");
  printf("[2층 복도]--[석상]\n\n");
  printf("어느걸 하시겠습니까? \n\n");
  printf("1. 둘러보기 2. 파괴하기 3.돌아가기");

  printf(">>");
  scanf("%d",&menu);
  switch(menu){
    case 1:
              if(Brokenstatue) {
                printf("\n석상은 이미 부숴져있다. \n\n");
                printf("더이상 얻을것은 없어보인다.\n");
                system("pause");
                statue();
                
              } else {
              	printf("\n 이걸 맨손으로 부시라고??\n\n");
              	system("pause");
              	statue();
			  }
    case 2:
              if(FindHammer) {
                Findredkey = TRUE;
                Brokenstatue = TRUE;
                printf("\n부숴진 석상안에서 열쇠를 찾았다.\n");
                printf("\n어디에 쓰이는 열쇠지...?\n");		
                system("pause");
              	statue();
              } else {
                printf("\n석상이 무거워서 들수는 없을것 같다.\n\n");
                system("pause");
              	statue();
              }
    case 3:
            break;

   default:
            error();
            system("pause");
              	statue();
        }
      } 

      //서재 
    void library() {
      int menu;
      while(1) {
        system("cls");
        printf("\n[2층 복도]--[서재]\n\n");
        printf("\n서재에서 뭘 해볼까??\n\n");
        printf("1.책장 살펴보기 2.둘러보기");

        printf(">>");
        scanf("%d",&menu);
        switch(menu){
          case 1:
            void book();
            break;

          case 2:
            printf("\n구석쪽에 금고가 보인다\n\n");
            system("pause");
            void vault();

          default:
            error();
            system("pause");
              	library();
        }
      }
    }
    void book(){
      int menu;
      while(1) {
        system("cls");
        printf("\n[2층 복도]--[서재]--[책장]\n\n");
        printf("\n책장에서 무엇을할까?\n\n");
        pritnf("1.")
      }
    }
    void vault(){
      int menu(1) {
        while(1) {
          system("cls");
          printf("\n[2층 복도]--[서재]--[금고]\n\n");
          printf("\n금고에 비밀번호가 뭘까??\n\n");
          printf("1.부순다 2.비밀번호를 입력한다. 3.말을걸어본다. 4.서재로 돌아간다.");

          printf(">>");
          scanf("%d",&menu);
          switch(menu){
            case 1: 
            printf("\n부수기엔 너무 단단하다.\n\n");
            system("pause");
            void vault();

            case 2:
            

            case 3:
            printf("\n너무 오래갇혀있어서 그런지 잠시 미쳤었나봐...\n\n"");
            system("pause");
            void vault();

            case 4:
              void library();
              break;
          }
        }
      }
    }
}

