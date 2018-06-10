#include<stdio.h>
#include<stdlib.h>

void fibonacci(unsigned long int num);
void myCeil(double num);
void isPrime(unsigned int num);
void gcd(int num1, int num2);
void partitionArray(int *array, int n);

int main(){//common values, min diff
        fibonacci(11);   
	
	myCeil(7.03);
	myCeil(7.64);
	myCeil(0.12);
        myCeil(-0.12);
	myCeil(-7.1);
	myCeil(-7.6);

	isPrime(2);
	isPrime(3);
	isPrime(5);
	isPrime(8);
	isPrime(11343);
	isPrime(97);	

	gcd(36, 60);
	
	int * array = malloc(sizeof(int*)*100);
	array[0] = 2; array[1] = 4; array[2] = 5; array[3] = 10; array[4] = 9;
	partitionArray(array, 5); //2, 4, 5, 10, 9
	
}

void partitionArray(int *array, int n){
	int even[100];
	int evenCount = 0;

	int odd[100];
	int oddCount = 0;
	
	for(int i = 0; i < n; i++){
		if(array[i] % 2 == 0)
			even[evenCount++] = array[i];
		else
			odd[oddCount++] = array[i];
	}

	int count = 0;
	while(odd[count] != '\0'){
		array[count] = odd[count];
		count++;
	}
	int x = 0;
	while(even[x] != '\0'){
		array[count] = even[x];
		count++;
		x++;
	}

	count = 0;
	while(array[count] != '\0'){
		printf("%d\n", array[count++]);
	}
}

void gcd(int num1, int num2){
	int remainder;
	while(1){
		if(num1 > num2){
			remainder = num1 % num2;
			if(remainder == 0){
				if(num1 > num2){
                			printf("%d is the GCD.\n", num2);
        				break;
				}
        			else{
                 			printf("%d is the GCD.\n", num1);
        				break;
				}
			}
			num1 = num2;
			num2 = remainder;
		}
		else{
                        remainder = num2 % num1;
                        if(remainder == 0){
                                if(num1 > num2){
                                        printf("%d is the GCD.\n", num2);
                                        break;
                                }
                                else{
                                        printf("%d is the GCD.\n", num1);
                                        break;
                                }
                        }
                        num2 = num1;
                        num1 = remainder;
                }

	}
}

void isPrime(unsigned int num){
	int prime = 0;
	for(int i = 2; i < num; i++){
		if(num % i == 0){
			prime = 1;
		}
	}
	if(prime == 0)
		printf("%d is prime\n", num);
	else
		printf("%d is not prime\n", num);
}

//myCeil
void myCeil(double num){
	if(num > 0){
		printf("%d\n", ((int)num) + 1);
	}
	else{
		printf("%d\n", (int)num);
	}

}

//fibonacci
void fibonacci(unsigned long int num){
	int a = 1; int b = 1;
	int c = 0;
	for(int i = 2; i < num; i++){
		if(c == 0){
			a +=b;
			c = 1;
		}else{
			b+=a;
			c = 0;
		}
	}
	if(num == 1){
		printf("%d\n", a);
	}
	else if(num == 2){
		printf("%d\n", b);
	}else{
		if(c == 1){
			printf("%d\n", a);
		}
		else{
			printf("%d\n", b);
		}
	}
}  












