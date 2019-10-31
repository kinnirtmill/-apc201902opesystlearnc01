
  #include <stdio.h>

  // Program entry point
     int main() {
  // Says Hello
     printf("Hello, world!\n");

     float farenhite, celsius;
     printf("Enter degree in farenhite\n");
     scanf("%f", &farenhite);

     celsius=(float)5/9*(farenhite-32);
     printf("result=%f\n", celsius);
     

  // Terminate main()
     return 0;
  // End of main()
 
}
