// strings.c -- uses string formatting

#include <stdio.h>

#define BLURB "Authentic imitation!"

int main() {

	printf("\n/%2s/\n", BLURB);
	printf("/%24s/\n", BLURB);
	printf("%24.5s/\n", BLURB);
	printf("/%-24.5s/\n", BLURB);

	printf("\n");

	return 0;
}
