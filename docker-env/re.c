#include <stdio.h>
#include <stdlib.h>

char key[4] = "NeSE";

int main(){
	char input[33] = "flag{okokokokokokokokokokokokok}";
	//scanf("Input your flag: %s", input);
	for(int i = 0; i < 32; i++)
	{
		input[i] = key[i%4] ^ input[i];
	}
	printf("Results:%s\n.", input);
}
