 #include <stdio.h>
 
 main()
{
    int f1 = 0, f2 = 1, f3, num, count = 0;
 
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("First %d FIBONACCI numbers are ...\n", num);
    //printf("%d\n", fib1);
    printf("\n%d", f2);
    count = 2; /* fib1 and fib2 are already used */
    while (count < num)
    {
        f3 = f1 + f2;
        count++;
        printf("\t%d", f3);
        f1 = f2;
        f2 = f3;
   }
}
