#include "../main.h"

int main(void)
{
        int len;
        int len2;

        len = _printf("Let's try to %s a %s %s.\n", "printf", "simple", "sentence");
        len2 = printf("Let's try to printf a simple sentence.\n");
        _printf("String:[%s]\n", "I am a string !");
        printf("%d - %d\n", len, len2);
        _printf("Character:[%c]\n", 'H');
        printf("Character:[%c]\n", 'H');
        return (0);
}
