#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int exp;   
    struct Node* next;
};

struct Node* createNode(int coeff, int exp) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}

struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    struct Node* temp = NULL;

    while (poly1 && poly2) {
        if (poly1->exp > poly2->exp) {
            temp = createNode(poly1->coeff, poly1->exp);
            poly1 = poly1->next;
        } else if (poly1->exp < poly2->exp) {
            temp = createNode(poly2->coeff, poly2->exp);
            poly2 = poly2->next;
        } else {
            temp = createNode(poly1->coeff + poly2->coeff, poly1->exp);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }

        if (!result) {
            result = temp;
        } else {
            temp->next = result;
            result = temp;
        }
    }

    while (poly1) {
        temp = createNode(poly1->coeff, poly1->exp);
        temp->next = result;
        result = temp;
        poly1 = poly1->next;
    }

    while (poly2) {
        temp = createNode(poly2->coeff, poly2->exp);
        temp->next = result;
        result = temp;
        poly2 = poly2->next;
    }

    return result;
}

void displayPolynomial(struct Node* poly) {
    while (poly) {
        printf("%dx^%d", poly->coeff, poly->exp);
        poly = poly->next;
        if (poly) {
            printf(" + ");
        }
    }
    printf("\n");
}

int main() {
    struct Node* poly1 = createNode(4, 4);
    poly1->next = createNode(4, 3);
    poly1->next->next = createNode(-2, 2);
    poly1->next->next->next = createNode(1, 1);

    struct Node* poly2 = createNode(11, 3);
    poly2->next = createNode(7, 2);
    poly2->next->next = createNode(-4, 1);

    printf("1st Polynomial: ");
    displayPolynomial(poly1);

    printf("2nd Polynomial: ");
    displayPolynomial(poly2);

    struct Node* result = addPolynomials(poly1, poly2);
    printf("Resultant Polynomial: ");
    displayPolynomial(result);

    return 0;
}
