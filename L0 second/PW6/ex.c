#include <stdio.h>
#include <stdlib.h>
//typedef
typedef struct Node {
	int coeff;
	int pow;
	struct Node* next;
}Node;
// Function to create new node
void create_node(int x, int y, struct Node** temp)
{
	struct Node *r, *z;
	z = *temp;
	if (z == NULL) {
		r = (struct Node*)malloc(sizeof(struct Node));
		r->coeff = x;
		r->pow = y;
		*temp = r;
		r->next = (struct Node*)malloc(sizeof(struct Node));
		r = r->next;
		r->next = NULL;
	}
	else {
		r->coeff = x;
		r->pow = y;
		r->next = (struct Node*)malloc(sizeof(struct Node));
		r = r->next;
		r->next = NULL;
	}
}
void deleteNode(struct Node** head_ref, int key)
{
    // Store head node
    struct Node *temp = *head_ref, *prev;
 
    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->coeff == key) {
        *head_ref = temp->next; // Changed head
        free(temp); // free old head
        return;
    }
 
    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->coeff != key) {
        prev = temp;
        temp = temp->next;
    }
 
    // If key was not present in linked list
    if (temp == NULL)
        return;
 
    // Unlink the node from linked list
    prev->next = temp->next;
 
    free(temp); // Free memory
}




// Function Adding two polynomial numbers
void polyadd(struct Node* poly1, struct Node* poly2,
			struct Node* poly)
{
	while (poly1->next && poly2->next ) {
		// If power of 1st polynomial is greater then 2nd,
		// then store 1st as it is and move its pointer
		if (poly1->pow > poly2->pow ) {
			poly->pow = poly1->pow;
			poly->coeff = poly1->coeff;
			poly1 = poly1->next;
		}

		// If power of 2nd polynomial is greater then 1st,
		// then store 2nd as it is and move its pointer
		else if (poly1->pow < poly2->pow) {
			poly->pow = poly2->pow;
			poly->coeff = poly2->coeff;
			poly2 = poly2->next;
		}

		// If power of both polynomial numbers is same then
		// add their coefficients
		else {
			poly->pow = poly1->pow;
			poly->coeff = poly1->coeff + poly2->coeff;
			poly1 = poly1->next;
			poly2 = poly2->next;
		}

		// Dynamically create new node
		poly->next
			= (struct Node*)malloc(sizeof(struct Node));
		poly = poly->next;
		poly->next = NULL;
	}
	while (poly1->next || poly2->next) {
		if (poly1->next) {
			poly->pow = poly1->pow;
			poly->coeff = poly1->coeff;
			poly1 = poly1->next;
		}
		if (poly2->next) {
			poly->pow = poly2->pow;
			poly->coeff = poly2->coeff;
			poly2 = poly2->next;
		}
		poly->next
			= (struct Node*)malloc(sizeof(struct Node));
		poly = poly->next;
		poly->next = NULL;
	}
}
void Can_form(struct Node* node)
{
	while (node->next != NULL) {
        printf("%d^%d", node->coeff, node->pow);
		node = node->next;
		if (node->coeff >= 0) {
			if (node->next != NULL){
				printf(" + ");}
            
            
		}
	}
    printf("\n");

}
// Display Linked list
void show(struct Node* node)
{
    printf("-->");
	while (node->next != NULL) {
		printf("(%d;%d)", node->coeff, node->pow);
		node = node->next;
		if (node->coeff >= 0) {
			if (node->next != NULL){
				printf("-->");}
            else{
                printf("-->E");
            }
            
		}
	}
    printf("\n");
}
void deleteList(struct Node** head_ref)
{
   /* deref head_ref to get the real head */
   struct Node* current = *head_ref;
   struct Node* next;
 
   while (current != NULL)
   {
       next = current->next;
       free(current);
       current = next;
   }
   
   /* deref head_ref to affect the real head back
      in the caller. */
   *head_ref = NULL;
}

// Driver code
int main()
{
	struct Node  *poly = NULL , *mano = NULL,*new_poly = NULL,*poly2=NULL;
    int c,p;
    int a;
	// Create first list of 2x^2 + x^1 + x^0
    create_node(2, 7, &poly);
	create_node(1, 3, &poly);
    create_node(-3, 2, &poly);
    create_node(1, 0, &poly);
    create_node(0, 0, &poly);

	printf("P(X): ");
	show(poly);
    printf("1)Add monomial\n2)Add two polynomials\n3)Polynomial in canonical form\n4)Remove null monomials\n5)Destroy\n=>");
    scanf("%d", &a);
    if (a==1){
        printf("coeff=");
        scanf("%d", &c);
        printf("Pow=");
        scanf("%d", &p);
        create_node(c, p, &mano);
        new_poly = (struct Node*)malloc(sizeof(struct Node));

        // Function add two polynomial numbers

        polyadd(poly,mano,new_poly);
        // Display resultant List
        printf("\nAdded polynomial: ");
        show(new_poly);
    }
    else if (a==2){
        create_node(2, 7, &poly2);
        create_node(1, 3, &poly2);
        create_node(-3, 2, &poly2);
        create_node(1, 0, &poly2);
            printf("P(X)");
            show(poly);
        	printf("Q(X) ");
	        show(poly2);
    
            new_poly = (struct Node*)malloc(sizeof(struct Node));

            // Function add two polynomial numbers
            polyadd(poly, poly2,new_poly);
            // Display resultant List
            printf("\nR(x): ");
            show(new_poly);
    }
    else if (a==3){
        Can_form(poly); 
    }
    else if(a==4){
        printf("After the deleting:\n");
        deleteNode(&poly,0);
        show(poly);
    }
    else if(a==5){
        deleteList(&poly);
        printf("Deleted.\n");
    }
    if (poly!=NULL && a!=5){
        printf("It is not the zero polynomial\n  ");
    }
    else if(poly==NULL && a!=5){
       printf("It is the zero polynomial\n "); 
    }

	return 0;
}
