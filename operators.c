#include<stdio.h>
#include<conio.h>
void unary();
void binary();
void arithmetic();
void relational();
void logical();
void assignment();
void ternary();

void unary(){
    //  Unary Operators (Pre & Post)
    printf("---- Unary Operators (Pre & Post) ----\n");

    int x = 10;

    printf("value of x = %d\n", x);

    printf("Pre-Increment (++x) = %d\n", ++x);
    printf("Post-Increment (x++) = %d\n", x++);
    printf("Value of x after Post-Increment = %d\n", x);
    printf("Pre-Decrement (--x) = %d\n", --x);
    printf("Post-Decrement (x--) = %d\n", x--);

    printf("Value of x after Post-Decrement = %d\n\n", x);


}
void binary(){
    char ch;
    
    printf("------binary operators-----\n");
                printf("A.Arithmetic operators\n ");
                printf("B.relational operator\n");
                printf("C. logical operotor\n");
                printf("D.assignment operators\n");
                printf("enter choice\n");
                scanf(" %c",&ch);
switch(ch){ 
    case 'A': arithmetic(); break;
    case 'B': relational(); break;
    case 'C': logical(); break;
    case 'D': assignment(); break;
    default: printf("enter valid choice!!\n");
}
}
void arithmetic(){
   int a,b;
    printf("\n---- Arithmetic Operators ----\n");
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("Addition = %d\n",a+b);
    printf("Subtraction = %d\n",a-b);
    printf("Multiplication = %d\n",a*b);
    printf("Division = %d\n",a/b);
    printf("Modulus = %d\n",a%b); 
}
void relational(){
int a,b;
    printf("\n---- Relational Operators ----\n");
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("a < b = %d\n",a<b);
    printf("a > b = %d\n",a>b);
    printf("a <= b = %d\n",a<=b);
    printf("a >= b = %d\n",a>=b);
    printf("a == b = %d\n",a==b);
    printf("a != b = %d\n",a!=b);

}
void logical(){
int x;
    printf("\n---- Logical Operators ----\n");
    printf("Enter number: ");
    scanf("%d",&x);

    printf("(x>5 && x<10) = %d\n",(x>5 && x<10));
    printf("(x<5 || x>10) = %d\n",(x<5 || x>10));
    printf("!(x>5) = %d\n",!(x>5));
}
void assignment(){
int x;
    printf("\n---- Assignment Operators ----\n");
    printf("Enter value of x: ");
    scanf("%d",&x);

    x+=3;
    printf("x += 3 = %d\n",x);

    x-=2;
    printf("x -= 2 = %d\n",x);

    x*=2;
    printf("x *= 2 = %d\n",x);

    x/=2;
    printf("x /= 2 = %d\n",x);

    x%=3;
     printf("x %= 2 = %d\n",x);
     x&=2;
    printf("x &= 2 = %d\n",x);
    x|=2;
    printf("x |= 2 = %d\n",x);
    x^=2;
    printf("x ^= 2 = %d\n",x);
    x>>=2;
    printf("x >>= 2 = %d\n",x);
    x<<=2;
    printf("x <<= 2 = %d\n",x);


}

void ternary(){
    int age;
    printf("\n====ternary operators=====\n");
    printf("Enter your age");
 scanf("%d",&age);
 (age>=18)? (printf("eligible for voting")) : (printf("not eligible for voting"));

}
int main(){
    char choice;
    do{
                printf("\n* * * * MAIN MENU * * * *\n");
                printf("1.unary operator\n");
                printf("2.binary operator\n");
                printf("3.ternary operators\n");
                printf("0.exit\n");
                 printf("enter choice");
                 scanf(" %c",&choice);
                 switch(choice){
                    case '1':  unary(); break;
                    case '2' : binary(); break;
                    case '3': ternary(); break;
                    case '0': printf("exiting.....\n"); break;
                    default:
                    printf("enter valid choice!!\n");


                 }
    }while(choice != '0');
    
    return 0;
}