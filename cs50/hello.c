#include<cs50.h> // we cant use cs50 library because not included //
#include<stdio.h>

int main(void)
{
    string answer = get_string("What's your name? ");
    printf("hello, %s", answer);
}