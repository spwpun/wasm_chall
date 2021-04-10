#include <stdio.h>
#include <emscripten/emscripten.h>
#include <string.h>

char key[4] = "NeSE";
int xor_data[15] = {40, 9, 50, 34, 53, 43, 54, 22, 11, 58, 42, 60, 42, 22, 46};

int main() {
    printf("Maybe you should know more about WASM!\n");
}

#ifdef __cplusplus
extern "C" {
#endif

EMSCRIPTEN_KEEPALIVE char *check_flag(char *flag) {
    int i;
	for(i = 0; i < 15; i++)
	{
		if ((flag[i]^key[i%4]) != xor_data[i])
		{
			return "Oh!!!you don't love NeSE much.\n";
		}
	}
	return "Congratulations! You know more about WASM!\n";
}

#ifdef __cplusplus
}
#endif
