#include <stdio.h>
#include <malloc.h>
#include <string.h>
#define T char

struct TNode
{
    T value;
    struct TNode *next;
};
typedef struct TNode Node;

struct Stack
{
    Node *head;
    int size;
    int maxSize;
};
struct Stack Stack;

void push(T value)
{
    if (Stack.size >= Stack.maxSize) {
        printf("Error stack size");
    }
    Node *tmp = (Node*) malloc(sizeof(Node));
    tmp->value = value;
    tmp->next = Stack.head;
    Stack.head = tmp;
    Stack.size++;
}

T pop() {
    if (Stack.size == 0)
    {
        printf("Stack is empty");
    }
    Node* next = NULL;
    T value;
    value = Stack.head->value;
    next = Stack.head;
    Stack.head = Stack.head->next;
    free(next);
    Stack.size--;
    return value;
}

int main(int argc, char *argv[])
{
    Stack.maxSize = 12;
    Stack.head = NULL;
    char buf[] = "()[{}]"; // строка на проверку находится здесь
        int i = 0;

        while(buf[i] != '\0'){
            char el;
            switch(buf[i]){
                case '(':
                    push(buf[i]);
                    break;

                case '[':
                    push(buf[i]);
                    break;

                case '{':
                    push(buf[i]);
                    break;

                case ')':
                    el = pop();
                    if(el != '(') push(el);
                    break;

                case ']':
                    el = pop();
                    if(el != '[') push(el);
                    break;

                case '}':
                    el = pop();
                    if(el != '{') push(el);
                    break;
            }
            i++;
        }
    if(Stack.size != 0) {
        printf("Do not current");
    } else {
        printf("All Okey");
    }
    return 0;
}
