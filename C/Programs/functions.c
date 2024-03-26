#include <stdio.h>

// Encoded by Pranshu
// Dated 13 June 2023
// Objective Functions
// subject Unit Converter

//Declaring functions

float cmtoinch(float num)
{
    float cf=0.394;       //Declaring conversion factor identifier
    float ans=num*cf;
    return ans;
}

float kmtomile(float num)
{
    float cf=0.621;
    float ans=num*cf;
    return ans;
}

float inchtofeet(float num)
{
    float cf=0.083;
    float ans=num*cf;
    return ans;
}

float poundtokg(float num)
{
    float cf=0.454;
    float ans=num*cf;
    return ans;
}

float inchtometer(float num)
{
    float cf=0.025;
    float ans=num*cf;
    return ans;
}

//__main__

int main(int argc, char const *argv[])
{
    float number;
    int ctype;              //Declaring identifier for user's choice
    printf("Which converter do you want to use \n");
    printf("Press 1 for cm to inches conversion \n");
    printf("Press 2 for kms to miles conversion \n");
    printf("Press 3 for inches to feet conversion \n");
    printf("Press 4 for pound to kgs conversion \n");
    printf("Press 5 for inches to meters conversion \n");
    printf("Enter choice\n");
    scanf("%d", &ctype);
    printf("Enter number: \n");
    scanf("%f", &number);
   
    float output;           // Declaring answer identifier


    if (ctype==1)
    {
        output=cmtoinch(number);
        goto label;
    }
    
    else if (ctype==2)
    {
        output=kmtomile(number);
        goto label;
    }
    
    else if (ctype==3)
    {
        output=inchtofeet(number);
        goto label;
    }

    else if (ctype==4)
    {
        output=poundtokg(number);
        goto label;
    }

    else if (ctype==5)
    {
        output=inchtometer(number);
        goto label;
    }

    else
    {
        printf("Sahi se number daal abhi mera bakchodi karne ka koi mood nai hai");
    }

    label:
        printf("The desired result is %f", output);
    
    
    return 0;
}