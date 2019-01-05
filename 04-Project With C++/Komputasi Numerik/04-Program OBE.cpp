#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<algorithm>
using namespace std;
int n,opt,i,ii,minn,pivot;
float x[100][100];
void printmatriks(){
	puts("");
	for(int i=0;i<n;i++){
		for(int ii=0;ii<n+1;ii++){
			printf("%g\t\t",x[i][ii]);
		}
		puts("");
	}
}
void generate(){
	for(int i=0;i<n;i++){
			for(int ii=0;ii<n+1;ii++){
				minn=(-1)*(rand()%2);
				if(!minn)minn=1;
				x[i][ii]=(minn)*(rand()%10);
			}
		}
}
void tuker(int start){
	bool found=false;
	for(int i=start+1-pivot;i<n;i++){
		if(x[i][start]){
			for(int ii=0;ii<n+1;ii++){
				swap(x[start-pivot][ii],x[i][ii]);
			}
			found=true;
			printf("R[%d] <-> R[%d]",start+1,i+1);
			printmatriks();
			break;
		}
	}
	if(!found){
		pivot++;
		tuker(start+pivot);
	}
}
void inputmatriks(){
	for(int i=0;i<n;i++){
		for(int ii=0;ii<n+1;ii++){
			scanf("%f",&x[i][ii]);
		}
	}
}
void leading(int t){
	//printf("leading:%d\n",t);
	float q=x[t][t];
	for(int i=n;i>=0;i--){
		x[t][i]=x[t][i]/q;
	}
	printf("R[%d]=R[%d]/%g",t+1,t+1,q);
	printmatriks();
}
void reducting(int t){
	//printf("reducting:%d\n",t);
	for(int i=0;i<n;i++){
		if(i==t)continue;
		float q=x[i][t];
		if(x[i][t]){
			for(int ii=n;ii>=0;ii--){
				x[i][ii]=x[i][ii]-q*x[t][ii];
			}
			printf("R[%d]=R[%d]-(%g)R[%d];\t",i+1,i+1,q,t+1);
			printmatriks();
		}
	}
}
int istotrowzero(int t){
	for(int i=0;i<n;i++){
		if(x[t][i])return 0; 
	}
	return 1;
}
main(){
	srand(time(NULL));
	opt=1;
	while(opt==1){
	system("cls");
	printf("Konversi matriks ke matriks baris eselon tereduksi.\n[1].Random\n[2].Manual\nInput=");
	scanf("%d",&opt);
	printf("Matriks ber-ordo n x n.\nn=");
	scanf("%d",&n);
	if(opt==1)generate();else inputmatriks();
	if(opt==1)
		printmatriks();
	for(i=0;i<n;i++){
		if(!x[i][i+pivot]){
			tuker(i+pivot);
		}
		if(!x[i][i+pivot]){
			if(istotrowzero(i)&&x[i][n]!=0){
				printf(".\'. Tidak ada solusi\n");
				break;
			}else{
				puts("");
				printf(".\'. Banyak solusi\n");
				for(int ii=0;ii<n;ii++){
					if(ii<i){
						printf("X[%d]: %g",ii+1,x[ii][n]);
						for(int iii=i;iii<n;iii++){
							printf("-(%g%c)",x[ii][iii],97+iii-i);
						}
						printf("\t");
					}else{
						printf("X[%d]: %c\t",ii+1,97+ii-i);
					}
				}
				puts("");
				break;
			}
		}
		if(x[i][i+pivot]!=1){
			leading(i+pivot);
		}
		reducting(i);
		if(i==n-1){
			puts("");
			for(ii=0;ii<n;ii++){
				printf("X[%d]: %g\t|\t",ii+1,x[ii][n]);
			}
			puts("");
		}
	}
	printf("\nretry?");
	scanf("%d",&opt);
}
}
