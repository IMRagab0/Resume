#include <stdio.h>
#include <math.h>

void Partial_Sum()
{
    printf("======== Partial Sum ========\n");

    printf("       n\n");
    printf("     ___\n");
    printf("     \\        _____       x^n\n");
    printf("Cn =  >     \\/ r-1    ----------- \n");
    printf("     /___                n + 1\n");
    printf("     r=1\n");

    int n;
    float x=0.2;
    float result;
    int j,i;
    float equation;
    short int buffer;
    
    printf("\nEnter the n ==> ");
    buffer =scanf("%d",&n);
    while(buffer !=1 || n<0)
    {
        while(getchar() != '\n');
        printf("Invaild number. Enter postive number : ");
        buffer =scanf("%d",&n);
    }


    float matrix[5][n];
    float values [5]={0.2, 0.4, 0.6, 0.8, 1.0};

    for(j=0;j<5;j++){
        x= values [j];
        for(i=0;i<n;i++){
            result=0.0;
            for(int r=1;r<=i+1;r++){
                equation = (   (sqrt(r-1)*(pow(x,i +1)))/(i+2)  );
                result += equation;
            }      
                matrix[j][i]= result;
        }
    }
    
    
    printf("\n");
    for(int f=0;f<n;f++)
        printf("\t\tC%d",f+1);
    printf("\n");
    
    for (i = 0; i < 5; i++) {
        
        printf("X = %.1f\t\t",values[i]);
        for (j = 0; j < n; j++) {
            printf("%2.4f\t\t", matrix[i][j]); 
        }
        printf("\n");
    }
    
}



void factorial()
{
    short int number;
    short int buffer;
    printf("======== factorial ========\n");

    printf("Enter a number (0-20)==> ");
    buffer= scanf("%hd", &number);


    while(buffer !=1 || number <0 || number > 20)
    {
        while(getchar() != '\n');

        printf("Invaild number you shoud enter 0 to 20"); 
        printf("\nEnter a number ==> ");
        buffer= scanf("%hd", &number);

    }

    
    unsigned long long int result=1;

    for(int i = 1; i <= number; i++)
    {  
        result *= i;
    }
    printf("The result is: %llu\n", result);

}



int main()
{
    short int input;
    short int buffer;
    while(input!= 3){
        
        printf("\n======== Chose List ========\n");
        printf("1- factorial\n2- Partial Sum\n3- Exit");
        printf("\nEnter the numeber ==> ");
        
        buffer = scanf(" %hd",&input);
    
        while(buffer != 1 || (input != 1 && input!= 2 && input !=3) )
        {
            while(getchar() != '\n');
            
            printf("Invalid number.\nEnter number again ==> ");
            buffer= scanf(" %hd",&input);   
        }
    
        if(input == 1)
            factorial();
        else if (input == 2)
            Partial_Sum();
        else if (input== 3)
            return 0;
    }
    return 0;
}
