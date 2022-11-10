//
// Created by DELL on 2022/11/10.
//
//#include"test.h"
//void test01()
//{   //3.5 正确
//    //一维数组翻车了，实现起来还有点麻烦
//    //在浏览器上考拿到了二维数组
//    int a[4][4]={{0}};
//    int i,j,k;
//    int row[4]={0};
//    int column[4]={0};
//    int diagonal[2]={0};
//    printf("Enter numbers:\n");
//    for(i=0;i<4;i++)
//    {
//        for(j=0;j<4;j++)
//        {
//            scanf("%d",a[i]+j);
//        }
//    }
//    for(i=0;i<4;i++)
//    {
//        for(j=0;j<4;j++)
//        {
//            printf("%-2d ",a[i][j]);
//            row[i]+=a[i][j];
//            column[j]+=a[i][j];
//            if(i == j)
//            {
//                diagonal[0] += a[i][j];
//            }
//            if(3 == (i+j))
//            {
//                diagonal[1] += a[i][j];
//            }
//        }
//        printf("\n");
//    }
//
//    printf("Row sums: %d %d %d %d\n",row[0],row[1],row[2],row[3]);
//    printf("Column sums: %d %d %d %d\n",column[0],column[1],column[2],column[3]);
//    printf("Diagonal sums: %d %d ",diagonal[0],diagonal[1]);
//}

//    //3.1
//    printf("%06d,%4d\n",86,1040);
//    printf("%12.5e\n",30.235);
//    printf("%-6.2g\n",.00000009979);
//    //3.2
//    float x = .11111;
//    printf("x=%-8.1e\n",x);
//    printf("x=%10.6e\n",x);
//    printf("x=%-8.3f\n",x);
//    printf("x=%6.0f",x);
//    //3.3
//    int a,b;
//    float f;
//    printf("input f:");
//    scanf("%f",&f);
//    printf("f=%f",f);
//    printf("input f:");
//    scanf("%f ",&f);
//    printf("f=%f",f);
//    printf("input number:");
//    scanf("%d-%d",&a,&b);
//    printf("a=%d,b=%d\n",a,b);
//    printf("input number:");
//    scanf("%d -%d",&a,&b);
//    printf("a=%d,b=%d\n",a,b);
//    //3.4
//    int i,j;
//    float x;
//    scanf("%d%f%d",&i,&x,&j);
//    printf("i=%d\nj=%d\nx=%f",i,j,x);
//    //3.5
//    float x,y;
//    int i;
//    scanf("%f%d%f",&x,&i,&y);
//    printf("%f\n%f\n%d\n",x,y,i);

//    //3.1
//    int i,j,k;
//    printf("Enter a data (MM/DD/YYYY): ");
//    scanf("%d/%d/%d",&i,&j,&k);
//    printf("You entered the data: %d/%d/%d",k,i,j);

//    //3.2
//    int y,d,m,n;
//    float p;
//    printf("number:");
//    scanf("%d",&n);
//    printf("price:");
//    scanf("%f",&p);
//    printf("date:");
//    scanf("%d/%d/%d",&m,&d,&y);
//    printf("Item\tUnit   \tPurchase\n");
//    printf("    \tPrice  \tDate\n");
//    printf("%4d\t$%-6.2f\t%d/%d/%d",n,p,m,d,y);

//    //3.4
//    int n1,n2,n3,n4,n5;
//    printf("ISBN:");
//    scanf("%d-%d-%d-%d-%d",&n1,&n2,&n3,&n4,&n5);
//    printf("GS1 prefix: %d\n",n1);
//    printf("Group identifier: %d\n",n2);
//    printf(("Publisher code: %d\n"),n3);
//    printf("Number: %d\n",n4);
//    printf("Check dogit: %d\n",n5);

//    //3.5 err
//    int a[16]={0};
//    int i,j,k,m;
//    int row[4]={0};
//    int column[4]={0};
//    int diagonal[2]={0};
//    printf("Enter 16 numbers:");
//    j = k = m = 0;
//    for(i=0;i<16;i++)
//    {
//    scanf("%d",a+i);
//
//    row[j] += a[i];
//    if(0 == (1+i)%4)
//    j++;
//    while(0 == (1+i)%4)
//    {
//    column[k] += a[i];
//    k++;
//    if(0==(k+1)%4)
//    k=0;
//    }
//    while(0 == i%5)
//    {
//    diagonal[1]+=a[i];
//    }
//    while(0 == i%3 && i!=15)
//    {
//    diagonal[0]+=a[i];
//    }
//    }
//    for(i=0;i<4;i++)
//    {
//    printf("%2d %2d %2d %2d\n", a[0+i], a[1+i], a[2+i], a[3+i]);
//    }
//    printf("Row sums: %d %d %d %d",row[0],row[1],row[2],row[3]);
//    printf("Column sums: %d %d %d %d",column[0],column[1],column[2],column[3]);
//    printf("Diagonal sums: %d %d",diagonal[0],diagonal[1]);
//    }