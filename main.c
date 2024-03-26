#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ch[10][130]={"Bus1","Bus2","Bus3","Bus3","Bus4"};
char name[32][100]={'\0'};
char number[32][2]={'\0'};
int num1[32]={0};
int trno;
void bus();
void name_number(int booking,char numstr[100]);
void booking();//for booking the tickets
int read_number(int trno);//for reading the number from the file
void read_name(int trno);//for reading the name from the file
void status();//for printing the status by user input
void status_1(int trno);//for printing the status while booking ticket
void cancle();

int main()
{

    int num,i;
    do{
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t    Reservation des bus");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   [1] Voir liste des bus\n\n");
    printf("   [2] Reserver des billets\n\n");
    printf("   [3] Annuler reservation\n\n");
    printf("   [4] Carte des bus\n\n");
    printf("   [5] Exit\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   ENTRER UN CHOIX: ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        bus();//list of bus
        break;
    case 2:
        booking();//booking the tickets
        break;
    case 3:
        cancle();
        break;
    case 4:
        status();
        break;
    }
getch();
    }while(num != 5);
    system("CLS");
    return 0;
}


void bus()
{
    system("cls");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  LIST  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n\n");
    printf("   [1]  =>  %s\n\n",ch[0]);
    printf("   [2]  =>  %s\n\n",ch[1]);
printf("   [3]  =>  %s\n\n",ch[2]);
printf("   [4]  =>  %s\n\n",ch[3]);
printf("   [5]  =>  %s\n\n",ch[4]);
}

void booking()
{

    int i=0;
    char numstr[100];
system("cls");
bus();
printf("   ENTER lE NUMERO DU BUS: ");
scanf("%d",&trno);
system("cls");
printf("VOUS AVEZ CHOISIS: %d ********** %s",trno,ch[trno-1]);
status_1(trno);
FILE *f1, *fopen();//for reading the seats from the user.
char str1[80]="32",str2[4],str3[4];
int seat1,seat2,booking=0;
if(trno == 1)
{
f1 = fopen("tr1.txt","r+");
fgets(str1,80,f1);
fclose(f1);
}else if(trno == 2)
{
f1 = fopen("tr2.txt","r+");
fgets(str1,80,f1);
fclose(f1);
}else if(trno == 3)
{
f1 = fopen("tr3.txt","r+");
fgets(str1,80,f1);
fclose(f1);
}
else if(trno == 4)
{
f1 = fopen("tr4.txt","r+");
fgets(str1,80,f1);
fclose(f1);
}
else if(trno == 5)
{
f1 = fopen("tr5.txt","r+");
fgets(str1,80,f1);
fclose(f1);
}
seat1=atoi(str1);//Cette fonction permet de transformer une chaîne de caractères, représentant une valeur entière, en une valeur numérique de type int. Le terme d'atoi est un acronyme signifiant : ASCII to integer.
if(seat1 <= 0)
{
printf("Il n'y a pas de siège vide dans ce bus ");
}else
{
printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
printf("\n   SIEGE DISPONIBLES: %d\n",seat1);
printf("\n   COMBIEN DE TICKET? : ");
scanf("%d",&booking);
printf("\n");

seat1=seat1-booking;
itoa(trno,numstr,10);//le contraire de atoi
name_number(booking,numstr);
printf("   Le montant total de la réservation est %d",200*booking);
itoa(seat1, str1, 10);
if(trno == 1)
{
f1 = fopen("tr1.txt","w");
fputs(str1,f1);
fclose(f1);
}
else if(trno == 2)
{
f1 = fopen("tr2.txt","w");
fputs(str1,f1);
  fclose(f1);
}
else if(trno == 3)
{
f1 = fopen("tr3.txt","w");
fputs(str1,f1);
  fclose(f1);
}
else if(trno == 4)
{
f1 = fopen("tr4.txt","w");
fputs(str1,f1);
  fclose(f1);
}
else if(trno == 5)
{
f1 = fopen("tr5.txt","w");
fputs(str1,f1);
fclose(f1);
}
}
}



void name_number(int booking,char numstr[100])
{
char tempstr[100],tempstr1[12]="status",tempstr2[12]="number";
int number;
    FILE *a,*b;
    int i=0;
   strcat(numstr,".txt");
   strcat(tempstr1,numstr);
   strcat(tempstr2,numstr);
   a = fopen(tempstr1,"a");
   b = fopen(tempstr2,"a");
for(i=0; i<booking; i++)
{
      printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd Entrer les details du ticket numero %d \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n",i+1);
      printf("   ENTRER LE NUMERO DE SIEGE: ");
      scanf("%d",&number);
      printf("\n   ENTRER LE NOM DE LA PERSONNE: ");
      scanf("%s",name[number-1]);
      printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
      printf("\n");
      itoa(number, tempstr, 10);
      fprintf(a,"%s ",name[number-1]);
      fprintf(b,"%s ",tempstr);

}
fclose(a);
fclose(b);
}



int read_number(int trno)//for putting the numeric value in the array
{
char tempstr[100],tempstr2[12]="number";
FILE *a,*b;
char numstr[100];
int i=0,j=0,k;
itoa(trno,numstr,10);
strcat(numstr,".txt");
strcat(tempstr2,numstr);
a = fopen(tempstr2,"a+");
   while(!feof(a))
   {
      number[i][j] = fgetc(a);

      if(number[i][j] == ' ')
      {
          j=0;
          i++;
      }
      else
      {
      j++;
      }
   }
   k=i;
   for(i=0; i<k; i++)
   {
       num1[i] = atoi(number[i]);
   }
   fclose(a);
   return k;
}


void read_name(int trno)
{
char tempstr1[12]="status";
FILE *b;
char numstr[100];
int i=0,j=0,k=0;
itoa(trno,numstr,10);
strcat(numstr,".txt");
strcat(tempstr1,numstr);
b = fopen(tempstr1,"a+");
   while(!feof(b))
   {
      name[i][j] = fgetc(b);

      if(name[i][j] == ' ')
      {
          j=0;
          i++;
      }
      else
      {
        j++;
      }

   }
   name[i][j]='\0';
   k=i;
   fclose(b);
}

void status()
{
system("cls");
    int i,trno,index=0,j;
    printf("   ENTER LE NUMERO DU BUS: ");
    scanf("%d",&trno);
    j=read_number(trno);
    read_name(trno);
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t   Bus No.%d: %s\n",trno,ch[trno-1]);
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    for(i=0; i<j; i++)
    {
        strcpy(tempname[num1[i]],name[i]);
    }
    for(i=0; i<8; i++)
    {
        printf("   ");
        for(j=0; j<4; j++)
            {
        printf("%d.%s\t",index+1,tempname[index+1]);
        index++;
            }
            printf("\n");
    }
}

void status_1(int trno)
{
    printf("Votre numero de bus est %d ********** %s",trno,ch[trno-1]);
    system("cls");
    int i,index=0,j;
    j=read_number(trno);
    read_name(trno);
    char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    for(i=0; i<j; i++)
    {
        strcpy(tempname[num1[i]],name[i]);
    }
    for(i=0; i<8; i++)
    {
        printf("   ");
        for(j=0; j<4; j++)
            {
        printf("%d.%s\t",index+1,tempname[index+1]);
        index++;
            }
            printf("\n");
}
}


void cancle()
{
int seat_no,i,j;
char numstr[100],tempstr2[15]="number",tempstr1[15]="status";
printf("\n   ENTRER LE NUMERO DE BUS: ");
scanf("%d",&trno);
itoa(trno,numstr,10);
strcat(numstr,".txt");
strcat(tempstr1,numstr);
strcat(tempstr2,numstr);
read_number(trno);
read_name(trno);
status_1(trno);
printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
printf("   ENTER THE SEAT NUMBER: ");
scanf("%d",&seat_no);
FILE *a,*b;
a = fopen(tempstr1,"w+");
b = fopen(tempstr2,"w+");
for(i=0; i<32; i++)
{
     if(num1[i] == seat_no)
     {
         for(j=0; j<32; j++)
         {
             if(num1[j] != seat_no && num1[j] != 0)
             {
                 fprintf(b,"%d ",num1[j]);
                 fprintf(a,"%s",name[j]);
             }
             else if(num1[j] == seat_no && num1[j] != 0)
             {
                 strcpy(name[j],"Empty ");
             }
         }
     }
}
fclose(a);
fclose(b);
printf("\n\n");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
printf("   Vos 200 ont été restitués\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
}