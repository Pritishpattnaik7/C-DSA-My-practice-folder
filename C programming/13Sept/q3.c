//Evaluation of postfix expression
#include<stdio.h>
#include<string.h>
#include<math.h>
int stack[30];
int top = -1;

void Push(int x){
    stack[++top] = x;
}

int Pop(){
    return (stack[top--]);
}

int main(){
    char postfix[20];
    int a, b, temp, res;
    printf("Enter the postfix expression : ");
    scanf("%s", postfix);
    for (int i=0 ; i<strlen(postfix) ; i++){
        if (postfix[i] <= '9' && postfix[i] >= '0')
          Push(postfix[i] - '0');
        else{
            a = Pop();
            b = Pop();
            switch (postfix[i])
            {
            case '+':
                temp = b+a;
                break;
            case '-':
                temp = b-a;
                break;
            case '*':
                temp = b*a;
                break;
            case '/':
                temp = b/a;
                break;
            case '%':
                temp = b%a;
                break;
            case '^':
                temp = pow(b,a);
                break;
            default:
                break;
            }
            Push(temp);
        }  
    }
    res = Pop();
    printf("Ans : %d\n", res);
    return 0;
}