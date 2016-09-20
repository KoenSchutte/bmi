#include <stdio.h>

main()
{
    float lengte;
    float gewicht;
    float bmi;
    float start;
    char keuze;

void bereken(){
    printf("Enter your height: ");
    scanf(" %f", &lengte);

    printf("\nEnter your weight: ");
    scanf(" %f", &gewicht);

        bmi = (gewicht) / (lengte * lengte);

        printf("\nJe BMI is: %.0f", bmi);

        if(bmi < 18.5){
            printf("\nJe hebt ondergewicht");
        } else if(bmi > 18.5 && bmi < 24.9){
            printf("\nJe hebt een normaal gewicht");
        }else if(bmi > 25 && bmi < 29.9){
            printf("\nJe hebt overgewicht, je mag niet dikker worden");
        } else if (bmi > 30 && bmi < 39.9){
            printf("\nJe hebt obesitas");
        } else if (bmi > 40){
            printf("\nJe gaat waarschijnlijk zo dood, dus geniet nog even van je leven.");
        }
 }
 bereken();
 while(1 == 1){
        scanf("%c", &keuze);
        printf("\nwilt u opnieuw uw BMI berekenen? (Y/N)\n");
        scanf("%c", &keuze);
        if(keuze == 'y' || keuze == 'Y'){
            bereken();
        } else if (keuze == 'n' || keuze == 'N'){
            return 0;
        } else {
            printf("Oncorrect, probeer het opnieuw\n");
        }
 }
 }
