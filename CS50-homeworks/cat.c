# include <cat.h>
# include <stdio.h>

int main(void)
{
    meow();
}

void meow(int n)
{
    for ( int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }
}
