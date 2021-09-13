void main()
{
Int i,j,r1,r2,c1,c2,m1[20[20],m2[20[20],m3[20][20],k,sum,c1;
char c2;
do
{
        clrscr();
        printf(" Select any one option from the following\n")
            printf("1. Matrix addition\n 2. Matrix multiplication\n 3. Sum of diagonals of a matrix \n 4. Transpose of a matrix");
        scanf("%d", &c1) switch (c1)
        {
        case 1:
            printf("Enter the order of matrix 1");
            scanf("%d%d", &r1, &c1);
            printf("Enter the order of matrix 2");
            scanf("%d%d", &r2, &c2);
            printf("Enter the elements in to the matrix 1");
for(i=0;ifor(j=0;jscanf("%d",&m1[i][j]);
printf("Enter the elements in to the matrix 2");
for(i=0;ifor(j=0;jscanf("%d",&m2[i][j]);
for(i=0;i{
for(j=0;j{
                    m3[i][j] = m1[i][j] + m2[i][j];
}
}
printf("Sum of the above two matrices:\n");
for(i=0;i{
for(j=0;j{
                    printf("%d\t", m3[i][j]);
}
printf("\n");
}
break;
case 2: printf("Enter the order of the matrix 1");
scanf("%d%d",&r1,&c1);
printf("Enter the order of the matrix 2");
scanf("%d%d",&r2,&c2);
printf("Enter the elements in to the matrix 1");
for(i=0;ifor(j=0;jscanf("%d",&m1[i][j]);
printf("Enter the elements in to the matrix 2");
for(i=0;ifor(j=0;jscanf("%d",&m2[i][j]);
printf("Product of the above two matrices:\n");
for(i=0;i{
for(j=0;j{
                    m3[i][j] == 0;
for(k=0;k{
                        m3[i][j] = m3[i][j] + m1[i][k] * m2[k][j];
}
printf("%d\t",m3[i][j]);
}
printf("\n");
}
break;
case 3: printf("Enter the order of the matrix");
scanf("%d%d",&r1,&c1);
printf("Enter the elements in to the matrix");
for(i=0;ifor(j=0;jscanf("%d",&m1[i][j]);
sum=0;
for(i=0;i{
for(j=0;j{
                    If(i == j)
                    {
                        sum = sum + m1[i][j];
                    }
}
}
printf("Sum of diagonal elements of the above matrix=%d",sum);
break;
case 4: printf("Enter the order of the matrix");
scanf("%d%d",&r1,&c1);
printf("Enter the elements in to the matrix");
for(i=0;ifor(j=0;jscanf("%d",&m1[i][j]);
printf("Transpose of the above matrix:\n");
for(i=0;i{
for(j=0;j{
                    printf("%d\t", m1[i][j]);
}
printf("\n");
}
break;
default: printf("Inavalid choice");
        }
printf("Do you want to continue(y/n)";
scanf("%c",&c2);
}
while(c2=='y'||c2=='Y');
getch();
}
