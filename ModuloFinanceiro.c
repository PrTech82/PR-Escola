#include "main.h"


  typedef struct
  {
  int id;
  int mes;
  int valor;
  char nome[50];
  char curso[50];
  char status[50];
  }Registro; Registro RG;

void menu();
void financeiro();
void listar();
void listar2();
void alterar();
void excluir ();
void relatorio();
void gotoxy();
void login();




void ModuloFinanceiro()
{
 system ("cls");
    int op,c,l;

gotoxy(0,0);printf("%c",201);
gotoxy(118,0);printf("%c",187);
gotoxy(0,27);printf("%c",200);
gotoxy(118,27);printf("%c",188);
for(c=1;c<=117;c++)
   {gotoxy(c,0);
   putchar(205);
   gotoxy(c,27);
   putchar(205);}
for(l=1;l<=26;l++)
   {gotoxy(0,l);
   putchar(186);
   gotoxy(118,l);
   putchar(186);}



  gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("      ESCOLA PR-TECH   ");gotoxy(62,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);  printf("    *** FINANCEIRO ***");gotoxy(62,4);putchar(186);gotoxy(118,6);printf("%c",186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,6);putchar(186);  printf("[1] - REGISTRO FINANCEIRO");gotoxy(62,6);putchar(186);
gotoxy(35,7);putchar(186);  printf("[2] - LISTAR REGISTROS");gotoxy(62,7);putchar(186);
gotoxy(35,8);putchar(186);  printf("[3] - ALTERAR REGISTROS");gotoxy(62,8);putchar(186);
gotoxy(35,9);putchar(186);  printf("[4] - EXCLUIR REGISTROS");gotoxy(62,9);putchar(186);
gotoxy(35,10);putchar(186); printf("[5] - MENU PRINCIPAL");gotoxy(62,10);putchar(186);
gotoxy(35,11);putchar(186); printf("[6] - FECHAR PROGRAMA");gotoxy(62,11);putchar(186);
gotoxy(35,12);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
gotoxy(36,13);printf("ESCOLHA UMA OPCAO: ");scanf("%d",&op);
        getchar();
        switch(op)

          {
            case 1:
            financeiro();
                break;
            case 2:
                listar();
                break;
            case 3:
                 alterar();
                break;
            case 4:
                excluir();
                break;

            case 5:
                login();
                break;
            case 6:
              printf("\n\n\t\t\t\tOBRIGADO POR UTILIZAR NOSSO SISTEMA :)");
            printf("\n\n\t\t\t\t");
            system("pause");

        exit(0);printf("\n\n\n\n\n\n\n");
                break;
            default:
                printf("OPCAO INVALIDA - TENTE NOVAMENTE\n");
                system("pause");
                fflush(stdin);
                ModuloFinanceiro();
        }
        getchar();

while(op!=0);
}

void financeiro (){
  system("cls");
  int c,l;
gotoxy(0,0);printf("%c",201);
gotoxy(118,0);printf("%c",187);
gotoxy(0,27);printf("%c",200);
gotoxy(118,27);printf("%c",188);
for(c=1;c<=117;c++)
   {gotoxy(c,0);
   putchar(205);
   gotoxy(c,27);
   putchar(205);}
for(l=1;l<=26;l++)
   {gotoxy(0,l);
   putchar(186);
   gotoxy(118,l);
   putchar(186);}

    struct RG;
    FILE *file;
    file = fopen("registros.dat", "ab");
    if(file){

gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("    ESCOLA PR - TECH   ");gotoxy(64,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("** CADASTRO FINANCEIRO **");gotoxy(64,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);


gotoxy(35,6);printf("ID-ALUNO: ");scanf("%d", &RG.id);
gotoxy(35,7);printf("NOME: ");scanf("%s", RG.nome);
gotoxy(35,8);printf("CURSO: ");scanf("%s", RG.curso);
gotoxy(35,9);printf("STATUS: ");scanf("%s", RG.status);
gotoxy(35,10);printf("MES: ");scanf("%d",&RG.mes);
gotoxy(35,11);printf("VALOR: ");scanf("%d",&RG.valor);


        fwrite(&RG, sizeof(Registro), 1, file);
        fclose(file);
gotoxy(35,15);printf("USUARIO CADASTRADO COM SUCESSO\n");

            printf("\n\n\t\t\t\t");
             system("pause");
    }
    else
        printf("\nErro ao abrir arquivo!\n");

ModuloFinanceiro();


}
void listar () {
    system("cls");
    int c,l;



    int i = 0;
    FILE *file;
    file = fopen("registros.dat", "rb");

    if (file){
        while(!feof(file))
        {
        if(fread(&RG, sizeof(Registro), 1, file));

gotoxy(0,0);printf("%c",201);
gotoxy(118,0);printf("%c",187);
gotoxy(0,27);printf("%c",200);
gotoxy(118,27);printf("%c",188);
for(c=1;c<=117;c++)
   {gotoxy(c,0);
   putchar(205);
   gotoxy(c,27);
   putchar(205);}
for(l=1;l<=26;l++)
   {gotoxy(0,l);
   putchar(186);
   gotoxy(118,l);
   putchar(186);}



gotoxy(35,6);putchar(186);printf("                                               ");gotoxy(67,6);
gotoxy(35,7);putchar(186);printf("                                               ");gotoxy(67,7);
gotoxy(35,8);putchar(186);printf("                                               ");gotoxy(67,8);
gotoxy(35,9);putchar(186);printf("                                               ");gotoxy(67,9);
gotoxy(35,10);putchar(186);printf("                                              ");gotoxy(67,10);
gotoxy(35,11);putchar(186);printf("                                              ");gotoxy(67,11);


gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("       ESCOLA PR - TECH   ");gotoxy(64,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("   ** LISTA FINANCEIRA **");gotoxy(64,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,6);printf("%c",186);printf("ID-ALUNO:%d ",RG.id);gotoxy(64,6);printf("%c",186);
gotoxy(35,7);printf("%c",186);printf("NOME:%s ",RG.nome);gotoxy(64,7);printf("%c",186);
gotoxy(35,8);printf("%c",186);printf("CURSO:%s ", RG.curso);gotoxy(64,8);printf("%c",186);
gotoxy(35,9);printf("%c",186);printf("STATUS:%s ",RG.status);gotoxy(64,9);printf("%c",186);
gotoxy(35,10);printf("%c",186);printf("MES:%d ",RG.mes);gotoxy(64,10);printf("%c",186);
gotoxy(35,11);printf("%c",186);printf("VALOR:%d ",RG.valor);gotoxy(64,11);printf("%c",186);
gotoxy(35,12);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
i++;
getchar();

                }
gotoxy(39,15);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(39,16);printf("%c",186);printf("*** FIM DA LISTA ***");gotoxy(60,16);printf("%c",186);
gotoxy(39,17);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
gotoxy(39,21);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(39,22);printf("%c",186);printf("TOTAL DE ALUNOS: %d\n\n", i - 1); gotoxy(60,22);printf("%c",186);
gotoxy(39,23);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
printf("\n\n\t\t\t\t");
system("pause");

    fclose(file);}
    else{printf("Erro ao abrir arquivo!");}


ModuloFinanceiro();
}


void alterar(){
system("cls");




    FILE *file;
    file = fopen("registros.dat", "rb+");
    int id,c,l, i = 1;

    if(file){

gotoxy(0,0);printf("%c",201);
gotoxy(118,0);printf("%c",187);
gotoxy(0,27);printf("%c",200);
gotoxy(118,27);printf("%c",188);
for(c=1;c<=117;c++)
   {gotoxy(c,0);
   putchar(205);
   gotoxy(c,27);
   putchar(205);}
for(l=1;l<=26;l++)
   {gotoxy(0,l);
   putchar(186);
   gotoxy(118,l);
   putchar(186);}

gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("       ESCOLA PR - TECH   ");gotoxy(64,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf(" *ALTERAR LISTA FINANCEIRA*");gotoxy(64,4);putchar(186);



        while(fread(&RG, sizeof(Registro), 1, file)){
gotoxy(35,5);putchar(186);printf("                                               ");gotoxy(67,5);
gotoxy(35,6);putchar(186);printf("                                               ");gotoxy(67,6);
gotoxy(35,7);putchar(186);printf("                                               ");gotoxy(67,7);
gotoxy(35,8);putchar(186);printf("                                               ");gotoxy(67,8);
gotoxy(35,9);putchar(186);printf("                                               ");gotoxy(67,9);
gotoxy(35,10);putchar(186);printf("                                              ");gotoxy(67,10);
gotoxy(35,11);putchar(186);printf("                                              ");gotoxy(67,11);








gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,6);printf("%c",186);printf("ID-ALUNO:[%d] ",RG.id);gotoxy(64,6);printf("%c",186);
gotoxy(35,7);printf("%c",186);printf("NOME:%s ",RG.nome);gotoxy(64,7);printf("%c",186);
gotoxy(35,8);printf("%c",186);printf("CURSO:%s ", RG.curso);gotoxy(64,8);printf("%c",186);
gotoxy(35,9);printf("%c",186);printf("STATUS:%s ",RG.status);gotoxy(64,9);printf("%c",186);
gotoxy(35,10);printf("%c",186);printf("MES:%d ",RG.mes);gotoxy(64,10);printf("%c",186);
gotoxy(35,11);printf("%c",186);printf("VALOR:%d ",RG.valor);gotoxy(64,11);printf("%c",186);
gotoxy(35,12);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
i++;
getchar();

        }

  gotoxy(35,14);printf("DIGITE O ID QUE DESEJA ALTERAR: ");scanf("%d", &id);
        getchar();
        id--;

        if(id >= 0 && id < i - 1){

   gotoxy(35,16);printf("NOVO NOME:");fgets(RG.nome,50,stdin);fflush(stdin);
   gotoxy(35,17);printf("NOVO CURSO: ");fgets(RG.curso,50,stdin);
   gotoxy(35,18);printf("NOVO STATUS: ");fgets(RG.status,50,stdin);getchar();
   gotoxy(35,19);printf("NOVO MES: ");scanf("%d", &RG.mes);fflush(stdin);
   gotoxy(35,20);printf("NOVO VALOR: ");scanf("%d", &RG.valor);


            fseek(file,id *sizeof(Registro),SEEK_SET);
            fwrite(&RG, sizeof(Registro), 1, file);
    gotoxy(35,22);printf("REGISTRO ATUALIZADO COM SUCESSO\n");
            printf("\n\n\t\t\t\t");
        }
        fclose(file);
    }
    else{
        printf("Erro ao abrir arquivo!\n");}

        system("pause");

    ModuloFinanceiro();
}

void excluir() {
system("cls");
int c,l;
gotoxy(0,0);printf("%c",201);
gotoxy(118,0);printf("%c",187);
gotoxy(0,27);printf("%c",200);
gotoxy(118,27);printf("%c",188);
for(c=1;c<=117;c++)
   {gotoxy(c,0);
   putchar(205);
   gotoxy(c,27);
   putchar(205);}
for(l=1;l<=26;l++)
   {gotoxy(0,l);
   putchar(186);
   gotoxy(118,l);
   putchar(186);}


FILE *file;
FILE *temp;
    file = fopen("registros.dat", "rb");
    temp = fopen("temp.dat", "wb");
    if (file == NULL){printf("\nErro na abertura do arquivo.\n");}
    else{

    struct RG;
    int IDaluno;
    listar2();
 gotoxy(36,14);   printf("DIGITE O ID A SER REMOVIDO: ");
    scanf("%d", &IDaluno);
    getchar();

        while(fread(&RG, sizeof(Registro),1, file)==1)
            {
            if (IDaluno!=RG.id)
            {fwrite(&RG, sizeof(Registro),1, temp);
            }}}

            if(ferror(temp)){printf("Erro ao remover");}
            else{
                    gotoxy(35,18);printf("ALUNO REMOVIDO SUCESSO!\n");
                     printf("\n\n\t\t\t\t");

                    }

fclose(file);
fclose(temp);
remove ("registros.dat");
rename ("temp.dat","registros.dat");
system ("pause");
ModuloFinanceiro();

}


void listar2 () {
    system("cls");
    int c,l;
    FILE *file;
    file = fopen("registros.dat", "rb");

    if (file){
        while(!feof(file))
                   {
            if(fread(&RG, sizeof(Registro), 1, file));

gotoxy(0,0);printf("%c",201);
gotoxy(118,0);printf("%c",187);
gotoxy(0,27);printf("%c",200);
gotoxy(118,27);printf("%c",188);
for(c=1;c<=117;c++)
   {gotoxy(c,0);
   putchar(205);
   gotoxy(c,27);
   putchar(205);}
for(l=1;l<=26;l++)
   {gotoxy(0,l);
   putchar(186);
   gotoxy(118,l);
   putchar(186);}





gotoxy(35,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
gotoxy(35,2);putchar(186);  printf("       ESCOLA PR - TECH   ");gotoxy(64,2);putchar(186);
gotoxy(35,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
gotoxy(35,4);putchar(186);printf("   ** LISTA FINANCEIRA **");gotoxy(64,4);putchar(186);
gotoxy(35,5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);


gotoxy(35,6);putchar(186);printf("                                               ");gotoxy(67,6);
gotoxy(35,7);putchar(186);printf("                                               ");gotoxy(67,7);
gotoxy(35,8);putchar(186);printf("                                               ");gotoxy(67,8);
gotoxy(35,9);putchar(186);printf("                                               ");gotoxy(67,9);
gotoxy(35,10);putchar(186);printf("                                              ");gotoxy(67,10);
gotoxy(35,11);putchar(186);printf("                                              ");gotoxy(67,11);

gotoxy(35,6);printf("%c",186);printf("ID do aluno:%d ",RG.id);gotoxy(64,6);printf("%c",186);
gotoxy(35,7);printf("%c",186);printf("NOME:%s ",RG.nome);gotoxy(64,7);printf("%c",186);
gotoxy(35,8);printf("%c",186);printf("CURSO:%s ", RG.curso);gotoxy(64,8);printf("%c",186);
gotoxy(35,9);printf("%c",186);printf("STATUS:%s ", RG.status);gotoxy(64,9);printf("%c",186);
gotoxy(35,10);printf("%c",186);printf("MES:%d ",RG.mes);gotoxy(64,10);printf("%c",186);
gotoxy(35,11);printf("%c",186);printf("VALOR:%d ",RG.valor);gotoxy(64,11);printf("%c",186);
gotoxy(35,12);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
getchar();

                }


    fclose(file);}
    else{printf("Erro ao abrir arquivo!");}



}

