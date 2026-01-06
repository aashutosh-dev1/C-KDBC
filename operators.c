#include<stdio.h>

int main(){
    int res ;
    int a =10;
    int b =21;
    //Arithmetic operators
    printf("Addition: %d\n",a+b);
    printf("Multiplicatoin: %d\n",a*b);
    printf("Subtraction: %d\n",a-b);
    printf("Division: %d\n",a/b);
    printf("Remainder: %lf\n",a%b);

//Relational Operators
// Used to compare two values. Result is true (1) or false (0).
// Operator	Meaning
// ==	Equal to
// !=	Not equal to
// >	Greater than
// <	Less than
// >=	Greater than or equal
// <=	Less than or equal
printf("Greater %d \n",a>b);  
printf("Less than %d\n",a<b); 
printf("Equals to%d\n",a==b); 
printf("Not Equals to %d\n",a!=b); 
printf("Greater or equals%d\n",a>=b); 
printf("Less or equals%d\n",a<=b); 

// 3. Logical and Boolean Operators
// Used to combine multiple conditions.
// Operator	Meaning
// &&	Logical AND
// !	Logical NOT

printf("Logical AND %d\n",(a>b)&&(a<b));
printf("Logical OR %d\n",(a>b)||(a<b));

//And logic
printf("Logical AND %d\n",1&&0);
printf("Logical AND %d\n",0&&0);
printf("Logical AND %d\n",1&&1);

//Or logic
printf("Or  %d\n",1||0);
printf("Or  %d\n",0||0);
printf("Or  %d\n",1||1);


// 4. Assignment Operators
// Used to assign values to variables.
// Operator	Example	Meaning
// =	a = 5	Assign
// +=	a += 3	a = a + 3
// -=	a -= 2	a = a - 2
// *=	a *= 4	a = a * 4
// /=	a /= 2	a = a / 2
// %=	a %= 3	a = a % 3

  int z = 1;
   z += 3 ;
   printf(" Assigning addition%d\n", z);
    z = z+3;
   printf(" Assigning addition2 %d\n", z);

    z*=3;
   printf(" Multiplication %d\n", z);
    z= z*4;
   printf(" Multiplication2 %d\n", z);

//ternary operator Short form of if-else.
// condition ? expression1 : expression2;
int age =20; 
(age>=20)? printf("Eligible\n"): printf("Not eligible \n");

int input ;
char operator;
scanf(" %c", &operator, &b);
res = (operator == '+')?a+b:
        (operator == '-')? a-b:
             (operator == '/')? a/b
             : 0;
//or 2nd way           
if(operator == '+'){
    //condition
}else if(operator == '-'){
    //condition
}else if (operator == '/'){
    //condtion
}else{
    return 0;
}

// increment and decrement operators
// Used to increase or decrease the value of a variable by 1.
// Operator	Meaning
// ++	Increment
// --	Decrement

//Write a program to demonstrate increment and decrement operators
int count =5;
printf("Initial count: %d\n", count);
count++;
printf("After increment: %d\n", count);
count--;
printf("After decrement: %d\n", count);
printf("Final count: %d\n", count);

 
return 0;

}