
#ifndef BIGINT_H
#define BIGINT_H

struct node {
    int data;
    struct node* next;
};

struct node* create(char* str);
struct node* rev_list(struct node* head);
struct node* add_lists(struct node* head1, struct node* head2);
struct node* subtract_lists(char* str1, char* str2);
struct node* divide_lists(struct node* dividend, struct node* divisor);
struct node* modulo_lists(struct node* dividend, struct node* divisor);
void display_list(struct node* head);

#endif
