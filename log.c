#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
void mark_circle(int x,int y);
void mark_cross(int x,int y);
void ask_pos(int type);
void win(int type);
int check_line(int type);
int find_0(int x,int y);
int find_1(int x,int y);
int avail(int c_nox,int c_noy);


char pl1_name[50],pl2_name[50];
int rec_0[20][2],c_0=0;
int rec_1[20][2],c_1=0;


void main()
{   int i;
    int driver,mode;
    //char pl1_name[50],pl2_name[50];
    clrscr();
    gotoxy(10,10);
    printf("
   	   ENTER THE NAMES OF THE PLAYERS:");

    gotoxy(12,12);
    printf("
                        PLAYER 1:");
    gets(pl1_name);
    printf("
                        PLAYER 2:");
    gets(pl2_name);


    driver=DETECT;
    initgraph(&driver,&mode,"\tcc\bgi") ;

   setbkcolor(0);
   settextstyle(4, HORIZ_DIR, 3);
   outtextxy(500,1,"BY SOHAM");
   rectangle(5,5,628,405);

   setcolor(YELLOW);
   line(100,235-50,530,235-50);
   line(100,235+50,530,235+50);
   setcolor(10);
   line(315-80,100,315-80,380);
   line(315+80,100,315+80,380);

   settextstyle(0,0,2);
   setcolor(WHITE);
   outtextxy(315-160,60,"1");
   outtextxy(315,60,"2");
   outtextxy(315+160,60,"3");

   outtextxy(60,235-100,"1");
   outtextxy(60,235,"2");
   outtextxy(60,235+100,"3");

   i=0;
   while(1)
   {
    ask_pos(i%2);i++;
   }
getch();
return;
}

void mark_circle(int x,int y)
{
 setcolor(12);
 circle(x,y,20);
 circle(x,y,10);
 floodfill(x,y,12);
}

void mark_cross(int x,int y)
{
 setcolor(11);
 line(x-20,y-20,x+20,y+20);
 line(x-20,y+20,x+20,y-20);
}

void ask_pos(int type)
{int i,c_no,c_nox,c_noy;

 settextstyle(1,0,3);
 take:
 outtextxy(5,400,"STATUS-");

 if(type==0)
 {setcolor(0);outtextxy(100,400,pl2_name);
  setcolor(WHITE);outtextxy(100,400,pl1_name);}
  else
  {setcolor(0);outtextxy(100,400,pl1_name);
   setcolor(WHITE);outtextxy(100,400,pl2_name);}
   outtextxy(5,420,"ENTER POSITION(X,Y):");

   setcolor(0);
  for(i=0;i<300;i++)
   outtextxy(290+i,420,"[1,1]");
   setcolor(WHITE);
   c_nox=bioskey(0);
   c_noy=bioskey(0);

switch(type)
{case 0:{switch(c_nox)
      {case 561:  {c_nox=1;switch(c_noy)
		       {case 561:
{c_noy=1;outtextxy(290,420,"[1,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315-160,235-100);break;}
			case 818:
{c_noy=2;outtextxy(290,420,"[1,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315,235-100);    break;}
			case 1075:
{c_noy=3;outtextxy(290,420,"[1,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315+160,235-100);break;}

			case
20273:{c_noy=1;outtextxy(290,420,"[1,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315-160,235-100);break;}
			case
20530:{c_noy=2;outtextxy(290,420,"[1,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315,235-100);    break;}
			case
20787:{c_noy=3;outtextxy(290,420,"[1,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315+160,235-100);break;}
			default:{goto take;}
			}break;}
       case 818:  {c_nox=2;switch(c_noy)
		       {case 561:
{c_noy=1;outtextxy(290,420,"[2,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315-160,235);break;}
			case 818:
{c_noy=2;outtextxy(290,420,"[2,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315,235);break;}
			case 1075:
{c_noy=3;outtextxy(290,420,"[2,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315+160,235);break;}

			case
20273:{c_noy=1;outtextxy(290,420,"[2,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315-160,235);break;}
			case
20530:{c_noy=2;outtextxy(290,420,"[2,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315,235);break;}
			case
20787:{c_noy=3;outtextxy(290,420,"[2,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315+160,235);break;}
			default:{goto take;}
			}break;}
       case 1075: {c_nox=3;switch(c_noy)
		       {case 561:
{c_noy=1;outtextxy(290,420,"[3,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315-160,235+100);break;}
			case 818:
{c_noy=2;outtextxy(290,420,"[3,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315,235+100);break;}
			case 1075:
{c_noy=3;outtextxy(290,420,"[3,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315+160,235+100);break;}

			case
20273:{c_noy=1;outtextxy(290,420,"[3,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315-160,235+100);break;}
			case
20530:{c_noy=2;outtextxy(290,420,"[3,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315,235+100);break;}
			case
20787:{c_noy=3;outtextxy(290,420,"[3,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315+160,235+100);break;}
			default:{goto take;}
			}break;}
       case 20273:  {c_nox=1;switch(c_noy)
		       {case 561:
{c_noy=1;outtextxy(290,420,"[1,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315-160,235-100);break;}
			case 818:
{c_noy=2;outtextxy(290,420,"[1,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315,235-100);    break;}
			case 1075:
{c_noy=3;outtextxy(290,420,"[1,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315+160,235-100);break;}

			case
20273:{c_noy=1;outtextxy(290,420,"[1,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315-160,235-100);break;}
			case
20530:{c_noy=2;outtextxy(290,420,"[1,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315,235-100);    break;}
			case
20787:{c_noy=3;outtextxy(290,420,"[1,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315+160,235-100);break;}
			default:{goto take;}
			}break;}
       case 20530:  {c_nox=2;switch(c_noy)
		       {case 561:
{c_noy=1;outtextxy(290,420,"[2,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315-160,235);break;}
			case 818:
{c_noy=2;outtextxy(290,420,"[2,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315,235);break;}
			case 1075:
{c_noy=3;outtextxy(290,420,"[2,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315+160,235);break;}

			case
20273:{c_noy=1;outtextxy(290,420,"[2,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315-160,235);break;}
			case
20530:{c_noy=2;outtextxy(290,420,"[2,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315,235);break;}
			case
20787:{c_noy=3;outtextxy(290,420,"[2,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315+160,235);break;}
			default:{goto take;}
			}break;}
       case 20787: {c_nox=3;switch(c_noy)
		       {case 561:
{c_noy=1;outtextxy(290,420,"[3,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315-160,235+100);break;}
			case 818:
{c_noy=2;outtextxy(290,420,"[3,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315,235+100);break;}
			case 1075:
{c_noy=3;outtextxy(290,420,"[3,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315+160,235+100);break;}

			case
20273:{c_noy=1;outtextxy(290,420,"[3,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315-160,235+100);break;}
			case
20530:{c_noy=2;outtextxy(290,420,"[3,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315,235+100);break;}
			case
20787:{c_noy=3;outtextxy(290,420,"[3,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_circle(315+160,235+100);break;}
			default:{goto take;}
			}break;}
       case 283:{closegraph();break;}
		}
  break;}

 case 1:{switch(c_nox)
      {case 561:  {c_nox=1;switch(c_noy)
		       {case 561:
{c_noy=1;outtextxy(290,420,"[1,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315-160,235-100);break;}
			case 818:
{c_noy=2;outtextxy(290,420,"[1,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315,235-100);    break;}
			case 1075:
{c_noy=3;outtextxy(290,420,"[1,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315+160,235-100);break;}

			case
20273:{c_noy=1;outtextxy(290,420,"[1,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315-160,235-100);break;}
			case
20530:{c_noy=2;outtextxy(290,420,"[1,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315,235-100);    break;}
			case
20787:{c_noy=3;outtextxy(290,420,"[1,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315+160,235-100);break;}
			default:{goto take;}
			}break;}
       case 818:  {c_nox=2;switch(c_noy)
		       {case 561:
{c_noy=1;outtextxy(290,420,"[2,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315-160,235);break;}
			case 818:
{c_noy=2;outtextxy(290,420,"[2,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315,235);break;}
			case 1075:
{c_noy=3;outtextxy(290,420,"[2,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315+160,235);break;}

			case
20273:{c_noy=1;outtextxy(290,420,"[2,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315-160,235);break;}
			case
20530:{c_noy=2;outtextxy(290,420,"[2,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315,235);break;}
			case
20787:{c_noy=3;outtextxy(290,420,"[2,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315+160,235);break;}
			default:{goto take;}
			}break;}
       case 1075: {c_nox=3;switch(c_noy)
		       {case 561:
{c_noy=1;outtextxy(290,420,"[3,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315-160,235+100);break;}
			case 818:
{c_noy=2;outtextxy(290,420,"[3,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315,235+100);break;}
			case 1075:
{c_noy=3;outtextxy(290,420,"[3,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315+160,235+100);break;}

			case
20273:{c_noy=1;outtextxy(290,420,"[3,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315-160,235+100);break;}
			case
20530:{c_noy=2;outtextxy(290,420,"[3,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315,235+100);break;}
			case
20787:{c_noy=3;outtextxy(290,420,"[3,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315+160,235+100);break;}
			default:{goto take;}
			}break;}
       case 20273:  {c_nox=1;switch(c_noy)
		       {case 561:
{c_noy=1;outtextxy(290,420,"[1,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315-160,235-100);break;}
			case 818:
{c_noy=2;outtextxy(290,420,"[1,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315,235-100);    break;}
			case 1075:
{c_noy=3;outtextxy(290,420,"[1,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315+160,235-100);break;}

			case
20273:{c_noy=1;outtextxy(290,420,"[1,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315-160,235-100);break;}
			case
20530:{c_noy=2;outtextxy(290,420,"[1,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315,235-100);    break;}
			case
20787:{c_noy=3;outtextxy(290,420,"[1,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315+160,235-100);break;}
			default:{goto take;}
			}break;}
       case 20530:  {c_nox=2;switch(c_noy)
		       {case 561:
{c_noy=1;outtextxy(290,420,"[2,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315-160,235);break;}
			case 818:
{c_noy=2;outtextxy(290,420,"[2,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315,235);break;}
			case 1075:
{c_noy=3;outtextxy(290,420,"[2,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315+160,235);break;}

			case
20273:{c_noy=1;outtextxy(290,420,"[2,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315-160,235);break;}
			case
20530:{c_noy=2;outtextxy(290,420,"[2,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315,235);break;}
			case
20787:{c_noy=3;outtextxy(290,420,"[2,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315+160,235);break;}
			default:{goto take;}
			}break;}
       case 20787: {c_nox=3;switch(c_noy)
		       {case 561:
{c_noy=1;outtextxy(290,420,"[3,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315-160,235+100);break;}
			case 818:
{c_noy=2;outtextxy(290,420,"[3,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315,235+100);break;}
			case 1075:
{c_noy=3;outtextxy(290,420,"[3,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315+160,235+100);break;}

			case
20273:{c_noy=1;outtextxy(290,420,"[3,1]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315-160,235+100);break;}
			case
20530:{c_noy=2;outtextxy(290,420,"[3,2]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315,235+100);break;}
			case
20787:{c_noy=3;outtextxy(290,420,"[3,3]");if(avail(c_nox,c_noy)==0){goto
take;}mark_cross(315+160,235+100);break;}
			default:{goto take;}
			}break;}
	 case 283:{closegraph();break;}
   }
  }
 }
if(type==0)
{rec_0[c_0][0]=c_nox;
 rec_0[c_0][1]=c_noy;c_0++;
//printf("
%d %d",rec_0[c_0-1][0],rec_0[c_0-1][1]);
}
else
{rec_1[c_1][0]=c_nox;
 rec_1[c_1][1]=c_noy;c_1++;
//printf("
%d %d",rec_1[c_1-1][0],rec_1[c_1-1][1]);
}


delay(500);
check_line(0);
check_line(1);}

int check_line(int type)
{int b1=-1,b2=-1,b3=-1;
 if(type==0)
  {if(find_0(1,1)==0)
    if(find_0(1,2)==0)
     if(find_0(1,3)==0)
      setcolor(RED),line(315-160,235-100,315+160,235-100),win(0);//[1,1
1,3]

   if(find_0(1,1)==0)
    if(find_0(2,2)==0)
     if(find_0(3,3)==0)
      setcolor(RED),line(315-160,235-100,315+160,235+100),win(0);//[1,1
3,3]

   if(find_0(1,1)==0)
    if(find_0(2,1)==0)
     if(find_0(3,1)==0)
      setcolor(RED),line(315-160,235-100,315-160,235+100),win(0);//[1,1
1,3]

   if(find_0(2,1)==0)
    if(find_0(2,2)==0)
     if(find_0(2,3)==0)
      setcolor(RED),line(315-160,235,315+160,235),win(0);//[2,1  2,3]

   if(find_0(3,1)==0)
    if(find_0(2,2)==0)
     if(find_0(1,3)==0)
      setcolor(RED),line(315-160,235+100,315+160,235-100),win(0);//[3,1
1,3]

   if(find_0(3,1)==0)
    if(find_0(3,2)==0)
     if(find_0(3,3)==0)
      setcolor(RED),line(315-160,235+100,315+160,235+100),win(0);//[3,1
3,3]

   if(find_0(1,2)==0)
    if(find_0(2,2)==0)
     if(find_0(3,2)==0)
      setcolor(RED),line(315,235-100,315,235+100),win(0);//[1,2  3,2]

   if(find_0(1,3)==0)
    if(find_0(2,3)==0)
     if(find_0(3,3)==0)
      setcolor(RED),line(315+160,235-100,315+160,235+100),win(0);//[1,3
3,3]

 }
else
{if(find_1(1,1)==0)
    if(find_1(1,2)==0)
     if(find_1(1,3)==0)
      setcolor(RED),line(315-160,235-100,315+160,235-100),win(1);//[1,1
1,3]

   if(find_1(1,1)==0)
    if(find_1(2,2)==0)
     if(find_1(3,3)==0)
      setcolor(RED),line(315-160,235-100,315+160,235+100),win(1);//[1,1
3,3]

   if(find_1(1,1)==0)
    if(find_1(2,1)==0)
     if(find_1(3,1)==0)
      setcolor(RED),line(315-160,235-100,315-160,235+100),win(1);//[1,1
1,3]

   if(find_1(2,1)==0)
    if(find_1(2,2)==0)
     if(find_1(2,3)==0)
      setcolor(RED),line(315-160,235,315+160,235),win(1);//[2,1  2,3]

   if(find_1(3,1)==0)
    if(find_1(2,2)==0)
     if(find_1(1,3)==0)
      setcolor(RED),line(315-160,235+100,315+160,235-100),win(1);//[3,1
1,3]

   if(find_1(3,1)==0)
    if(find_1(3,2)==0)
     if(find_1(3,3)==0)
      setcolor(RED),line(315-160,235+100,315+160,235+100),win(1);//[3,1
3,3]

   if(find_1(1,2)==0)
    if(find_1(2,2)==0)
     if(find_1(3,2)==0)
      setcolor(RED),line(315,235-100,315,235+100),win(1);//[1,2  3,2]

   if(find_1(1,3)==0)
    if(find_1(2,3)==0)
     if(find_1(3,3)==0)
      setcolor(RED),line(315+160,235-100,315+160,235+100),win(1);//[1,3
3,3]
 }



setcolor(WHITE);
}

int find_0(int x,int y)
{int i;
 for(i=0;i<=c_0;i++)
  if(rec_0[i][0]==x&&rec_0[i][1]==y)
  return 0;

return -1;}


int find_1(int x,int y)
{int i;
 for(i=0;i<=c_1;i++)
  if(rec_1[i][0]==x&&rec_1[i][1]==y)
  return 0;

return -1;}


int avail(int c_nox,int c_noy)
{if(find_0(c_nox,c_noy)==0||find_1(c_nox,c_noy)==0)
 {return 0;}

return 1;}

void win(int type)
{int i;
 if(type==0)
 for(i=0;i<21;i++)

setcolor(i),delay(100),outtextxy(280,10,pl1_name),outtextxy(180,10,"WINNER
"),sound(266),delay(50),nosound();


 else
for(i=0;i<21;i++)setcolor(i),delay(100),outtextxy(280,10,pl2_name),outtext
xy(180,10,"WINNER"),sound(266),delay(50),nosound();

getch();
closegraph();}






/*
int finish()
{
 return 0
}
*/

/*settextstyle(1,0,3);
   outtextxy(0,400,"STATUS::");

   /*
   mark_circle(315-160,235-100);//{1,1}
   mark_circle(315,235-100);    //{1,2}
   mark_circle(315+160,235-100);//{1,3}

   mark_circle(315-160,235);    //{2,1}
   mark_circle(315,235);        //{2,2}
   mark_circle(315+160,235);    //{2,3}


   mark_circle(315-160,235+100);//{3,1}
   mark_circle(315,235+100);    //{3,2}
   mark_circle(315+160,235+100);//{3,3}
   */

   //line(315-160,235-100,315+160,235+100);//{3,3}