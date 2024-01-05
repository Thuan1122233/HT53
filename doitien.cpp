#include<stdio.h>

int main(){
	int tien[] = {500, 200, 100 ,50, 20, 10, 5, 2, 1};
	int tiendoi,  to;
	printf("nhap so tien muon doi :");
	scanf("%d", &tiendoi);

	while(tiendoi)
	{
		for(int i = 0 ;i < 9; i++)
		{
			to = tiendoi/tien[i];
			if(to != 0 ){
				printf("\nco %d to %d", to , tien[i]);
			}
			tiendoi=tiendoi - to *tien[i];
		}
		
		
		
	}
		
	}
	
	
	
	
	

