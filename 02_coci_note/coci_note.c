#include <stdio.h>

enum {
	E_ASCENDING = 0,
	E_DESCENDING,
	E_MIXED,
	E_NONE,
};

static char *order[] = {
	"ascending",
	"descending",
	"mixed",
};

static void coci_note(void)
{
	unsigned int i;
	unsigned int o = E_NONE, o_tmp;
	unsigned int c, c_old;

	scanf("%u", &c_old);
	for (i = 1; i < 8; i++) {
		scanf("%u", &c);

		if (E_MIXED == o)
			continue;

		if (c > c_old)
			o_tmp = E_ASCENDING;
		else
			o_tmp = E_DESCENDING;

		if (E_NONE == o)
			o = o_tmp;
		else if (o != o_tmp)
			o = E_MIXED;

		c_old = c;
	}

	printf("%s\n", order[o]);
}

int main(int argc, char *argv[])
{
	unsigned int T;

	scanf("%u", &T);
	while (T--) {
		coci_note();
	}

	return 0;
}
