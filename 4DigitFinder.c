#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include<time.h>
#include<ctype.h>
#include <time.h>
#include <windows.h>
#include <process.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define BORDER 219
#define ESC 57
#define PR 2

#define SIZE 4
#define TRY 20

/*
	developer Vatsal Jagani
	Game 4-digit Finder.....
	language : C
		without using graphics..
*/

int y=3;
int score=TRY;
int original;
int Soriginal[SIZE];

void starting();
void wait();
void waitL(int);
void vname();
int Display(int);
void print_ever();
void ending();
void record();
void gotoxy(int x,int y);
void Instruction();
void Thanks();
void Starting_Random();





void starting()
{
    int i;
    char s1[]="WEL - COME TO PLAY THE NEW GAME";
    char s2[]="4-DIGIT finder";
    char s3[]="THIS GAME IS DENOTED TO   MY Great FATHER";  //game denoted to person's details



    waitL(2);

    printf("\n\n\n\n\n\n\n\t\t\t\t");
    printer(s1);
    waitL(2);
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t");
    printer(s2);
    while(!kbhit());

    vname();

    waitL(1);
    printf("\n\n\n\n\t\t");
    waitL(1);
    printer(s3);
    waitL(100);

    Thanks();



    Instruction();

}

void gotoxy(int x, int y)
{

 COORD coord;

 coord.X = x;

 coord.Y = y;

 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}


void Instruction()
{

    system("cls");
    printf("\n\n\n\t\t\tINSTRUCTION\n\n\n");
    printf("-> Computer has decide 4 digit No @@@@\n\n");
    printf("-> You have to enter 4 digit no and computer gives you output shown below\n\t\tFor Ex.\n\t\t\tcomputer decide 5684\n\t\t\tAnd you enter 1234\n\t\t\tAnd output will be 1F 0H\n\tF means FULL, No. of digitss is same as entered with position\n\tH means HALF, No.of digitss same as entered no. with different position\n\n");
    printf("-> You have maximum 20 try to solve this puzzle\n\tIf output is 4F it means whole no is same And you WIN...!!!!!\n\n\nFOR ANY QUERY contact : jaganivatsal@gmail.com \n");

    while(!kbhit());
}

void Thanks()
{
    char t[]="THANKS";
    char t1[]="Thanks to GOD for giving me proper inspiration.....";
    char t2[]="Thanks to my PARENTS whom wonderful bless always with me.....";
    char t3[]="Special thanks to Haresh Karena and Sanjay Gajjar and other friends";


    system("cls");

    printf("\n\n\t\t\t\t\t");
    printer(t);
    waitL(1);
    printf("\n\n\n\n\t");
    printer(t1);
    printf("\n\n\t");
    printer(t2);
    printf("\n\n\t");
    printer(t3);
    printf("\n\n\t");

    waitL(150);

}

void wait()
{
    int i;
    for(i=0;i<4000000;i++);
}
void waitL(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        wait();
    }
}

void vname()
{
    int i=1;
    system("cls");
    system("color F");
    printf("\n\n\n\n\n\n   %c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();
    printf("\n");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();
    printf("\n");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();
    printf("\n");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();
    printf("\n");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();
    printf("\n");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf(" ");wait();printf(" ");wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c",PR);wait();printf("%c\n\n");wait();
    getch();
    waitL(4);
}

printer(char s[])
{
    int i=0;
    while(s[i]!='\0')
    {
        printf("%c",s[i]);
        wait();
        i++;
    }
}

int Display(int no)
{
    int f=0,h=0,i,j,new_no;
    int alreadyI[SIZE]={0,0,0,0};
    int alreadyJ[SIZE]={0,0,0,0};
    int temp[SIZE];


    gotoxy(0,y+1);
    printf("%d",no);


    gotoxy(10,y+1);
    if(no==original)
    {
        printf("4F");
        waitL(45);
        return(1);
    }
    if(score<=0)
    {
        return(0);
    }
    for(i=0;i<SIZE;i++)
    {
        temp[i]=no%10;
        no/=10;
    }

    for(i=0;i<SIZE;i++)
    {
        if(temp[i]==Soriginal[i])
        {
            f++;
            alreadyI[i]=1;
            alreadyJ[i]=1;
        }
    }

    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            if(alreadyJ[j]==1 || alreadyI[i]==1)
            {
                continue;
            }
            if(temp[j]==Soriginal[i])
            {
                h++;
                alreadyJ[j]=1;
                alreadyI[i]=1;
            }
        }
    }





    printf("%dF  %dH",f,h);

    score--;
    y++;

    /* for changing score every time */

    gotoxy(72,1);
    printf("%02d",score);


}
void print_once()
{
    system("cls");

    printf("\t\t\t4-DIGIT FINDER");
    printf("\n\tComputer decided value is %c %c %c %c\t\t\tSCORE : %02d",177,177,177,177,score);
    printf("\n\n\tYour try...");
    gotoxy(30,22);
    printf("Enter your new value : ");
}

void ending()
{
    /*here print prev high score and current score from file */
   // getch();
    record();
}

void record(){
   char plname[20],nplname[20],cha,c;
   int i,j;
   FILE *info;
   info=fopen("record4digit.txt","a+");    // change the file name according to game name
 //  getch();
   system("cls");
   printf("Enter your name\n");
   scanf("%s",plname);   // %[^\n]
   //************************
   for(j=0;plname[j]!='\0';j++){ //to convert the first letter after space to capital
   nplname[0]=toupper(plname[0]);
   if(plname[j-1]==' '){
   nplname[j]=toupper(plname[j]);
   nplname[j-1]=plname[j-1];}
   else nplname[j]=plname[j];
   }
   nplname[j]='\0';
   //*****************************
   //sdfprintf(info,"\t\t\tPlayers List\n");
   fprintf(info,"Player Name :%s\n",nplname);
    //for date and time

   time_t mytime;
  mytime = time(NULL);
  fprintf(info,"Played Date:%s",ctime(&mytime));
     //**************************
     fprintf(info,"Score:%d\n",score);//call score to display score
     //fprintf(info,"\nLevel:%d\n",10);//call level to display level
   for(i=0;i<=50;i++)
   fprintf(info,"%c",'_');
   fprintf(info,"\n");
   fclose(info);
   printf("wanna see past records press 'y'\n");
   cha=getch();
   system("cls");
   if(cha=='y'){
   info=fopen("record4digit.txt","r");
   do{
       putchar(c=getc(info));
       }while(c!=EOF);}
     fclose(info);
     printf("\n\n\n\t\t\t\tPRESS ANY KEY TO EXIT\n");
     while(!kbhit());
    system("attrib +h +s record4digit.txt");
}

void Starting_Random()
{
    int i,no;
    srand(time(NULL));
    original=(rand()%9000)+1000;
    no=original;
    for(i=0;i<SIZE;i++)
    {
        Soriginal[i]=no%10;
        no/=10;
    }
    print_once();
}

main()
{
    int temp,new_no;
    char s[]="THANKS TO PLAY AND GOOD LUCK FOR NEXT TIME ";

    starting();
    Starting_Random();

    do{
        gotoxy(53,22);
        scanf("%d",&new_no);
        if(new_no==828725)
        {
            gotoxy(60,1);
            printf("%d",original);
        }
        gotoxy(53,22);
        printf("            ");
        if(new_no>=1000 && new_no<10000)
        {
            temp=Display(new_no);
        }

        if(temp==1)
        {
   //         system("cls");
            gotoxy(45,8);
            printf("YOU FOUND THAT NO");
            gotoxy(45,10);
            printf("YOU WIN");
            gotoxy(45,12);
            printf("YOUR SCORE is  : %02d",score);
            while(!kbhit());
            ending();
            break;
        }
        if(temp==0)
        {
            //system("cls");
            gotoxy(45,8);
            printf("SORRY YOU DON'T FOUND NO.");
            gotoxy(45,10);
            printf("The no is  : %d",original);
            while(!kbhit());
            break;
        }

        if(score>=15)
        {
            gotoxy(0,23);
            printf("                        Enter value between 1000 to 9999");
        }

    }while(score>=0);

    system("cls");
    printf("\n\n\n\n\t");

    printer(s);
    waitL(30);
}
