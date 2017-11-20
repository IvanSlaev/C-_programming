#define SIZE 10

struct stack {
    stack();
    void push(char c);
    char pop();
private:
    char stck[SIZE];
    int tos;
};
