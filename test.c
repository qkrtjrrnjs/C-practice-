#include<string.h>
#include<stdio.h>

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();

int main(){
}


void ex1(){
	int c;
	while((c = getchar()) != EOF){
                putchar(c);
        }
        c = getchar() != EOF;
        printf("%d%d",EOF, c);
}
void ex2(){
	long nc;
	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}

void ex3(){
	char * c = "hello";
	printf("%c",c[1]);
	float a[1], sum;
	for(int i = 0; i < 2; ++i)
	{
		printf("Enter num: "); 
		scanf("%f", &a[i]);
		getchar();sum+=a[i];
	}
	printf("Sum: %.6f\n", sum);
}

void ex4(){

	char x[] = "test string";
	printf("%s\n",x);
	int s = strlen(x) + 1;
	printf("%d\n",s);	
}
