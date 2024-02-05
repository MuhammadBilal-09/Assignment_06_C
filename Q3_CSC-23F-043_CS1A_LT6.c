#include<stdio.h>
#include<math.h>

int main()
{
                  double a, b, c;
                  double discriminant, root_1, root_2, real_part, imaginary_part;

                  printf("Enter coefficients a, b and c: ");      
                  scanf("%lf %lf %lf", &a, &b, &c);

                  discriminant = b * b - 4 * a * c;

                  if(discriminant > 0)
                     {
                          root_1 = (-b + sqrt(discriminant) ) / (2 * a);
                          root_2 = (-b - sqrt(discriminant) ) / (2 * a);
                           printf("Roots are real and different: %.2lf and %.2lf\n", &root_1, &root_2);
                     }
                  else if(discriminant == 0)
                     {
                         root_1 = root_2 = -b / (2 * a);
                           printf("Roots are real and same: %.2lf and %.2lf\n", root_1, root_2);
                     }
                  else
                     {
                         double real_part = -b / (2 * a);
                         double imaginary_part = sqrt(- discriminant) / ( 2 * a);
                            printf("Roots are complex and different: %.2lf + %.2lfi and %.2lf - %.2lfi\n", real_part, imaginary_part, real_part, imaginary_part);
                     }

          return 0;
}