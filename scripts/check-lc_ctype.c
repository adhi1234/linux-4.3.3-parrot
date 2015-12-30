#include <locale.h>

int main(void)
{
	return !setlocale(LC_CTYPE, "");
}
