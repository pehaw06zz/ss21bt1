#include<stdio.h>
int main(){
	FILE *f;
	f=fopen("bt01.txt", "w");
	if(f==NULL){
		printf("khong the mo file");
		return 1;
	}
	char s[100];
	printf("nhap vao 1 chuoi bat ky: \n");
	fgets(s,sizeof(s),stdin);
	fprintf(f,"%s\n",s);
	fclose(f);
	printf("ghi voa file thanh cong");
	return 0;
	
}
