// // Q=2)Sum  of Two Number


// # include<stdio.h>
// float main(){
//  float a,b;
//  printf("Enter your num1\n",a);
//  scanf("%f",&a);
//  printf("Enter your num2\n",b);
//  scanf("%f",&b);
//  printf("\n%f is the sum of 2 number ",a+b);
// return 0;
// }


// Q=3)Largest from 2 number

// # include<stdio.h>
// float main(){
//     float a,b;
// printf("Enter your num1\n",a);    
//  scanf("%f",&a);    
//  printf("Enter your num2\n",b);
//  scanf("%f",&b);
//  if(a>b){
//  printf("%flargest num is",a);
//  }   else{
//  printf("%fis the largest num ",b);
//  } 
//     return 1.1;
// }

// Q=4)Check Number is Even or Odd
// # include<stdio.h>
// int main(){
//     int a;
// printf("Enter your num\n",a);   
//   scanf("%d",&a);  
// if(a%2==0){
//     printf("Is even Number");
// }else{
// printf("Odd No");
// }
//     return 0;
// }

//     Q=5)Factorial Of Number
//     # include<stdio.h>
//         int main(){ 
//         int a;    
//         int fact=1;
//     printf("Enter your Fact num\n",a);
//     scanf("%d",&a);  
//     for(int i=2;i<=a;i++){
//      fact=fact*i;
//     }
//     printf("%d Factorial is\n",fact);
//     return 0;
//  }

// Q=8)Sum of digit

// #include <stdio.h>
// int main(){
// int n,sum=0,m;

// printf("enter your number");
// scanf("%d",&n);
// while(n>0){
//    m= n%10;
//    sum+=m;
//    n=n/10;
// }
// printf("the sum is %d",sum);
// return 0;
// }

// Q=9)prime no check.

// # include<stdio.h>
// int main() {
//     int prime;
//     int flag=0;
//     printf("Enter your num\n",prime);
//     scanf("%d",&prime);
//     for (int i=2;i<prime/2;i++){
//         if(prime%i==0){
//             flag=1;
//             break;
//         }  
//     }
//     if(flag==0){
//         printf("no is prime");
//     }else{
//         printf("no is not prime");}
   
//     return 0;
// }


// Q=10 febonaci 
// #include <stdio.h>

// int main() {
//     int no,i,len,a=0,b=1,c;
//    printf("Enter length of fibonacci series ");
//    scanf("%d",&len);
//   printf("%d ,%d ,",a,b);
//    for(i=2;i<len;i++)
//    {
//        c=a+b;
//        printf("%d ,",c);
//        a=b;
//        b=c;
//    }
       
   
//     return 0;
// }
Q=13
// #include <stdio.h>

int main() {
   int year;
   printf("Enter Year: ");
   scanf("%d",&year);
   
   if((year % 4 ==0 && year % 100 !=0) || year % 400==0){
       printf("year is leap");
   }else {
       printf("year is not leap");
   }
    
    return 0;
}


// Q=14. Simple Calculator
// # include<stdio.h>
//  int main() {
//  int  user_choice;
//  float num1,num2,result;
// printf("Simple Algbric Calculator\n");
// printf("Select Your Opreation\n");
// printf("1.Addition\n");
// printf("2.Substraction\n");
// printf("3.Multiplication\n");
// printf("4.Division\n");
// printf("Enter your Choice(1/2/3/4):");
// scanf("%d",&user_choice);
// printf("Enter your num1:",num1);
// scanf("%f",&num1);
// printf("Enter your num2:",num2);
// scanf("%f",&num2);
// switch(user_choice){
//     case 1:
//   result=num1+num2;
//   printf("%.1f Is Addition of given Number ",result);
//   break;
//   case 2:
//   result=num1-num2;
//   printf("%.1f Is Substraction of given Number ",result);
//   break;
//   case 3:
//   result=num1*num2;
//   printf("%.1f Is multipiliction of given Number ",result);
//   break;
//   case 4:
//   if(num2!=0){
//       result=num1/num2;
//       printf("%.1f Is Division of given Number ",result);
//   }else{
//       printf(" ERROR !!  Enter num2 as a Non-zero digit");
//   }
//   break;
//   default:
//   printf("Invalid Choice!, Plz Enter Valid Opreator ");
//   break;
// }
// return 0;
//  }

// Q=15. Sum of Array Elements

// # include<stdio.h>
//   int main() {

//     int arr[]={1,2,3,4,5,6,7,8};
//     int sum=0;
//     int len=sizeof(arr)/sizeof(arr[0]);
//     for( int i=0;i<len;i++){
//         sum=sum+arr[i];

//     }

// printf("%d",sum);
// return 0;
//  }

// Q=16. Largest Element in an Array
// #include <stdio.h>
// int main(){
//     int arr[]={1,3,4,91,2,788,6,9,90};
//     int len=sizeof(arr)/sizeof(arr[0]);
//       int largest=arr[0];
//       int i;
//     for( i=0;i<len;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }

//     }
//     printf("%d",largest);
// return 0;
// }

// Q=19. Swapping Two Numbers without 3rd variable
// #include <stdio.h>
// int main(){
// int a=23;
// int b=10;
// printf("Before swapping values are a=%d b=%d\n",a,b);
// a=a+b;
// b=a-b;
// a=a-b;
// printf("after swapping values of a=%d b=%d",a,b);
// return 0;
// }


// Q=20. Swap Two Numbers Using Third Variable
// #include <stdio.h>
// int main(){
//    int a=56;
//    int b=76;
//    int c;
//    printf("Before swapping values are a=%d b=%d\n",a,b);
//    a=c;
//    b=a;
//    c=b;
//    printf("After swapping values of  a & b are a=%d b=%d",a,b);
//     return 0;
//  }


// Q=21)ASCII Value of a Character

// #include <stdio.h>
// int main() {
//   char c;
//     printf("enter your charcater: ");
//     scanf("%c",&c);
    
    
//     printf("ASCII value of charcter '%c' is %d\n",c,c);
   
//     return 0;
// }

// Q=22. Convert Celsius to Fahrenheit
// #include <stdio.h>
// int main(){
//    float c,Fahrenheit;

//    printf("Enter Tempreature value in celcius\n");
//    scanf("%f",&c);
//   Fahrenheit=c*9/5+32;
//   printf("%1.1f", Fahrenheit);

//     return 1.1;
//  }

// Q=23. Convert Fahrenheit to Celsius
// #include <stdio.h>
// int main(){
//     float f,Celsius;
//     printf("Enter Tempreature value in Fahrenheit\n");
//     scanf("%f",&f);
//     Celsius=(f-32)*5/9;
//     printf("%1.1f", Celsius);
//      return 1.1;
//  }

//  Q=24. Sum of First N Natural Numbers
// #include <stdio.h>
// int main(){
//     int N,sum;
//     printf("Enter your Number\n",N);
//     scanf("%d",&N);
//     for( int i=1;i<=N;i++){
//         sum=sum+i;
        
//     }
//     printf("%d",sum);
//      return 0;
//  }

// Q=25 Check Vowel or Consonant
// #include <stdio.h>

// int main() {
//     char vov;
//     printf("Enter a vowels: ");
//     scanf("%c", &vov);
    
//     if(vov=='a'|| vov=='e' || vov=='i' || vov=='o' || vov=='u'){
//         printf("%c is vovel",vov);
//     }else{
//         printf("%c is consonant",vov);
//     }

//     return 0;
// }

//Q=26)Check Alphabet, Digit, or Special Character

// #include <stdio.h>
// int main() {
//   char
//    c;
//     printf("enter your charcater: ");
//     scanf("%c",&c);
    
//     if(c>=65  &&  c<=90){
//     printf("  Alphabet");}
//     else if(c>=97 &&  c<=122){
//         printf("Alphabet");
//     }else if(c>=48 && c<=57){
//         printf("number");
//     }else printf("special charcter");
    

//     return 0;
// }


// Q=33. Calculate the Average of Numbers in an Array
// #include <stdio.h>

// int main() {
//    int arr[]={1,2,3,4,5};
// float sum=0;
// int i;
// float len=sizeof(arr)/sizeof(arr[0]);
// for( i=0;i<len;i++){
//     sum=sum+arr[i];
// }

// printf(" %.1f",sum/len);
//     return 0;
// }


// 32= Armstrong Number
// #include <stdio.h>

// int main() {
//     int no,rem,ori,sum,cube;
   
//    printf("Enter Any Integer Number : ");
//    scanf("%d",&no);
//    ori=no;
//    while(no>0){
//        rem=no%10;
//        cube=(rem*rem*rem);
//        sum+=cube;
//        no=no/10;
//    }
//    if(ori==sum){
//        printf("\nThe given number is armstrong ");
//    }
//    else
//       printf("\nThe Number is not Armstrong");
//     return 0;
// }
// 

//#include <stdio.h>
// Q=35
// int main() {
//    int a=1;
//    int flag=0;
//    for( int i=1;i<=a;i++){
//       if(i*i==a){
//           flag=1;
          
//       }
//    }if(flag==1){
//        printf("perfect sq  number");
       
//    }else{printf("not perfect num");}
//     return 0;
//}

//Q=27
#include <stdio.h>

int main() {
   int a=43243;
   int flag=0;
   for( int i=a;i>0;i/=10){
       flag++;
   }
   printf("number of digits is %d",flag);
      
    return 0;
}
Q=31
//assume check prime betn 1 to 100
# include<stdio.h>
 int main() {
     int flag=0;
     for(int j=2;j<100;j++){
         flag=0;
     for (int i=2;i<=j/2;i++){
         if(j%i==0){
             flag=1;
             break;
         }  
     }
     if(flag==0){
         printf("%d ,",j);
     }
}
  
     return 0;
 }



# include<stdio.h>
 int main() {
     int a=84;
     int b=126;
     int gcd=1;
     int flag=0;
     
      
       for(int i=2;i<=a;i++){
           flag=0;
         if((a%i==0)&&(b%i==0)){
             gcd=gcd*i;
             a=a/i;
             b=b/i;
             flag=1;
            
         }
        
         if(flag==1)
         {
             i=1;
         }
         
       }
   printf("GCD Is : %d",gcd);
   printf("\nLCM Is : %d",gcd*a*b);
   
     return 0;
}

Q=reverse a number 
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a;
    printf("enter a number");
    scanf("%d",&a);
    int rev=0;
    int digit;
    while(a!=0){
        digit=a%10;
        rev=rev*10+digit;
        a=a/10;
    }printf("%d",rev);
    return 0;
}
