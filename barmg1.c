#include<stdio.h>

main()
{
    float arabic, english, math, science, religion, sports, history;
    float sum;
    float average;

    printf("enter arabic");
    scanf("%f", &arabic);

    printf("enter english");
    scanf("%f", &english);

    printf("enter math");
    scanf("%f", &math);

    printf("enter science");
    scanf("%f", &science);

    printf("enter religion");
    scanf("%f", &religion);

    printf("enter sports");
    scanf("%f", &sports);

    printf("enter history");
    scanf("%f", &history);

    sum = arabic + english + math + science + religion + sports + history;
    average = sum / 7;

    printf("final sum = %f\t", average);

    return 0;
}


