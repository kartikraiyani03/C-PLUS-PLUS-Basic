#include <iostream>

using namespace std;

struct stack
{
    int top;
    int size;
    int *arr;
};

int isEmpty(struct stack *st)
{
    if (st->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *st)
{
    if (st->top == st->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *st, int val)
{
    if (isFull(st))
    {
        cout << "STACK IS FULL " << endl;
    }
    else
    {
        st->top++;
        st->arr[st->top] = val;
    }
}

int pop(struct stack *st)
{
    if (isEmpty(st))
    {
        cout << "STACK IS EMPTY" << endl;
        return 0;
    }
    else
    {
        st->top--;
        return st->arr[st->top];
    }
}

void display(struct stack *st)
{
    if (isEmpty(st))
    {
        cout << "STACK IS EMPTY" << endl;
    }
    else
    {
        for (int i = st->top; i <= -1; i--)
        {
            cout << st->arr[i] << endl;
        }
    }
}

int main()
{
    struct stack st;

    st.top = -1;
    st.size = 5;
    st.arr = (int *)malloc(sizeof(int) * st.size);

    push(&st, 12);
    push(&st, 12);
    display(&st);

    return 0;
}