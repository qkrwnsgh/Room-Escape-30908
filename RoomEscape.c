#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

int Findbucket = FALSE;
int FindHammer = FALSE;
int Findknife = FALSE;
int Findredkey = FALSE; // ������ ����
int Brokenstatue = FALSE; //���� �ļտ���
int Findofficekey = FALSE; //�繫�� ����
int Openoffice = FALSE; // �繫�� ���¿��� 
int Findguestroomkey = FALSE; //�մԹ� ����



// 1��
void livingroom();//�Ž�
void dressroom();//�ʹ�
void bedroom();//�ȹ�
void stairs();//1�� ���
void door();//����
void kitchen();//�ֹ�
void attic();//�ٶ���

// 2��
void corridor(); // ����
void library(); // ����
void office(); // �繫��
void guestroom(); //�մԹ�
void washroom(); // ȭ���
void statue(); // ����
void steps();// 2�� ���
void book(); // å��
void vault(); //�ݰ�



//������
void error(){
  printf("�Է¿���");
  system("PAUSE");
}



int main(void) {
  int menu;
  while(1) {
		printf("ROOM ESCAPE VER 1.0\n\n");
		printf("1. ����\n");
		printf("0. ����\n");
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
		printf("[1�� �Ž�]\n\n");
    	printf("�Žǿ��� �� �� �ִ� �͵��� ã�ƺ���.\n\n");
    	printf("1. �̵��ϱ�\n2. �ѷ�����\n");
    	printf(">> ");
    	scanf("%d",&menu);
		
		switch(menu){
			case 1:
				while(1){
					printf("1. �ȹ�\n2. �ֹ�\n3.���\n\n");
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
							printf("�Է¿���");
								}
						}
			case 2:
				while(1){
					printf("1. ������\n2. ī��\n3.�ð�\n4.������\n\n");
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
  printf("[2�� ���]\n\n");
  printf("������ �̵��Ͻðڽ��ϱ�? \n\n");
  printf("1. �̵��ϱ� 2. 1������ ��������");

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
    printf("[2�� ����]\n\n");
    printf("�������� �� �� �ִ� �͵��� ã�ƺ���.\n\n");
    printf("1.�̵��ϱ� 2.���� �ѷ�����");

    printf(">>");
    scanf("%d", &menu);

    switch(menu) {
      case 1: 
      while(1) {
        system("cls");
        printf("[2�� ����]\n\n");
        printf("���� 3�����ִ� ���� ������?\n\n");
        printf("1.���� 2.�繫�� 3.�մԹ� 4.ȭ���");
        
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
              printf("\n�湮�� ���ȴ�.\n\n");
              office();
              system("pause");
            }
            printf("\n ���谡 �����ϴ�.\n\n");
            corridor();
            system("pause");
          }
          case 3:
          if(Findguestroomkey) {
            printf("\n�湮�� ���ȴ�.\n\n");
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
  printf("[2�� ����]--[����]\n\n");
  printf("����� �Ͻðڽ��ϱ�? \n\n");
  printf("1. �ѷ����� 2. �ı��ϱ� 3.���ư���");

  printf(">>");
  scanf("%d",&menu);
  switch(menu){
    case 1:
              if(Brokenstatue) {
                printf("\n������ �̹� �ν����ִ�. \n\n");
                printf("���̻� �������� ����δ�.\n");
                system("pause");
                statue();
                
              } else {
              	printf("\n �̰� �Ǽ����� �νö��??\n\n");
              	system("pause");
              	statue();
			  }
    case 2:
              if(FindHammer) {
                Findredkey = TRUE;
                Brokenstatue = TRUE;
                printf("\n�ν��� ����ȿ��� ���踦 ã�Ҵ�.\n");
                printf("\n��� ���̴� ������...?\n");		
                system("pause");
              	statue();
              } else {
                printf("\n������ ���ſ��� ����� ������ ����.\n\n");
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

      //���� 
    void library() {
      int menu;
      while(1) {
        system("cls");
        printf("\n[2�� ����]--[����]\n\n");
        printf("\n���翡�� �� �غ���??\n\n");
        printf("1.å�� ���캸�� 2.�ѷ�����");

        printf(">>");
        scanf("%d",&menu);
        switch(menu){
          case 1:
            void book();
            break;

          case 2:
            printf("\n�����ʿ� �ݰ� ���δ�\n\n");
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
        printf("\n[2�� ����]--[����]--[å��]\n\n");
        printf("\nå�忡�� �������ұ�?\n\n");
        pritnf("1.")
      }
    }
    void vault(){
      int menu(1) {
        while(1) {
          system("cls");
          printf("\n[2�� ����]--[����]--[�ݰ�]\n\n");
          printf("\n�ݰ� ��й�ȣ�� ����??\n\n");
          printf("1.�μ��� 2.��й�ȣ�� �Է��Ѵ�. 3.�����ɾ��. 4.����� ���ư���.");

          printf(">>");
          scanf("%d",&menu);
          switch(menu){
            case 1: 
            printf("\n�μ��⿣ �ʹ� �ܴ��ϴ�.\n\n");
            system("pause");
            void vault();

            case 2:
            

            case 3:
            printf("\n�ʹ� ���������־ �׷��� ��� ���ƾ�����...\n\n"");
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

