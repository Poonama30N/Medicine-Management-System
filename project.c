#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void display1();
void search1();
void display11();
void fever();
void cold();
void display2();
void display22();
void burn();
void display3();
void display33();
void joint();
void display4();
void display44();
void diab();
void display5();
void display55();
void stomach();
void display6();
void display66();
void display();
void insert();
void search();
void update();
void delete1();
void intro();
void bill();
struct details
{
	int Sno;
	char name[50];
	char type[50];
	float rate;
	int quantity;
	int date;
	 
}fev,cou,bur,joi,dia,sto;


main()
{    
  intro();		
   }

void intro()
{system("color B");
    LOOP1:
  	system("cls");
  	LOOP2:
	printf("\n\n\t\t========================================================================\n");
	printf("\n\t\t\t\tWelcome to Medicine Management Sysytem");
	printf("\n\n\t\t========================================================================\n");
	
	int i,j,k;
	char ch;
	printf("\n\n\n\t\t\t\t\tEnter your choice:");
	printf("\n\n\t\t\t\t\t1.View Medicines\n\n\t\t\t\t\t2.Add Medicinal Record\n\n\t\t\t\t\t3.Delete Medicinal Record\n\n\t\t\t\t\t4.Search Medicines\n\n\t\t\t\t\t5.Update Medicinal Record\n\n\t\t\t\t\t6.Create Bill\n\n\t\t\t\t\t7.Exit\n\n\t\t\t\t\t");
	scanf("%d",&i);
	
   switch(i)
   {
   	case 1:
   	{ display();
   	break;
	}	
	case 2:
	{insert();
	break;
	}
	case 3:
	{delete1();
	break;	}
	case 4:
	{ search1();
	break;	}
	case 5:
	{ update();
	 break;	}
	case 6:
	{ bill();
	 break;	}
	case 7:
	{ exit(0);
	break;	}
	default:
	{ system("cls");
	printf("\t\t\t\t\tINVALID OPTION. TRY AGAIN...");
	goto LOOP2;
			}
}





}
void fever()
{   int i;
    FILE *p;
    p= fopen("fev.txt","a");
    system("cls");
    printf("\n\n");
	printf("Enter the Sno.:  ");
	scanf("%d",&fev.Sno);
	printf("Enter the name : ");
	scanf("%s",fev.name);
	printf("Enter the type of medicine : ");
	scanf("%s",fev.type);
	printf("Enter the rate of the medicine :  ");
	scanf("%f",&fev.rate);
    printf("Enter the units of the medicine : ");
    scanf("%d",&fev.quantity);
     printf("Enter the expiry date of the medicine : ");
    scanf("%d",&fev.date);

	fwrite(&fev,sizeof(fev),2,p);
	fclose(p);
	LOOPA:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue adding medicinal records : ");
		scanf("%d",&i);
		if(i==1)
		intro();
		else if(i==0)
		insert();
		else
		{printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPA;}
	
}
void display1()
{   
    int i;
	FILE *p;
	p= fopen("fev.txt","r+");
	system("cls");
	if(p==NULL)
	printf("error");
	else{printf("\n\n");
	printf("\n\t====================================================================================================\n");
	    printf("\t Sno.\tNAME\t\t\tTYPE\t\tRATE(in Rs)\tQUANTITY\t\tEXPIRY DATE");	
	    printf("\n\t=====================================================================================================\n");
	
		while(fread(&fev,sizeof(fev),2,p))
	    {       
	
	       if(stricmp(fev.type,"Tablet")==0)
	       {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%d tablets/strip\t %d years",fev.Sno,fev.name,fev.type,fev.rate,fev.quantity,fev.date);
			printf("\n");}
		
			else
	   {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%dml per bottle\t\t %d months",fev.Sno,fev.name,fev.type,fev.rate,fev.quantity,fev.date);
 	 		printf("\n");
		}
	    }
		fclose(p);
		LOOPo:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue viewing medicinal records : ");
		scanf("%d",&i);
		if(i==1)
		intro();
		else if(i==0)
		display();
		else
		{printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPo;}
}}
void display11()
{   
    int i;
	FILE *p;
	p= fopen("fev.txt","r+");
	system("cls");
	if(p==NULL)
	printf("error");
	else{printf("\n\n");
	printf("\n\t====================================================================================================\n");
	    printf("\t Sno.\tNAME\t\t\tTYPE\t\tRATE(in Rs)\tQUANTITY\t\tEXPIRY DATE");	
	    printf("\n\t=====================================================================================================\n");
	
		while(fread(&fev,sizeof(fev),2,p))
	    {       
	
	       if(stricmp(fev.type,"Tablet")==0)
	       {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%d tablets/strip\t %d years",fev.Sno,fev.name,fev.type,fev.rate,fev.quantity,fev.date);
			printf("\n");}
		
			else
	   {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%dml per bottle\t\t %d months",fev.Sno,fev.name,fev.type,fev.rate,fev.quantity,fev.date);
 	 		printf("\n");
		}
	    }
		fclose(p);
		}
}

void cold()
{    
    int i;
    FILE *f;
    f= fopen("cou.txt","a");
    system("cls");
    printf("\n\n");
	printf("Enter the Sno.:  ");
	scanf("%d",&cou.Sno);
	printf("Enter the name : ");
	scanf("%s",cou.name);
	printf("Enter the type of medicine : ");
	scanf("%s",cou.type);
	printf("Enter the rate of the medicine :  ");
	scanf("%f",&cou.rate);
    printf("Enter the units of the medicine : ");
    scanf("%d",&cou.quantity);
     printf("Enter the expiry date of the medicine : ");
    scanf("%d",&cou.date);

	fwrite(&cou,sizeof(cou),2,f);
	fclose(f);
	LOOPo:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue view medicines : ");
		scanf("%d",&i);
		if(i==1)
		intro();
		else if(i==0)
		display();
		else
		{printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPo;}
              }
              
 void display2()
{   int i;
	FILE *f;
	f= fopen("cou.txt","r+");
	system("cls");
	if(f==NULL)
	printf("error");

	else{printf("\n\n");
	printf("\n\t====================================================================================================\n");
	    printf("\t Sno.\tNAME\t\t\tTYPE\t\tRATE(in Rs)\tQUANTITY\t\tEXPIRY DATE");	
	    printf("\n\t=====================================================================================================\n");
	
		while(fread(&cou,sizeof(cou),2,f))
	    {       
	
	       if(stricmp(cou.type,"Tablet")==0)
	       {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%d tablets/strip\t %d years",cou.Sno,cou.name,cou.type,cou.rate,cou.quantity,cou.date);
			printf("\n");}
		
			else
	   {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%dml per bottle\t\t %d months",cou.Sno,cou.name,cou.type,cou.rate,cou.quantity,cou.date);
 	 		printf("\n");
		}
	    }
		fclose(f);
		LOOPX:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue view medicines : ");
		scanf("%d",&i);
		if(i==1)
		intro();
		else if(i==0)
		display();
		else
		{printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPX;}
         
        
}
} 
void display22()
{   int i;
	FILE *f;
	f= fopen("cou.txt","r+");
	system("cls");
	if(f==NULL)
	printf("error");

	else{printf("\n\n");
	printf("\n\t====================================================================================================\n");
	    printf("\t Sno.\tNAME\t\t\tTYPE\t\tRATE(in Rs)\tQUANTITY\t\tEXPIRY DATE");	
	    printf("\n\t=====================================================================================================\n");
	
		while(fread(&cou,sizeof(cou),2,f))
	    {       
	
	       if(stricmp(cou.type,"Tablet")==0)
	       {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%d tablets/strip\t %d years",cou.Sno,cou.name,cou.type,cou.rate,cou.quantity,cou.date);
			printf("\n");}
		
			else
	   {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%dml per bottle\t\t %d months",cou.Sno,cou.name,cou.type,cou.rate,cou.quantity,cou.date);
 	 		printf("\n");
		}
	    }
		fclose(f);
	}  }          
void burn()
{    
    int i;
    FILE *k;
    k= fopen("bur.txt","a");
    system("cls");
    printf("\n\n");
	printf("Enter the Sno.:  ");
	scanf("%d",&bur.Sno);
	printf("Enter the name : ");
	scanf("%s",bur.name);
	printf("Enter the type of medicine : ");
	scanf("%s",bur.type);
	printf("Enter the rate of the medicine :  ");
	scanf("%f",&bur.rate);
    printf("Enter the units of the medicine : ");
    scanf("%d",&bur.quantity);
     printf("Enter the expiry date of the medicine : ");
    scanf("%d",&bur.date);

	fwrite(&bur,sizeof(bur),2,k);
	fclose(k);
	    LOOPp:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue adding medicinal records : ");
		scanf("%d",&i);
		if(i==1)
		intro();
		else if(i==0)
		insert();
		else
		{printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPp;}
	
}

void display3()
{ int i;
	FILE *k;
	k= fopen("bur.txt","r+");
	system("cls");
	if(k==NULL)
	printf("error");
	
	else{printf("\n\n");
	printf("\n\t====================================================================================================\n");
	    printf("\t Sno.\tNAME\t\t\tTYPE\t\tRATE(in Rs)\tQUANTITY\t\tEXPIRY DATE");	
	    printf("\n\t=====================================================================================================\n");
	
		while(fread(&bur,sizeof(bur),2,k))
	    {       
	
	       if(stricmp(bur.type,"Tablet")==0)
	       {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%d tablets/strip\t %d years",bur.Sno,bur.name,bur.type,bur.rate,bur.quantity,bur.date);
			printf("\n");}
		
			else if(stricmp(bur.type,"gel")==0 )
	   {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%dml per tube\t\t %d months",bur.Sno,bur.name,bur.type,bur.rate,bur.quantity,bur.date);
 	 		printf("\n");
		}
			else if(stricmp(bur.type,"cream")==0 )
	   {
			 printf("\n");
			printf("\t %d\t%s\t\t\t%s\t\t%.2f\t\t%dml per tube\t\t %d months",bur.Sno,bur.name,bur.type,bur.rate,bur.quantity,bur.date);
 	 		printf("\n");
		}
		else{
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%dml per bottle\t %d years",bur.Sno,bur.name,bur.type,bur.rate,bur.quantity,bur.date);
 	 		printf("\n");
		}
	    }
		fclose(k);
		LOOPX:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue view medicines : ");
		scanf("%d",&i);
		if(i==1)
		intro();
		else if(i==0)
		display();
		else
		{printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPX;}
        
}
}             
void display33()
{ int i;
	FILE *k;
	k= fopen("bur.txt","r+");
	system("cls");
	if(k==NULL)
	printf("error");
	
	else{printf("\n\n");
	printf("\n\t====================================================================================================\n");
	    printf("\t Sno.\tNAME\t\t\tTYPE\t\tRATE(in Rs)\tQUANTITY\t\tEXPIRY DATE");	
	    printf("\n\t=====================================================================================================\n");
	
		while(fread(&bur,sizeof(bur),2,k))
	    {       
	
	       if(stricmp(bur.type,"Tablet")==0)
	       {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%d tablets/strip\t %d years",bur.Sno,bur.name,bur.type,bur.rate,bur.quantity,bur.date);
			printf("\n");}
		
			else if(stricmp(bur.type,"gel")==0 )
	   {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%dml per tube\t\t %d months",bur.Sno,bur.name,bur.type,bur.rate,bur.quantity,bur.date);
 	 		printf("\n");
		}
			else if(stricmp(bur.type,"cream")==0 )
	   {
			 printf("\n");
			printf("\t %d\t%s\t\t\t%s\t\t%.2f\t\t%dml per tube\t\t %d months",bur.Sno,bur.name,bur.type,bur.rate,bur.quantity,bur.date);
 	 		printf("\n");
		}
		else{
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%dml per bottle\t %d years",bur.Sno,bur.name,bur.type,bur.rate,bur.quantity,bur.date);
 	 		printf("\n");
		}
	    }
		fclose(k);      
}
}             
void joint()
{    
    int i;
    FILE *j;
    j= fopen("joi.txt","a");
    system("cls");
    printf("\n\n");
	printf("Enter the Sno.:  ");
	scanf("%d",&joi.Sno);
	printf("Enter the name : ");
	scanf("%s",joi.name);
	printf("Enter the type of medicine : ");
	scanf("%s",joi.type);
	printf("Enter the rate of the medicine :  ");
	scanf("%f",&joi.rate);
    printf("Enter the units of the medicine : ");
    scanf("%d",&joi.quantity);
     printf("Enter the expiry date of the medicine : ");
    scanf("%d",&joi.date);

	fwrite(&joi,sizeof(joi),2,j);
	fclose(j);
	LOOPw:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue adding medicinal records : ");
		scanf("%d",&i);
		if(i==1)
		intro();
		else if(i==0)
		insert();
		else
		{printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPw;}
	
}

void display4()
{  int i;
	FILE *j;
	j= fopen("joi.txt","r+");
	system("cls");
	if(j==NULL)
	printf("error");

	else{
	printf("\n\n");
	printf("\n\t====================================================================================================\n");
	    printf("\t Sno.\tNAME\t\t\tTYPE\t\tRATE(in Rs)\tQUANTITY\t\tEXPIRY DATE");	
	    printf("\n\t=====================================================================================================\n");
	
		while(fread(&joi,sizeof(joi),2,j))
	    {       
	
	       if(stricmp(joi.type,"Tablet")==0)
	       {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%d tablets/strip\t %d years",joi.Sno,joi.name,joi.type,joi.rate,joi.quantity,joi.date);
			printf("\n");}
		
			else if(stricmp(joi.type,"ointment")==0 )
	   {
			 printf("\n");
			printf("\t %d\t%s\t\t\t%s\t%.2f\t\t%dml per tube\t\t %d months",joi.Sno,joi.name,joi.type,joi.rate,joi.quantity,joi.date);
 	 		printf("\n");
		}
			else if(stricmp(joi.type,"spray")==0 )
	   {
			 printf("\n");
			printf("\t %d\t%s\t\t\t%s\t\t%.2f\t\t%dml per bottle\t\t %d years",joi.Sno,joi.name,joi.type,joi.rate,joi.quantity,joi.date);
 	 		printf("\n");
		}
		else{
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%dml per bottle\t %d years",joi.Sno,joi.name,joi.type,joi.rate,joi.quantity,joi.date);
 	 		printf("\n");
		}
	    }
		fclose(j);
		LOOPX:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue view medicines : ");
		scanf("%d",&i);
		if(i==1)
		intro();
		else if(i==0)
		display();
		else
		{printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPX;}
        
}}
void display44()
{  int i;
	FILE *j;
	j= fopen("joi.txt","r+");
	system("cls");
	if(j==NULL)
	printf("error");

	else{
	printf("\n\n");
	printf("\n\t====================================================================================================\n");
	    printf("\t Sno.\tNAME\t\t\tTYPE\t\tRATE(in Rs)\tQUANTITY\t\tEXPIRY DATE");	
	    printf("\n\t=====================================================================================================\n");
	
		while(fread(&joi,sizeof(joi),2,j))
	    {       
	
	       if(stricmp(joi.type,"Tablet")==0)
	       {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%d tablets/strip\t %d years",joi.Sno,joi.name,joi.type,joi.rate,joi.quantity,joi.date);
			printf("\n");}
		
			else if(stricmp(joi.type,"ointment")==0 )
	   {
			 printf("\n");
			printf("\t %d\t%s\t\t\t%s\t%.2f\t\t%dml per tube\t\t %d months",joi.Sno,joi.name,joi.type,joi.rate,joi.quantity,joi.date);
 	 		printf("\n");
		}
			else if(stricmp(joi.type,"spray")==0 )
	   {
			 printf("\n");
			printf("\t %d\t%s\t\t\t%s\t\t%.2f\t\t%dml per bottle\t\t %d years",joi.Sno,joi.name,joi.type,joi.rate,joi.quantity,joi.date);
 	 		printf("\n");
		}
		else{
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%dml per bottle\t %d years",joi.Sno,joi.name,joi.type,joi.rate,joi.quantity,joi.date);
 	 		printf("\n");
		}
	    }
		fclose(j);
        
}}

void diab()
{    
    int i;
    FILE *d;
    d= fopen("dia.txt","a");
    system("cls");
    printf("\n\n");
    printf("\n\n");
	printf("Enter the Sno.:  ");
	scanf("%d",&dia.Sno);
	printf("Enter the name : ");
	scanf("%s",dia.name);
	printf("Enter the type of medicine : ");
	scanf("%s",dia.type);
	printf("Enter the rate of the medicine :  ");
	scanf("%f",&dia.rate);
    printf("Enter the units of the medicine : ");
    scanf("%d",&dia.quantity);
     printf("Enter the expiry date of the medicine : ");
    scanf("%d",&dia.date);

	fwrite(&dia,sizeof(dia),2,d);
	fclose(d);
	LOOPu:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue adding medicinal records : ");
		scanf("%d",&i);
		if(i==1)
		intro();
		else if(i==0)
		insert();
		else
		{printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPu;}
	
}
void display5()
{   int i;
	FILE *d;
	d= fopen("dia.txt","r+");
	system("cls");
	if(d==NULL)
	printf("error");
	
	else{printf("\n\n");
	    printf("\n\t====================================================================================================\n");
	    printf("\t Sno.\tNAME\t\t\tTYPE\t\tRATE(in Rs)\tQUANTITY\t\tEXPIRY DATE");	
	    printf("\n\t=====================================================================================================\n");
	
		while(fread(&dia,sizeof(dia),2,d))
	    {       
	
	       if(stricmp(dia.type,"Tablet")==0)
	       {
			 printf("\n");
			printf("\t %d\t%s\t\t\t%s\t\t%.2f\t\t%d tablets/bottle\t %d years",dia.Sno,dia.name,dia.type,dia.rate,dia.quantity,dia.date);
			printf("\n");}
		
			else
	   {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%dml per bottle\t %d years",dia.Sno,dia.name,dia.type,dia.rate,dia.quantity,dia.date);
 	 		printf("\n");
		}
	    }
		fclose(d);
		LOOPX:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue view medicines : ");
		scanf("%d",&i);
		if(i==1)
		intro();
		else if(i==0)
		display();
		else
		{printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPX;}
        
}
}
void display55()
{   int i;
	FILE *d;
	d= fopen("dia.txt","r+");
	system("cls");
	if(d==NULL)
	printf("error");
	
	else{printf("\n\n");
	    printf("\n\t====================================================================================================\n");
	    printf("\t Sno.\tNAME\t\t\tTYPE\t\tRATE(in Rs)\tQUANTITY\t\tEXPIRY DATE");	
	    printf("\n\t=====================================================================================================\n");
	
		while(fread(&dia,sizeof(dia),2,d))
	    {       
	
	       if(stricmp(dia.type,"Tablet")==0)
	       {
			 printf("\n");
			printf("\t %d\t%s\t\t\t%s\t\t%.2f\t\t%d tablets/bottle\t %d years",dia.Sno,dia.name,dia.type,dia.rate,dia.quantity,dia.date);
			printf("\n");}
		
			else
	   {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%dml per bottle\t %d years",dia.Sno,dia.name,dia.type,dia.rate,dia.quantity,dia.date);
 	 		printf("\n");
		}
	    }
		fclose(d);
}
}
void stomach()
{    
    int i;
    FILE *s;
    s= fopen("sto.txt","a");
    system("cls");
    printf("\n\n");
	printf("Enter the Sno.:  ");
	scanf("%d",&sto.Sno);
	printf("Enter the name : ");
	scanf("%s",sto.name);
	printf("Enter the type of medicine : ");
	scanf("%s",sto.type);
	printf("Enter the rate of the medicine :  ");
	scanf("%f",&sto.rate);
    printf("Enter the units of the medicine : ");
    scanf("%d",&sto.quantity);
     printf("Enter the expiry date of the medicine : ");
    scanf("%d",&sto.date);

	fwrite(&sto,sizeof(sto),2,s);
	fclose(s);
	LOOPv:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue adding medicinal records : ");
		scanf("%d",&i);
		if(i==1)
		intro();
		else if(i==0)
		insert();
		else
		{printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPv;}
	
}

void display6()
{   int i;
	FILE *s;
	s= fopen("sto.txt","r+");
	system("cls");
	if(s==NULL)
	printf("error");
	else{printf("\n\n");
	printf("\n\t====================================================================================================\n");
	    printf("\t Sno.\tNAME\t\t\tTYPE\t\tRATE(in Rs)\tQUANTITY\t\tEXPIRY DATE");	
	    printf("\n\t=====================================================================================================\n");
	
		while(fread(&sto,sizeof(sto),2,s))
	    {       
	
	       if(stricmp(sto.type,"Tablet")==0)
	       {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%d tablets/bottle\t %d years",sto.Sno,sto.name,sto.type,sto.rate,sto.quantity,sto.date);
			printf("\n");}
		
			else
	   {
			 printf("\n");
			printf("\t %d\t%s\t%s\t%.2f\t\t%dml per bottle\t\t %d years",sto.Sno,sto.name,sto.type,sto.rate,sto.quantity,sto.date);
 	 		printf("\n");
		}
	    }
		fclose(s);
		LOOPX:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue view medicines : ");
		scanf("%d",&i);
		if(i==1)
		intro();
		else if(i==0)
		display();
		else
		{printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPX;}
        
}
}
void display66()
{   int i;
	FILE *s;
	s= fopen("sto.txt","r+");
	system("cls");
	if(s==NULL)
	printf("error");
	else{printf("\n\n");
	printf("\n\t====================================================================================================\n");
	    printf("\t Sno.\tNAME\t\t\tTYPE\t\tRATE(in Rs)\tQUANTITY\t\tEXPIRY DATE");	
	    printf("\n\t=====================================================================================================\n");
	
		while(fread(&sto,sizeof(sto),2,s))
	    {       
	
	       if(stricmp(sto.type,"Tablet")==0)
	       {
			 printf("\n");
			printf("\t %d\t%s\t\t%s\t\t%.2f\t\t%d tablets/bottle\t %d years",sto.Sno,sto.name,sto.type,sto.rate,sto.quantity,sto.date);
			printf("\n");}
		
			else
	   {
			 printf("\n");
			printf("\t %d\t%s\t%s\t%.2f\t\t%dml per bottle\t\t %d years",sto.Sno,sto.name,sto.type,sto.rate,sto.quantity,sto.date);
 	 		printf("\n");
		}
	    }
		fclose(s);     
}
}

void display()
{
	int j;
	
	system("cls");
	LOOPW:
	   	printf("\n\n\n\n\n\n\t\t\t\t\tChoose your health conditions:");
		printf("\n\n\n\t\t\t\t\t1.Fever\n\n\n\t\t\t\t\t2.Cough and Cold\n\n\n\t\t\t\t\t3.Burns and wounds\n\n\n\t\t\t\t\t4.Joints and Pains\n\n\n\t\t\t\t\t5.Diabetes\n\n\n\t\t\t\t\t6.Stomach ache\n\n\t\t\t\t\t ");
        scanf("%d",&j);

switch(j)
{
	case 1:
	     {
	          display1();
	          break;
		}
	case 2:
		{
			display2();
			break;
		}
	case 3:
		{
			display3();
			break;
		}
		case 4:
			{
				display4();
				break;
				
			}
	   case 5:
	   	{
	   		display5();
	   		break;
		   }
	
	case 6:
		{
			display6();
			break;
			
		}
	default:
		{ system("cls");
		printf("\n\n\t\t\t\t\tFILE NOT FOUND.TRY AGAIN...");
		 goto LOOPW;
		 }
		}	

}

void insert()
{
	int j;
	
	system("cls");
	LOOPR:
	   	printf("\n\n\n\n\n\n\t\t\t\t\tChoose the health conditions you want add file for:");
		printf("\n\n\n\t\t\t\t\t1.Fever\n\n\n\t\t\t\t\t2.Cough and Cold\n\n\n\t\t\t\t\t3.Burns and wounds\n\n\n\t\t\t\t\t4.Joints and Pains\n\n\n\t\t\t\t\t5.Diabetes\n\n\n\t\t\t\t\t6.Stomach ache\n\n\n\n\t\t\t\t\t ");
        scanf("%d",&j);

switch(j)
{
	case 1:
	     {
	          fever();
	          break;
		}
	case 2:
		{
			cold();
			break;
		}
	case 3:
		{
			burn();
			break;
		}
		case 4:
			{
				joint();
				break;
				
			}
	   case 5:
	   	{
	   		diab();
	   		break;
		   }
	
	case 6:
		{
			stomach();
			break;
			
		}
	default:	
	{ system("cls");
	printf("\n\n\t\t\t\tFILE NOT FOUND. TRY AGAIN...");
	goto LOOPR;
		}	
		}
}

void search()
{
	
	int j;
	
	system("cls");
	LOOPT:
	   	printf("\n\n\n\n\n\n\t\t\t\t\tChoose the health conditions in which you want to search medicine for :");
		printf("\n\n\n\t\t\t\t\t1.Fever\n\n\n\t\t\t\t\t2.Cough and Cold\n\n\n\t\t\t\t\t3.Burns and wounds\n\n\n\t\t\t\t\t4.Joints and Pains\n\n\n\t\t\t\t\t5.Diabetes\n\n\n\t\t\t\t\t6.Stomach ache\n\n\t\t\t\t\t ");
        scanf("%d",&j);

switch(j)
{
	case 1:
	     {     char s[20];
	     int i=0;
	     system("cls");
	     LOOPs:
		 printf("Enter the name of medicine you want to search for: ");
		 scanf("%s",s);
		 FILE *p;
		 p=fopen("fev.txt","r");
	     while(fread(&fev,sizeof(fev),2,p))
	     {  
	     	if(stricmp(s,fev.name)==0)
	     	{    i=1;
	     		printf("\nName : %s",fev.name);
	     		printf("\nType : %s",fev.type);
	     		printf("\nRate : %.2f",fev.rate);
	     		printf("\nQuantity : %d",fev.quantity);
	     		printf("\nexpiry Date: %d",fev.date);
			 }
		 }
	        if(i==0)
			{
			printf("\n\n\t\t\t\tFILE NOT FOUND. TRY AGAIN...");
			goto LOOPs;  }
	          break;
		}
	case 2:
		{
			display2();
			break;
		}
	case 3:
		{
			display3();
			break;
		}
		case 4:
			{
				display4();
				break;
				
			}
	   case 5:
	   	{
	   		display5();
	   		break;
		   }
	
	case 6:
		{
			display6();
			break;
			
		}
	default:
		{ system("cls");
		 printf("\n\n\t\t\t\tFILE NOT FOUND TRY AGAIN...");
		 goto LOOPT;
		}
		}	
	}
void update()
{
	int j;
	
	system("cls");
	LOOPB:
	   	printf("\n\n\n\n\n\n\t\t\t\t\tChoose the health conditions in which you want to update medicines :");
		printf("\n\n\n\t\t\t\t\t1.Fever\n\n\n\t\t\t\t\t2.Cough and Cold\n\n\n\t\t\t\t\t3.Burns and wounds\n\n\n\t\t\t\t\t4.Joints and Pains\n\n\n\t\t\t\t\t5.Diabetes\n\n\n\t\t\t\t\t6.Stomach ache\n\n\n\n\n\n\n\t\t\t\t\t ");
        scanf("%d",&j);
	switch(j)
	{
	  case 1:
	   {
		  int y,n;
		FILE *p,*fr;
		p=fopen("fev.txt","r");
		fr=fopen("updatefev.txt","w");
		system("cls");
		printf("\n\n");
		display11();
		printf("\n\n");
		printf("\n\tEnter the S.no you want to update from above : ");
		scanf("%d",&y);
	    while(fread(&fev,sizeof(fev),2,p))
	    {
	    	 
			 if(y!=fev.Sno)
	    	 { 
	    	 	 fwrite(&fev,sizeof(fev),2,fr);
			 }
			 else
			 { 
			 	 printf("\n\nEnter the name : ");
	             scanf("%s",fev.name);
	             printf("Enter the type of medicine : ");
	             scanf("%s",fev.type);
	             printf("Enter the rate of the medicine :  ");
	             scanf("%f",&fev.rate);
                 printf("Enter the units of the medicine : ");
                 scanf("%d",&fev.quantity);
                 printf("Enter the expiry date of the medicine : ");
                 scanf("%d",&fev.date);
                 fwrite(&fev,sizeof(fev),2,fr);
			 }
		}
		fclose(fr);
		fclose(p);
		p=fopen("fev.txt","w");
		fr=fopen("updatefev.txt","r");
		while(fread(&fev,sizeof(fev),2,fr))
		{
			fwrite(&fev,sizeof(fev),2,p);
		}
	    fclose(fr);
		fclose(p);
		printf("\n\t\t\t\t\tFILE UPDATED SUCCESSFULLY...");
		LOOPu:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue updating medicinal records : ");
		scanf("%d",&n);
		if(n==1)
		intro();
		else if(n==0)
		goto LOOPB;
		else
		{ system("cls");
		printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPu;}
	    break;	
		}
		case 2:
		{
		int y,n;
		FILE *p,*fr;
		p=fopen("cou.txt","r");
		fr=fopen("updatecou.txt","w");
		system("cls");
		printf("\n\n");
		display22();
		printf("\n\n");
		printf("\n\t\tEnter the S.no you want to update from above : ");
		scanf("%d",&y);
	    while(fread(&cou,sizeof(cou),2,p))
	    {
	    if(y!=cou.Sno)
	    {
	     fwrite(&cou,sizeof(cou),2,fr);
		}
		 else{
			 	
			 	
		FILE *f;
        f= fopen("cou.txt","a");
        system("cls");
	    printf("Enter the Sno.:  ");
	    scanf("%d",&cou.Sno);
	    printf("Enter the name : ");
	    scanf("%s",cou.name);
	    printf("Enter the type of medicine : ");
	    scanf("%s",cou.type);
	    printf("Enter the rate of the medicine :  ");
	    scanf("%f",&cou.rate);
        printf("Enter the units of the medicine : ");
        scanf("%d",&cou.quantity);
        printf("Enter the expiry date of the medicine : ");
        scanf("%d",&cou.date);

	    fwrite(&cou,sizeof(cou),2,f);
			 }	
		}
		fclose(fr);
		fclose(p);
		p=fopen("cou.txt","w");
		fr=fopen("updatecou.txt","r");
		while(fread(&cou,sizeof(cou),2,fr))
		{
			fwrite(&cou,sizeof(cou),2,p);
		}
	    fclose(fr);
		fclose(p);
		printf("\n\n\t\t\t\tFILE UPDATED SUCCESSFULLY...");
        LOOP0:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue updating medicinal records : ");
		scanf("%d",&n);
		if(n==1)
		intro();
		else if(n==0)
		goto LOOPB;
		else
		{ system("cls");
		printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOP0;}
		break;	
			}
		
		case 3:
		{
			int y,n;
		FILE *p,*fr;
		p=fopen("bur.txt","r");
		fr=fopen("updatebur.txt","w");
		system("cls");
		printf("\n\n");
		display33();
		printf("\n\n");
		printf("\n\t\tEnter the S.no u want to update  from above: ");
		scanf("%d",&y);
	    while(fread(&bur,sizeof(bur),2,p))
	    {
	    if(y!=bur.Sno)
	    {
	     fwrite(&bur,sizeof(bur),2,fr);
		}
		 else{
			 	
			 	
		FILE *f;
        f= fopen("bur.txt","a");
        system("cls");
	    printf("Enter the Sno.:  ");
	    scanf("%d",&bur.Sno);
	    printf("Enter the name : ");
	    scanf("%s",bur.name);
	    printf("Enter the type of medicine : ");
	    scanf("%s",bur.type);
	    printf("Enter the rate of the medicine :  ");
	    scanf("%f",&bur.rate);
        printf("Enter the units of the medicine : ");
        scanf("%d",&bur.quantity);
        printf("Enter the expiry date of the medicine : ");
        scanf("%d",&bur.date);

	    fwrite(&bur,sizeof(bur),2,f);
			 }	
		}
		fclose(fr);
		fclose(p);
		p=fopen("bur.txt","w");
		fr=fopen("updatebur.txt","r");
		while(fread(&bur,sizeof(bur),2,fr))
		{
			fwrite(&bur,sizeof(bur),2,p);
		}
	    fclose(fr);
		fclose(p);
		printf("n\n\t\t\t\tFILE UPDATED SUCCESSFULLY...");
		
         	LOOPe:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue updating medicinal records : ");
		scanf("%d",&n);
		if(n==1)
		intro();
		else if(n==0)
		goto LOOPB;
		else
		{ system("cls");
		printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPe;}	
		break;
		}
		
		case 4:
		{
			int y,n;
		FILE *p,*fr;
		p=fopen("cou.txt","r");
		fr=fopen("updatecou.txt","w");
		system("cls");
		printf("\n\n");
		display44();
		printf("\n\n");
		printf("\n\t\tEnter the S.no u want to update from above : ");
		scanf("%d",&y);
	    while(fread(&cou,sizeof(cou),2,p))
	    {
	    if(y!=cou.Sno)
	    {
	     fwrite(&cou,sizeof(cou),2,fr);
		}
		 else{
			 	
			 	
		FILE *f;
        f= fopen("joi.txt","a");
        system("cls");
	    printf("Enter the Sno.:  ");
	    scanf("%d",&joi.Sno);
	    printf("Enter the name : ");
	    scanf("%s",joi.name);
	    printf("Enter the type of medicine : ");
	    scanf("%s",joi.type);
	    printf("Enter the rate of the medicine :  ");
	    scanf("%f",&joi.rate);
        printf("Enter the units of the medicine : ");
        scanf("%d",&joi.quantity);
        printf("Enter the expiry date of the medicine : ");
        scanf("%d",&joi.date);

	    fwrite(&joi,sizeof(joi),2,f);
			 }	
		}
		fclose(fr);
		fclose(p);
		p=fopen("joi.txt","w");
		fr=fopen("updatejoi.txt","r");
		while(fread(&joi,sizeof(joi),2,fr))
		{
			fwrite(&joi,sizeof(joi),2,p);
		}
	    fclose(fr);
		fclose(p);
		printf("\n\n\t\t\t\tFILE UPDATED SUCCESSFULLY...");
	
       	LOOPf:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue updating medicinal records : ");
		scanf("%d",&n);
		if(n==1)
		intro();
		else if(n==0)
		goto LOOPB;
		else
		{ system("cls");
		printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPf;}	
		break;
			}	
		
		case 5:
		{int y,n;
		FILE *p,*fr;
		p=fopen("dia.txt","r");
		fr=fopen("updatedia.txt","w");
		system("cls");
		printf("\n\n");
		display55();
		printf("\n\n");
		printf("\n\t\tEnter the S.no u want to update from above : ");
		scanf("%d",&y);
	    while(fread(&dia,sizeof(dia),2,p))
	    {
	    if(y!=dia.Sno)
	    {
	     fwrite(&dia,sizeof(dia),2,fr);
		}
		 else{
			 	
			 	
		FILE *f;
        f= fopen("dia.txt","a");
        system("cls");
	    printf("Enter the Sno.:  ");
	    scanf("%d",&dia.Sno);
	    printf("Enter the name : ");
	    scanf("%s",dia.name);
	    printf("Enter the type of medicine : ");
	    scanf("%s",dia.type);
	    printf("Enter the rate of the medicine :  ");
	    scanf("%f",&dia.rate);
        printf("Enter the units of the medicine : ");
        scanf("%d",&dia.quantity);
        printf("Enter the expiry date of the medicine : ");
        scanf("%d",&dia.date);

	    fwrite(&dia,sizeof(dia),2,f);
			 }	
		}
		fclose(fr);
		fclose(p);
		p=fopen("dia.txt","w");
		fr=fopen("updatedia.txt","r");
		while(fread(&dia,sizeof(dia),2,fr))
		{
			fwrite(&dia,sizeof(dia),2,p);
		}
	    fclose(fr);
		fclose(p);
		printf("\n\n\t\t\t\tFILE UPDATED SUCCESSFULLY...");	
		
         	LOOPm:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue updating medicinal records : ");
		scanf("%d",&n);
		if(n==1)
		intro();
		else if(n==0)
		goto LOOPB;
		else
		{ system("cls");
		printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPm;}
		break;
		}
		
		case 6:
		{
			int y,n;
		FILE *p,*fr;
		p=fopen("cou.txt","r");
		fr=fopen("updatecou.txt","w");
		system("cls");
		printf("\n\n");
		display66();
		printf("\n\n");
		printf("\n\t\tEnter the S.no u want to update from above : ");
		scanf("%d",&y);
	    while(fread(&cou,sizeof(cou),2,p))
	    {
	    if(y!=cou.Sno)
	    {
	     fwrite(&cou,sizeof(cou),2,fr);
		}
		 else{
			 	
			 	
		FILE *f;
        f= fopen("sto.txt","a");
        system("cls");
	    printf("Enter the Sno.:  ");
	    scanf("%d",&sto.Sno);
	    printf("Enter the name : ");
	    scanf("%s",sto.name);
	    printf("Enter the type of medicine : ");
	    scanf("%s",sto.type);
	    printf("Enter the rate of the medicine :  ");
	    scanf("%f",&sto.rate);
        printf("Enter the units of the medicine : ");
        scanf("%d",&sto.quantity);
        printf("Enter the expiry date of the medicine : ");
        scanf("%d",&sto.date);

	    fwrite(&sto,sizeof(sto),2,f);
			 }	
		}
		fclose(fr);
		fclose(p);
		p=fopen("sto.txt","w");
		fr=fopen("updatesto.txt","r");
		while(fread(&sto,sizeof(sto),2,fr))
		{
			fwrite(&sto,sizeof(sto),2,p);
		}
	    fclose(fr);
		fclose(p);
		printf("\n\n\t\t\t\tFILE UPDATED SUCCESSFULLY...");	
		
         	LOOPq:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue updating medicinal records : ");
		scanf("%d",&n);
		if(n==1)
		intro();
		else if(n==0)
		goto LOOPB;
		else
		{ system("cls");
		printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPq;}
		break;
			}	
	
	default:
	{
		system("cls");
		printf("\n\n\t\t\t\tFILE NOT FOUND.TRY AGAIN...");
		goto LOOPB;
		}	
		
		
	}
		
	}
		
void delete1()
{
	int j;
	
	system("cls");
	  LOOPP:
	   	printf("\n\n\n\n\n\n\t\t\tChoose the health conditions in which you want to delete medcinal records:");
		printf("\n\n\n\t\t\t\t\t1.Fever\n\n\n\t\t\t\t\t2.Cough and Cold\n\n\n\t\t\t\t\t3.Burns and wounds\n\n\n\t\t\t\t\t4.Joints and Pains\n\n\n\t\t\t\t\t5.Diabetes\n\n\n\t\t\t\t\t6.Stomach ache\n\n\n\n\n\n\n\t\t\t\t\t ");
        scanf("%d",&j);
	switch(j)
	{
	  case 1:
	   {
		  int y,n;
		FILE *p,*fr;
		p=fopen("fev.txt","r");
		fr=fopen("updatefev.txt","w");
		system("cls");
		printf("\n\n");
		display11();
		printf("\n\n");
		printf("Enter the S.no u want to delete :");
		scanf("%d",&y);
	    while(fread(&fev,sizeof(fev),2,p))
	    {
	    	 
			 if(y!=fev.Sno)
	    	 {
	    	 	 fwrite(&fev,sizeof(fev),2,fr);
			 }
		}
		fclose(fr);
		fclose(p);
		p=fopen("fev.txt","w");
		fr=fopen("updatefev.txt","r");
		while(fread(&fev,sizeof(fev),2,fr))
		{
			fwrite(&fev,sizeof(fev),2,p);
		}
	    fclose(fr);
		fclose(p);
		printf("\n\t\t\t\tFILE DELETED SUCCESSFULLY...");
		LOOPy:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue deleting medicinal records : ");
		scanf("%d",&n);
		if(n==1)
		intro();
		else if(n==0)
		goto LOOPP;
		else
		{ system("cls");
		printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPy;}
	    break;	
		}
		
		case 2:
			{	  int y,n;
		FILE *p,*fr;
		p=fopen("cou.txt","r");
		fr=fopen("updatecou.txt","w");
		system("cls");
		printf("\n\n");
		display22();
		printf("\n\n");
		printf("Enter the S.no u want to delete :");
		scanf("%d",&y);
	    while(fread(&cou,sizeof(cou),2,p))
	    {
	    	 
			 if(y!=cou.Sno)
	    	 {
	    	 	 fwrite(&fev,sizeof(cou),2,fr);
			 }
		}
		fclose(fr);
		fclose(p);
		p=fopen("cou.txt","w");
		fr=fopen("updatecou.txt","r");
		while(fread(&cou,sizeof(cou),2,fr))
		{
			fwrite(&cou,sizeof(cou),2,p);
		}
	    fclose(fr);
		fclose(p);
				printf("\n\t\t\t\tFILE DELETED SUCCESSFULLY...");

			LOOPr:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue deleting medicinal records : ");
		scanf("%d",&n);
		if(n==1)
		intro();
		else if(n==0)
		goto LOOPP;
		else
		{ system("cls");
		printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPr;}
			    break;	

			}
			
		case 3:
		{
				  int y,n;
		FILE *p,*fr;
		p=fopen("bur.txt","r");
		fr=fopen("updatebur.txt","w");
		system("cls");
		printf("\n\n");
		display33();
		printf("\n\n");
		printf("Enter the S.no u want to delete :");
		scanf("%d",&y);
	    while(fread(&bur,sizeof(bur),2,p))
	    {
	    	 
			 if(y!=bur.Sno)
	    	 {
	    	 	 fwrite(&bur,sizeof(bur),2,fr);
			 }
		}
		fclose(fr);
		fclose(p);
		p=fopen("bur.txt","w");
		fr=fopen("updatebur.txt","r");
		while(fread(&bur,sizeof(bur),2,fr))
		{
			fwrite(&bur,sizeof(bur),2,p);
		}
	    fclose(fr);
		fclose(p);
				printf("\n\t\t\t\tFILE DELETED SUCCESSFULLY...");

			LOOPD:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue deleting medicinal records : ");
		scanf("%d",&n);
		if(n==1)
		intro();
		else if(n==0)
		goto LOOPP;
		else
		{ system("cls");
		printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPD;}
			    break;	

			}
			
		case 4:
		{	  int y,n;
		FILE *p,*fr;
		p=fopen("joi.txt","r");
		fr=fopen("updatejoi.txt","w");
		system("cls");
		printf("\n\n");
		display44();
		printf("\n\n");
		printf("Enter the S.no u want to delete :");
		scanf("%d",&y);
	    while(fread(&joi,sizeof(joi),2,p))
	    {
	    	 
			 if(y!=joi.Sno)
	    	 {
	    	 	 fwrite(&joi,sizeof(joi),2,fr);
			 }
		}
		fclose(fr);
		fclose(p);
		p=fopen("joi.txt","w");
		fr=fopen("updatejoi.txt","r");
		while(fread(&joi,sizeof(joi),2,fr))
		{
			fwrite(&joi,sizeof(joi),2,p);
		}
	    fclose(fr);
		fclose(p);
				printf("\n\t\t\t\tFILE DELETED SUCCESSFULLY...");

			LOOPU:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue deleting medicinal records : ");
		scanf("%d",&n);
		if(n==1)
		intro();
		else if(n==0)
		goto LOOPP;
		else
		{ system("cls");
		printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOPU;}
			    break;	

				}
				
		case 5:
		{
				  int y,n;
		FILE *p,*fr;
		p=fopen("dia.txt","r");
		fr=fopen("updatedia.txt","w");
		system("cls");
		printf("\n\n");
		display55();
		printf("\n\n");
		printf("Enter the S.no u want to delete :");
		scanf("%d",&y);
	    while(fread(&dia,sizeof(dia),2,p))
	    {
	    	 
			 if(y!=dia.Sno)
	    	 {
	    	 	 fwrite(&dia,sizeof(dia),2,fr);
			 }
		}
		fclose(fr);
		fclose(p);
		p=fopen("dia.txt","w");
		fr=fopen("updatedia.txt","r");
		while(fread(&dia,sizeof(dia),2,fr))
		{
			fwrite(&dia,sizeof(dia),2,p);
		}
	    fclose(fr);
		fclose(p);
      	printf("\n\t\t\t\tFILE DELETED SUCCESSFULLY...");

			LOOP9:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue deleting medicinal records : ");
		scanf("%d",&n);
		if(n==1)
		intro();
		else if(n==0)
		goto LOOP9;
		else
		{ system("cls");
		printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOP9;}
			    break;	

				}		
				
		case 6:
		{	  int y,n;
		FILE *p,*fr;
		p=fopen("sto.txt","r");
		fr=fopen("updatesto.txt","w");
		system("cls");
		printf("\n\n");
		display66();
		printf("\n\n");
		printf("Enter the S.no u want to delete :");
		scanf("%d",&y);
	    while(fread(&sto,sizeof(sto),2,p))
	    {
	    	 
			 if(y!=sto.Sno)
	    	 {
	    	 	 fwrite(&sto,sizeof(sto),2,fr);
			 }
		}
		fclose(fr);
		fclose(p);
		p=fopen("sto.txt","w");
		fr=fopen("updatesto.txt","r");
		while(fread(&sto,sizeof(sto),2,fr))
		{
			fwrite(&sto,sizeof(sto),2,p);
		}
	    fclose(fr);
		fclose(p);
				printf("\n\t\t\t\tFILE DELETED SUCCESSFULLY...");

			LOOP8:
		printf("\n\n\n\t\t\t\tPress 1 to return to main menu and 0 to continue deleting medicinal records : ");
		scanf("%d",&n);
		if(n==1)
		intro();
		else if(n==0)
		goto LOOP9;
		else
		{ system("cls");
		printf("\n\t\t INVALID OPTION. CHOOSE AGAIN...");
         goto LOOP8;}
			    break;	

				}		
				
		default:
          { system("cls");
		printf("\n\n\t\t\t\tFILE NOT FOUND.TRY AGAIN...");
		goto LOOPP;
						  }				
						
	}
		
	}	
		
void search1()
{   int n,e=0;
FILE *p,*s,*d,*k,*j,*f;
	p=fopen("fev.txt","r");
	f=fopen("cou.txt","r");
	d=fopen("dia.txt","r");
	k=fopen("bur.txt","r");
	s=fopen("sto.txt","r");
	j=fopen("joi.txt","r");
	char medi[20];
		system("cls");
		LOOP7:
	printf("\n\t\tEnter the name of the medicine you want to search for : ");
	scanf("%s",medi);

	while(fread(&fev,sizeof(fev),2,p))
	{
		if(stricmp(medi,fev.name)==0)
		{ e=1;
			   if(stricmp(fev.type,"Tablet")==0)
	       {
			printf("\n");
			     printf("Medicine Type : Fever");
			    printf("\nName : %s",fev.name);
	     		printf("\nType : %s",fev.type);
	     		printf("\nRate : %.2f",fev.rate);
	     		printf("\nQuantity : %d per strip",fev.quantity);
	     		printf("\nexpiry Date: %d years",fev.date);
			printf("\n");}
		
			else
	   {
			 printf("\n");
			  printf("Medicine Type : Fever");
			    printf("\nName : %s",fev.name);
	     		printf("\nType : %s",fev.type);
	     		printf("\nRate : %.2f",fev.rate);
	     		printf("\nQuantity : %d ml per bottle",fev.quantity);
	     		printf("\nexpiry Date: %d months",fev.date);
		
 	 		printf("\n");
		}
		goto LOOP0;
	    }
	     		
		}
	
	while(fread(&cou,sizeof(cou),2,f))
	{
		if(stricmp(medi,cou.name)==0)
		{ e=1;
			    if(stricmp(cou.type,"Tablet")==0)
	       {
			 printf("\n");
			 printf("medicine type : Cough and Cold");
		    	printf("\nName : %s",cou.name);
	     		printf("\nType : %s",cou.type);
	     		printf("\nRate : %.2f",cou.rate);
	     		printf("\nQuantity : %d tablets/strip",cou.quantity);
	     		printf("\nexpiry Date: %d years",cou.date);
			
			printf("\n");}
		
			else
	   {
			 printf("\n");
			 printf("medicine type : Cough and Cold");
		    	printf("\nName : %s",cou.name);
	     		printf("\nType : %s",cou.type);
	     		printf("\nRate : %.2f",cou.rate);
	     		printf("\nQuantity : %d ml per bottle",cou.quantity);
	     		printf("\nexpiry Date: %d months ",cou.date);
			
 	 		printf("\n");
		}
				goto LOOP0;
		}
		
	}
	while(fread(&dia,sizeof(dia),2,d))
	{
		if(stricmp(medi,dia.name)==0)
		{ e=1;
			     if(stricmp(dia.type,"Tablet")==0)
	       {
			 printf("\n");
			 printf("medicine type : Diabetes");
			    printf("\nName : %s",dia.name);
	     		printf("\nType : %s",dia.type);
	     		printf("\nRate : %.2f",dia.rate);
	     		printf("\nQuantity : %d tablets/bottle",dia.quantity);
	     		printf("\nexpiry Date: %d years",dia.date);
			printf("\n");}
		
			else
	   {
			 printf("\n");
			 printf("medicine type : Diabetes");
			    printf("\nName : %s",dia.name);
	     		printf("\nType : %s",dia.type);
	     		printf("\nRate : %.2f",dia.rate);
	     		printf("\nQuantity : %d per bottle",dia.quantity);
	     		printf("\nexpiry Date: %d years",dia.date);
			
 	 		printf("\n");
		}
				goto LOOP0;
		}
		
	}
	while(fread(&bur,sizeof(bur),2,k))
	{
		if(stricmp(medi,bur.name)==0)
		{ 
			  e=1; 
	       if(stricmp(bur.type,"Tablet")==0)
	       {
			 printf("\n");
			 printf("medicine type : Burns and wounds");
			    printf("\nName : %s",bur.name);
	     		printf("\nType : %s",bur.type);
	     		printf("\nRate : %.2f",bur.rate);
	     		printf("\nQuantity : %d tablets/strip",bur.quantity);
	     		printf("\nexpiry Date: %d years",bur.date);
			
			printf("\n");
			}
		
			else if(stricmp(bur.type,"gel")==0 )
	   {
			 printf("\n");
			 printf("medicine type : Burns and wounds");
			    printf("\nName : %s",bur.name);
	     		printf("\nType : %s",bur.type);
	     		printf("\nRate : %.2f",bur.rate);
	     		printf("\nQuantity : %d ml per tube ",bur.quantity);
	     		printf("\nexpiry Date: %d months",bur.date);
			
 	 		printf("\n");
		}
			else if(stricmp(bur.type,"cream")==0 )
	   {
			 printf("\n");
			 printf("medicine type : Burns and wounds");
			    printf("\nName : %s",bur.name);
	     		printf("\nType : %s",bur.type);
	     		printf("\nRate : %.2f",bur.rate);
	     		printf("\nQuantity : %d ml per tube",bur.quantity);
	     		printf("\nexpiry Date: %d months",bur.date);
			
 	 		printf("\n");
		}
		else{
			 printf("\n");
			 printf("medicine type : Burns and wounds");
			    printf("\nName : %s",bur.name);
	     		printf("\nType : %s",bur.type);
	     		printf("\nRate : %.2f",bur.rate);
	     		printf("\nQuantity : %d ml per bottle",bur.quantity);
	     		printf("\nexpiry Date: %d years",bur.date);
		
 	 		printf("\n");
		}
				goto LOOP0;
		}
		
	}
	while(fread(&sto,sizeof(sto),2,s))
	{
		if(stricmp(medi,sto.name))
		{
			   
	       if(stricmp(sto.type,"Tablet")==0)
	       { e=1;
			 printf("\n");
			  printf("medicine type : Stomach ache");
			    printf("\nName : %s",sto.name);
	     		printf("\nType : %s",sto.type);
	     		printf("\nRate : %.2f",sto.rate);
	     		printf("\nQuantity : %d tablets/bottle",sto.quantity);
	     		printf("\nexpiry Date: %d years",sto.date);
			printf("\n");}
		
			else
	   {e=1;
			 printf("\n");
			  printf("medicine type : Stomach ache");
			    printf("\nName : %s",sto.name);
	     		printf("\nType : %s",sto.type);
	     		printf("\nRate : %.2f",sto.rate);
	     		printf("\nQuantity : %d ml per bottle",sto.quantity);
	     		printf("\nexpiry Date: %d years",sto.date);
 	 		printf("\n");
		}
	     			goto LOOP0;
		}
		
	}
	while(fread(&joi,sizeof(joi),2,j))
	{
		if(stricmp(medi,joi.name))
		{
			    if(stricmp(joi.type,"Tablet")==0)
	       {e=1;
			 printf("\n");
			 printf("medicine type : Joints and Pains");
			    printf("\nName : %s",joi.name);
	     		printf("\nType : %s",joi.type);
	     		printf("\nRate : %.2f",joi.rate);
	     		printf("\nQuantity : %d tablets/strip",joi.quantity);
	     		printf("\nexpiry Date: %d years",joi.date);
		
			printf("\n");}
		
			else if(stricmp(joi.type,"ointment")==0 )
	   {e=1;
			 printf("\n");
			 printf("medicine type : Joints and Pains");
			    printf("\nName : %s",joi.name);
	     		printf("\nType : %s",joi.type);
	     		printf("\nRate : %.2f",joi.rate);
	     		printf("\nQuantity : %d dml per tube",joi.quantity);
	     		printf("\nexpiry Date: %d months",joi.date);
			
 	 		printf("\n");
		}
			else if(stricmp(joi.type,"spray")==0 )
	   {e=1;
			 printf("\n");
			 printf("medicine type : Joints and Pains");
			    printf("\nName : %s",joi.name);
	     		printf("\nType : %s",joi.type);
	     		printf("\nRate : %.2f",joi.rate);
	     		printf("\nQuantity : %d ml per bottle",joi.quantity);
	     		printf("\nexpiry Date: %d years",joi.date);
			
 	 		printf("\n");
		}
		else{e=1;
			 printf("\n");
			 printf("Medicine type : Joints and Pains");
			    printf("\nName : %s",joi.name);
	     		printf("\nType : %s",joi.type);
	     		printf("\nRate : %.2f",joi.rate);
	     		printf("\nQuantity : %d ml per bottle",joi.quantity);
	     		printf("\nexpiry Date: %d years",joi.date);
			
 	 		printf("\n");
		}
	     			goto LOOP0;
		}
	}
	if(e==0)
	{
		printf("\n\t\t\t\tFILE NOT FOUND. TRY AGAIN...");
		goto LOOP7;
	}
	LOOP0:
	printf("\n");
	printf("Press 1 to go to the main menu and 0 to continue searching medicines");	
	scanf("%d",&n);
	if(n==1)
	intro();
	if(n==0)
	goto LOOP7;
}

struct bill
{
	char name[20];
	long long int cont;	
}obj;

void bill()
{   
 int n,i,t,c;
 float sum=0;
FILE *p,*s,*d,*k,*j,*f,*u;
	p=fopen("fev.txt","r");
	f=fopen("cou.txt","r");
	d=fopen("dia.txt","r");
	k=fopen("bur.txt","r");
	s=fopen("sto.txt","r");
	j=fopen("joi.txt","r");
	char medi[20];
	u=fopen("obj.txt","w");
	
		system("cls");
		printf("\n\n\t\tEnter you name: ");
		scanf("%s",obj.name);
		printf("\n\n\t\tEnter your contact number : ");
		scanf("%lld",&obj.cont);
		loopt:
		printf("\n\n\t\t\t Press 1 to select and 2 to create bill :  ");
		scanf("%d",&c);
		
		switch(c)
		{
			case 1:
				{    system("cls");
					printf("\n\t\tEnter the name of the medicine you want to search for : ");
	scanf("%s",medi);

	while(fread(&fev,sizeof(fev),2,p))
	{
		if(stricmp(medi,fev.name)==0)
		{ 
			   if(stricmp(fev.type,"Tablet")==0)
	       {
			printf("\n");
			     printf("\t\tMedicine Type : Fever");
			    printf("\n\t\tName : %s",fev.name);
	     		printf("\n\t\tType : %s",fev.type);
	     		printf("\n\t\tRate: %.2f",fev.rate);
	     		printf("\n\t\tQuantity : %d per strip",fev.quantity);
	     		printf("\n\t\texpiry Date: %d years",fev.date);
			    printf("\n");
			    printf("\t\tEnter no .of units you want : ");
			    scanf("%d",&t);
			    sum=sum+(fev.rate*t);
			    		goto LOOP0;
			    }
		
			else
	   {
			 printf("\n");
			  printf("\t\tMedicine Type : Fever");
			    printf("\n\t\tName : %s",fev.name);
	     		printf("\n\t\tType : %s",fev.type);
	     		printf("\n\t\tRate : %.2f",fev.rate);
	     		printf("\n\t\tQuantity : %d ml per bottle",fev.quantity);
	     		printf("\n\t\texpiry Date: %d months",fev.date);
 	 		printf("\n");
 	 		printf("\t\tEnter no .of units you want : ");
			    scanf("%d",&t);
			    sum=sum+(fev.rate*t);
			    		goto LOOP0;
		}
	    }
	     		
		}
	
	while(fread(&cou,sizeof(cou),2,f))
	{
		if(stricmp(medi,cou.name)==0)
		{ 
			    if(stricmp(cou.type,"Tablet")==0)
	       {
			 printf("\n");
			 printf("\t\tMedicine type : Cough and Cold");
		    	printf("\n\t\tName : %s",cou.name);
	     		printf("\n\t\tType : %s",cou.type);
	     		printf("\n\t\tRate : %.2f",cou.rate);
	     		printf("\n\t\tQuantity : %d tablets/strip",cou.quantity);
	     		printf("\n\t\texpiry Date: %d years",cou.date);
			printf("\n");
			printf("\t\tEnter no .of units you want : ");
			    scanf("%d",&t);
			     sum=sum+(cou.rate*t);
				}
		
			else
	   {
			 printf("\n");
			 printf("\n\t\tMedicine type : Cough and Cold");
		    	printf("\n\t\tName : %s",cou.name);
	     		printf("\n\t\tType : %s",cou.type);
	     		printf("\n\t\tRate : %.2f",cou.rate);
	     		printf("\n\t\tQuantity : %d ml per bottle",cou.quantity);
	     		printf("\n\t\texpiry Date: %d months ",cou.date);
 	 		printf("\n");
 	 		printf("\t\tEnter no .of units you want : ");
			    scanf("%d",&t);
			     sum=sum+(cou.rate*t);
		}
				goto LOOP0;
		}
		
	}
	while(fread(&dia,sizeof(dia),2,d))
	{
		if(stricmp(medi,dia.name)==0)
		{ 
			     if(stricmp(dia.type,"Tablet")==0)
	       {
			 printf("\n");
			 printf("\t\tMedicine type : Diabetes");
			    printf("\n\t\tName : %s",dia.name);
	     		printf("\n\t\tType : %s",dia.type);
	     		printf("\n\t\tRate : %.2f",dia.rate);
	     		printf("\n\t\tQuantity : %d tablets/bottle",dia.quantity);
	     		printf("\n\t\texpiry Date: %d years",dia.date);
			printf("\n");
			printf("\t\tEnter no .of units you want : ");
			    scanf("%d",&t);
				 sum=sum+(dia.rate*t);}
		
			else
	   {
			 printf("\n");
			 printf("\t\tMedicine type : Diabetes");
			    printf("\n\t\tName : %s",dia.name);
	     		printf("\n\t\tType : %s",dia.type);
	     		printf("\n\t\tRate : %.2f",dia.rate);
	     		printf("\n\t\tQuantity : %d per bottle",dia.quantity);
	     		printf("\n\t\texpiry Date: %d years",dia.date);
			  printf("\n");
			  printf("\t\tEnter no .of units you want : ");
			    scanf("%d",&t);
			     sum=sum+(dia.rate*t);
		}
				goto LOOP0;
		}
		
	}
	while(fread(&bur,sizeof(bur),2,k))
	{
		if(stricmp(medi,bur.name)==0)
		{ 
			   
	       if(stricmp(bur.type,"Tablet")==0)
	       {
			 printf("\n");
			 printf("\t\tMedicine type : Burns and wounds");
			    printf("\n\t\tName : %s",bur.name);
	     		printf("\n\t\tType : %s",bur.type);
	     		printf("\n\t\tRate : %.2f",bur.rate);
	     		printf("\n\t\tQuantity : %d tablets/strip",bur.quantity);
	     		printf("\n\t\texpiry Date: %d years",bur.date);
			
			printf("\n");
			printf("\t\tEnter no .of units you want : ");
			    scanf("%d",&t);
				 sum=sum+(bur.rate*t);}
		
			else if(stricmp(bur.type,"gel")==0 )
	   {
			 printf("\n");
			 printf("\n\t\tedicine type : Burns and wounds");
			    printf("\n\t\tName : %s",bur.name);
	     		printf("\n\t\tType : %s",bur.type);
	     		printf("\n\t\tRate : %.2f",bur.rate);
	     		printf("\n\t\tQuantity : %d ml per tube ",bur.quantity);
	     		printf("\n\t\texpiry Date: %d months",bur.date);
			
 	 		printf("\n");
 	 		printf("\t\tEnter no .of units you want : ");
			    scanf("%d",&t);
			     sum=sum+(bur.rate*t);
			    
		}
			else if(stricmp(bur.type,"cream")==0 )
	   {
			 printf("\n");
			 printf("\n\t\tedicine type : Burns and wounds");
			    printf("\n\t\tName : %s",bur.name);
	     		printf("\n\t\tType : %s",bur.type);
	     		printf("\n\t\tRate : %.2f",bur.rate);
	     		printf("\n\t\tQuantity : %d ml per tube",bur.quantity);
	     		printf("\n\t\texpiry Date: %d months",bur.date);
			
 	 		printf("\n");
 	 		printf("\t\tEnter no .of units you want : ");
			    scanf("%d",&t);
			     sum=sum+(bur.rate*t);
		}
		else{
			 printf("\n");
			 printf("\n\t\tMedicine type : Burns and wounds");
			    printf("\n\t\tName : %s",bur.name);
	     		printf("\n\t\tType : %s",bur.type);
	     		printf("\n\t\tRate : %.2f",bur.rate);
	     		printf("\n\t\tQuantity : %d ml per bottle",bur.quantity);
	     		printf("\n\t\texpiry Date: %d years",bur.date);
		
 	 		printf("\n");
 	 		printf("\t\tEnter no .of units you want : ");
			    scanf("%d",&t);
			     sum=sum+(bur.rate*t);
			    
		}
				goto LOOP0;
		}
		
	}
	while(fread(&sto,sizeof(sto),2,s))
	{
		if(stricmp(medi,sto.name))
		{
			   
	       if(stricmp(sto.type,"Tablet")==0)
	       {
			 printf("\n");
			  printf("\n\t\tMedicine type : Stomach ache");
			    printf("\n\t\tName : %s",sto.name);
	     		printf("\n\t\tType : %s",sto.type);
	     		printf("\n\t\tRate : %.2f",sto.rate);
	     		printf("\n\t\tQuantity : %d tablets/bottle",sto.quantity);
	     		printf("\n\t\texpiry Date: %d years",sto.date);
			printf("\n");
			printf("\t\tEnter no .of units you want : ");
			    scanf("%d",&t);
				 sum=sum+(sto.rate*t);}
		
			else
	   {
			 printf("\n");
			  printf("\n\t\tMedicine type : Stomach ache");
			    printf("\n\t\tName : %s",sto.name);
	     		printf("\n\t\tType : %s",sto.type);
	     		printf("\n\t\tRate : %.2f",sto.rate);
	     		printf("\n\t\tQuantity : %d ml per bottle",sto.quantity);
	     		printf("\n\t\texpiry Date: %d years",sto.date);
 	 		printf("\n");
 	 		printf("\t\tEnter no .of units you want : ");
			    scanf("%d",&t);
			     sum=sum+(sto.rate*t);
		}
	     			goto LOOP0;
		}
		
	}
	while(fread(&joi,sizeof(joi),2,j))
	{
		if(stricmp(medi,joi.name))
		{
			    if(stricmp(joi.type,"Tablet")==0)
	       {
			 printf("\n");
			 printf("\n\t\tMedicine type : Joints and Pains");
			    printf("\n\t\tName : %s",joi.name);
	     		printf("\n\t\tType : %s",joi.type);
	     		printf("\n\t\tRate : %.2f",joi.rate);
	     		printf("\n\t\tQuantity : %d tablets/strip",joi.quantity);
	     		printf("\n\t\texpiry Date: %d years",joi.date);
		
			printf("\n");
			printf("\t\tEnter no .of units you want : ");
			    scanf("%d",&t);
				 sum=sum+(joi.rate*t);}
		
			else if(stricmp(joi.type,"ointment")==0 )
	   {
			 printf("\n");
			 printf("\n\t\tMedicine type : Joints and Pains");
			    printf("\n\t\tName : %s",joi.name);
	     		printf("\n\t\tType : %s",joi.type);
	     		printf("\n\t\tRate : %.2f",joi.rate);
	     		printf("\n\t\tQuantity : %d dml per tube",joi.quantity);
	     		printf("\n\t\texpiry Date: %d months",joi.date);
			
 	 		printf("\n");
 	 		printf("\t\tEnter no .of units you want : ");
			    scanf("%d",&t);
	               sum=sum+(joi.rate*t);	}
			else if(stricmp(joi.type,"spray")==0 )
	   {
			 printf("\n");
			 printf("\t\tMedicine type : Joints and Pains");
			    printf("\n\t\tName : %s",joi.name);
	     		printf("\n\t\tType : %s",joi.type);
	     		printf("\n\t\tRate : %.2f",joi.rate);
	     		printf("\n\t\tQuantity : %d ml per bottle",joi.quantity);
	     		printf("\n\t\texpiry Date: %d years",joi.date);
			
 	 		printf("\n");
 	 		printf("\t\tEnter no .of units you want : ");
			    scanf("%d",&t);
			     sum=sum+(joi.rate*t);
		}
		else{
			 printf("\n");
			 printf("\n\t\tMedicine type : Joints and Pains");
			    printf("\n\t\tName : %s",joi.name);
	     		printf("\n\t\tType : %s",joi.type);
	     		printf("\n\t\tRate : %.2f",joi.rate);
	     		printf("\n\t\tQuantity : %d ml per bottle",joi.quantity);
	     		printf("\n\t\texpiry Date: %d years",joi.date);
			
 	 		printf("\n");
 	 		printf("\t\tEnter no .of units you want : ");
			    scanf("%d",&t);
			     sum=sum+(joi.rate*t);
		}
	     			goto LOOP0;
		}
	}
	LOOP0:
	printf("\n");
	goto loopt;
				}

    case 2:
	{   
	int y;
	    system("cls"); 
		printf("\n\t\t\tNAME OF THE CUSTOMER : %s",obj.name);
		printf("\n\t\t\tCONTACT NO OF THE CUSTOMER : %lld",obj.cont);
		printf("\n\n\t\t\tTOTAL AMOUNT : %.2f",sum);
		loopc:
		printf("\n\n\n\n\t\tPress 1 to go to main menu and 0 to continue billing : ");
		scanf("%d",&y);
		if(y==0)
		intro();
		else if(y==1)
		bill();
		else
		{
			printf("\n\n\n\t\t\tWRONG OPTION. CHOOSE AGAIN...");
			goto loopc;
		}
			}
	fclose(p);
	fclose(f);
	fclose(d);
	fclose(k);
	fclose(s);
	fclose(j);
	fclose(u);
									
		}

	}
 	



