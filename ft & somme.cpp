#include<stdio.h>
	int n,t[20],i;
	
void remplissage(){
	for (int i=0;i<n;i++){
 		printf("la valeur %d : ",i+1);
 		scanf("%d",&t[i]);
	 }
}
int somme(int t[]){
	int s;
	s=0;
	for(i=0;i<n;i++){
		s=s+t[i];
	}
	//printf("la somme est : %d = %d",s);
	return s;
}

int max (){
	int m,i;
	m=t[0];
	for(i=1;i<n;i++){
		if(t[i]>m){
			m=t[i];
		}
	}
	printf("le plus grand element dans le tableau est : %d\n",m);
} 
int min (){
	int m,i;
	m=t[0];
	for(i=1;i<n;i++){
		if(t[i]<m){
			m=t[i];
		}
	}
	printf("le plus petit element dans le tableau est : %d\n",m);
} 

int affichage(){
	for(i=0;i<n;i++){
		return t[i];
	}
}

int main(){
	int x,s,m,mn;
	printf("donner le nombre d\'elements du tableau : ");
	scanf("%d",&n);
	remplissage();
	printf("la somme est = %d\n",somme(t));
	x=affichage();
	m=max();
	mn=min();
	return 0;
}




