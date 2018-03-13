#include <stdio.h>
#include <cs50.h>

/*
I have to fix:
- Even though I am asking the program to only execture the for loop when height is more than 3 and less than 23, it
still executes it anyways.
*/

int main(void)
{

  int height = get_int("Height: ");

//It is the || operator that messes with it
  if (height > 3 || height < 23)
  {
    printf("worked\n");
    /*
    for(int i; i != height; i++)
    {
      printf("#\n");
    }
    */
  }
  else
  {
    printf("fail\n");
  }
}
