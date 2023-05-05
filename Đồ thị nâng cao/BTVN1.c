#include<stdio.h>
int main(){
	int t, n;
	scanf("%d%d", &t, &n);
	if(n%4 != 0){
		switch (t){
			case 1 :
			case 3 :
			case 5 :
			case 7 :
			case 8 :
			case 10 :
			case 12 : printf("Thang co 31 ngay"); break;
			case 2: printf("Thang co 28 ngay"); break;
			case 4 :
			case 6 :
			case 9 :
			case 11 : printf("Thang co 30 ngay"); break;
		}
	}
	else {
		switch (t){
			case 1 :
			case 3 :
			case 5 :
			case 7 :
			case 8 :
			case 10 :
			case 12 : printf("Thang co 31 ngay"); break;
			case 2: printf("Thang co 29 ngay"); break;
			case 4 :
			case 6 :
			case 9 :
			case 11 : printf("Thang co 30 ngay"); break;
	}
}
}
