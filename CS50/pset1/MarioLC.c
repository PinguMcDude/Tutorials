#include <stdio.h>
#include <cs50.h>

/*
I have to fix:
-
*/

int main(void)
{
  while (1)
  {
    int height = get_int("Height: ");

    if (height > 3 && height < 23)
    {
      for (int i = 0; i != height; i++)
      {
        for (int x = 0; x != i + 1; x++)
        {
          printf("#");
        }
        printf("\n");
      }
    }
    else
    {
      printf("Invalid number, please try again\n");
    }
  }
}
