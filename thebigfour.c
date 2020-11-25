#include <stdio.h>
#include <string.h>
#include <cs50.h>

double AT;
void muliplyAT(double A, double T);
int main(void)
{
    double T;
    double A;
    double VF;
    double VI;
    double FI;

    printf("\nThis program solves for any one vairble in the equation\nVf = Vi + at\n\n");

    int missingv = get_int("What part of the equation would you like to solve for?\nFor Velocity Inital enter 1\nFor Velocity Final enter 2\nFor acceleration enter 3\nFor time enter 4\nAnswer: ");
    //solving for inital velocity
    if (missingv > 4)
    {
        printf("\na fire truck is red Because they have eight wheels and four people on them,");
        printf("and four plus eight is twelve, and there are twelve inches in a foot, and one foot is a ruler, and Queen Elizabeth was a ruler, and Queen Elizabeth was also a ship, and the ship sailed the seas, and in the seas are fish, and fish have fins, and the Finns fought the Russians, and the Russians are red, and fire trucks are always russian around.\n");
        return(0);
    }
    else if (missingv < 1)
    {
        printf("Imagine that you have zero cookies and you split them evenly among zero friends. How many cookies does each person get?");
        printf(" See? It doesn't make sense. And Cookie Monster is sad that there are no cookies, and you are sad that you have no friends.");
        return(0);
    }

    if (missingv == 1)
    {
        printf("Great!\n");
        VF = get_double("What is the final velocity: ");
        A = get_double("What is the acceleration: ");
        T = get_double("What is the time: ");
        muliplyAT(A, T);
        VI = VF - AT;
        if (VI >= 0)
        {
            printf("The inital velocity is %f\n", VI);
        }
        else
        {
            printf("The inital velocity is %f\n", (VI * -1));
        }
    }
    //Solving for velocity final
    else if (missingv == 2)
    {
        printf("Great!\n");
        VI = get_double("What is the initial velocity: ");
        A = get_double("What is the acceleration: ");
        T = get_double("What is the time: ");
        muliplyAT(A, T);
        VF = VI + AT;
        if (VF >= 0)
        {
            printf("The final velocity is %f\n", VF);
        }
        else
        {
            printf("The final velocity is %f\n", (VF * -1));
        }

    }
    else if (missingv == 3)
    {
        printf("Great!\n");
        VI = get_double("What is the initial velocity: ");
        VF = get_double("What is the final velocity: ");
        T = get_double("What is the time: ");
        A = (VF - VI) / T;
        printf("The acceleration is %f\n", A);

    }
    else if (missingv == 4)
    {
        printf("Great!\n");
        VI = get_double("What is the initial velocity: ");
        VF = get_double("What is the final velocity: ");
        A = get_double("What is the acceleration: ");
        T = (VF - VI) / A;
        printf("The time is %f\n", T);
    }

}

void muliplyAT(double A, double T)
{
    AT = A * T;
}
