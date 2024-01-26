#include <stdio.h>

void dec2hexa (int n){
	if (n != 0){
		dec2hexa (n/16);
		if (n%16>=0 && n%16<=9)
		  printf ("%d",n%16);
		else switch (n%16){
		       case 10: printf ("A"); break;
		       case 11: printf ("B"); break;
		       case 12: printf ("C"); break;
		       case 13: printf ("D"); break;
		       case 14: printf ("E"); break;
		       case 15: printf ("F"); 
	        }
  }
}

int main (){
	int num;
	do {
  	printf ("Digite um numero maior que zero (0 encerra o programa): ");
		scanf ("%d",&num);
	  if (num > 0){
		  printf ("%d na base 10 -> ",num);
		  dec2hexa(num);
		  printf (" na base 16\n\n");
	  }
  } while (num != 0);
}
