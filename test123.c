#include <stdio.h>
int main()
{
    int note500,note100,note10,note5,note2,note1,amount;
    scanf("%d",&amount);
    note500=0;
    note100=0;
    note10=0;
    note5=0;
    note2=0;
    note1=0;
    if(amount>=50){
        note500=amount/50;
        amount%=50;}
    if(amount>=20){
        note100=amount/20;
        amount%=20;}
    if(amount>=10){
        note10=amount/10;
        amount%=10;}
    if(amount>=5){
        note5=amount/5;
        amount%=5;}
    if(amount>=2){
        note2=amount/2;
        amount%=2;}
    if(amount>=1){note1=amount/1;}
    printf("50:%d",note500);
    printf("\n20:%d",note100);
    printf("\n10:%d",note10);
    printf("\n5:%d",note5);
    printf("\n2:%d",note2);
    printf("\n1:%d",note1);
	return 0;
}