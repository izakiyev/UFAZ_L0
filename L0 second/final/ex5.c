#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
 typedef struct Node {
	char* name;
    int id;
    int grade;
	struct Node* next;
}Node;
void student1(char* name,int id,int grade, struct Node** temp)
{
	struct Node *r, *z;
	z = *temp;
	if (z == NULL) {
		r = (struct Node*)malloc(sizeof(struct Node));   
		r->name = name;
        r->id = id;
        r->grade = grade;
		*temp = r;
		r->next = (struct Node*)malloc(sizeof(struct Node));
		r = r->next;
		r->next = NULL;
	}
	else {
		r->name = name;
        r->id = id;
        r->grade = grade;
		r->next = (struct Node*)malloc(sizeof(struct Node));
		r = r->next;
		r->next = NULL;
	}
}
void show(struct Node* node)
{
	while (node->next != NULL) {
		printf("\nName:%s;\nID:%d\ngrade:%d\n", node->name, node->id,node->grade);
		node = node->next;
		
		
	
}
	
    printf("\n");
}
int main(){
    struct Node  *student = NULL ;
	student1("ibrahim", 1,5, &student);
    show(student);
}