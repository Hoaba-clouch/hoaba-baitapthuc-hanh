#include<stdio.h>
int main(){
	int  type;
	float dadoi ,choie ;
	double usd_to_vnd = 23500, 
	      eur_to_vnd = 25000,
	      gbp_to_vnd = 28000, 
	    jby_to_vnd = 180;
	     printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
	printf("1. USD to VND\n");
	printf("2. EUR to VND\n");
	printf("3. GBP to VND\n");
	printf("4. JPY to VND\n");
	printf("5. VND to USD\n");
	printf("6. VND to EUR\n");
	printf ("7. VND to GBP\n");
	printf ("8. VND to JPY\n");
	printf ("nhap don vi can chuyen doi 1 to 8");
	scanf("%d",&type);
printf("moi ban nhap vao so tien can doi");
scanf("%f",&choie);
	switch (type ) {
		case 1:
			dadoi= choie* usd_to_vnd;
			printf("%.2f USD = %.2f vnd", choie, dadoi );
			break;
		case 2:
				dadoi= choie* eur_to_vnd;
						printf("%.2f eur = %.2f vnd", choie,dadoi );
			break;
		case 3:
				dadoi= choie*gbp_to_vnd;
						printf("%.2f gbd = %.2f vnd", choie,dadoi );
			break;
		case 4:
						dadoi= choie* jby_to_vnd;
								printf("%.2f jby = %.2f vnd", choie,dadoi );
					break;
	    case 5:
					dadoi= choie/usd_to_vnd ;
							printf(" %.2f vnd = %.2f usd", choie, dadoi );
				break;
		case 6:
							dadoi= choie/eur_to_vnd ;
									printf(" %.2f vnd = %.2f eur", choie, dadoi );
							break;	
		case 7:
					dadoi= choie/gbp_to_vnd ;
							printf(" %.2f vnd = %.2f gbp", choie, dadoi );
				break;
		case 8:
							dadoi= choie/jby_to_vnd ;
									printf(" %.2f vnd = %.2f jby", choie, dadoi );
							break;					
		default:
			printf ("lua ch?n khong hop le ");
			break;
	}
  return 0;	
}
