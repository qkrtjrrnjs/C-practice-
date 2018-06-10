#include<stdio.h>
#include<stdlib.h>

void countBits(unsigned int n){
	unsigned int count = 0;

	while(n){
		count++;
		n >>= 1;
	}
	printf("Number of 0s and 1s: %d\n", count);
}

void inverse_bits(unsigned int n){
	int * inverse = (int*)malloc(sizeof(int)*1000);
	int count = 0;
	while(n){
		if(n % 2 == 0)
			inverse[count++] = 1;
		else{
			inverse[count++] = 0;
		}
		n >>= 1;
	}
	for(int i = 3; i >= 0; i--){
		printf("%d", inverse[i]);
	}
	printf("\n");
}

void printBits(unsigned int bitmap){
	int * bits = (int*)malloc(sizeof(int) * 1000);
	int count = 0;;
	
	while(bitmap != 0){
		bits[count++] = bitmap % 2;
		bitmap = (int)(bitmap / 2);
	}
	
	for(int i = 3; i >= 0; i--){
		printf("%d", bits[i]);
	}
	printf("\n");
	
}

void setBitAt( unsigned int *bitmap, int i, int bitValue )
{   
        *bitmap ^= (-bitValue ^ *bitmap) & (1 << i);

}

int getBitAt( unsigned int bitmap, unsigned int i) {
        
	int result;
        result = (bitmap >> i) & 1;
        return result;
}

int maxContinuousOnes(unsigned int bitmap, int * position) {

	int count = 0;
        int temp = 0;
        int index = 0;
        int i = 0;
    
        while(bitmap){  
                if(bitmap % 2 != 0)
                        count++;
                else{
                        if(count > temp){
                                temp = count;
                                position[0] = i - count;
                        }   
                        count = 0;
                }   
                bitmap >>= 1;
                i++;
        }   
        if(count > temp){
              temp = count;
              position[0] = 31 - count;
        }   
        return temp; 
}

	
int main(){
	countBits(13);
	inverse_bits(13);
	printBits(13);
}









