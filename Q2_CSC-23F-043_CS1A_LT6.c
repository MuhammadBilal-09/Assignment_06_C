#include<stdio.h>
#include<math.h>
int main ()
{
                float side_length, surface_area, volume;

                printf("Enter the side length of the cube: ");
                scanf("%f", &side_length);

                if (side_length < 0)
                  {
                         printf("Side length cannot be negative.\n");           
                  }
                else
                  {
                         float surface_area = 6 * pow(side_length, 3);      // Calculation of Surface Area

                         float volume = pow(side_length, 3);                      // Calculation of Volume

                         printf("Surface Area of the cube is: %.2f\n", surface_area);
                         printf("Volume of the cube is: %.2f\n", volume);
                  }

              return 0;
}