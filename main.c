#include <stdio.h>
#include <ctype.h>
#include <math.h>

void ShowMainMenu();
void Perimeter();
void Surface();
void Volume();
void ShowShapesMenu();
void SquarePerimeter();
void RectanglePerimeter();
void CirclePerimeter();
void SquareArea();
void RectangleArea();
void CircleArea();
void ShowBodiesMenu();
void CubeVolume();
void SphereVolume();
void ConeVolume();

int main() {
    char option;
    printf("Hullo, Mate! Let me help you with your Goemetry assignature.\n\n");

    do {
        ShowMainMenu();
        scanf("%c", &option);
        option = (char) toupper(option);
        switch (option) {
            case 'A':
                Perimeter();
                break;
            case 'B':
                Surface();
                break;
            case 'C':
                Volume();
                break;
            case 'X':
                printf("See you around, mate!\n");
            default:
                printf("Not a valid option, mate! I can't work with that.  Let's try again!\n");
        }
    } while (option != 'X');
    return 0;
}

void ShowMainMenu() {
    printf("A. Perimeter.\n");
    printf("B. Surface.\n");
    printf("C. Volume.\n");
    printf("X. Exit.\n\n");
    printf("   Option? ");
}


void Perimeter() {
    int option;
    do {
        ShowShapesMenu();
        scanf("%d", &option);
        switch (option) {
            case 1:
                SquarePerimeter();
                break;
            case 2:
                RectanglePerimeter();
                break;
            case 3:
                CirclePerimeter();
                break;
            case 0:
                printf("Going back to main menu, mate!\n");
                break;
            default:
                printf("Not a valid option, mate! I can't work with that.  Let's try again!\n");
        }
    } while (option < 0 || option > 3);
}

void SquarePerimeter() {
    double side;

    printf("Side length: ");
    scanf("%lf", &side);

    printf("\n\nSquare perimeter = %lf\n\n", side * 4);
    printf("Going back to main menu, mate!\n");
}

void RectanglePerimeter() {
    double base;
    double height;

    printf("base length: ");
    scanf("%lf", &base);
    printf("rectangle height: ");
    scanf("%lf", &height);

    printf("\n\nRectangle perimeter = %lf\n\n", (base + height) * 2);
    printf("Going back to main menu, mate!\n");
}

void CirclePerimeter() {
    double radio;

    printf("circle radio: ");
    scanf("%lf", &radio);

    printf("\n\nCircle perimeter = %lf\n\n", 2 * radio * M_1_PI);
    printf("Going back to main menu, mate!\n");
}

void Surface() {
    int option;
    do {
        ShowShapesMenu();
        scanf("%d", &option);
        switch (option) {
            case 1:
                SquareArea();
                break;
            case 2:
                RectangleArea();
                break;
            case 3:
                CircleArea();
                break;
            case 0:
                printf("Going back to main menu, mate!\n");
                break;
            default:
                printf("Not a valid option, mate! I can't work with that.  Let's try again!\n");
        }
    } while (option < 0 || option > 3);
}

void ShowShapesMenu() {
    printf("1. Square.\n");
    printf("2. Rectangle.\n");
    printf("3. Circle.\n\n");
    printf("   Option? ");
}

void SquareArea() {
    double side;

    printf("Side length: ");
    scanf("%lf", &side);

    printf("\n\nSquare surface = %lf\n\n", side * side);
    printf("Going back to main menu, mate!\n");
}

void RectangleArea() {
    double base;
    double height;

    printf("base length: ");
    scanf("%lf", &base);
    printf("rectangle height: ");
    scanf("%lf", &height);

    printf("\n\nRectangle area = %lf\n\n", base * height);
    printf("Going back to main menu, mate!\n");
}

void CircleArea() {
    double radio;

    printf("circle radio: ");
    scanf("%lf", &radio);

    printf("\n\nCircle area = %lf\n\n", radio * radio * M_1_PI);
    printf("Going back to main menu, mate!\n");
}

void Volume() {
    int option;
    do {
        ShowBodiesMenu();
        scanf("%d", &option);
        switch (option) {
            case 1:
                CubeVolume();
                break;
            case 2:
                SphereVolume();
                break;
            case 3:
                ConeVolume();
                break;
            case 0:
                printf("Going back to main menu, mate!\n");
                break;
            default:
                printf("Not a valid option, mate! I can't work with that.  Let's try again!\n");
        }
    } while (option < 0 || option > 3);
}

void ShowBodiesMenu() {
    printf("1. Cube.\n");
    printf("2. Sphere.\n");
    printf("3. Cone.\n\n");
    printf("   Option? ");
}

void CubeVolume() {
    double side;

    printf("Side length: ");
    scanf("%lf", &side);

    printf("\n\nCube volume = %lf\n\n", side * side * side);
    printf("Going back to main menu, mate!\n");
}

void SphereVolume() {
    double radio;

    printf("sphere radio: ");
    scanf("%lf", &radio);

    printf("\n\nSphere volume = %lf\n\n", radio * radio * radio * M_1_PI * 4 / 3);
    printf("Going back to main menu, mate!\n");
}

void ConeVolume() {
    double radio;
    double height;

    printf("cone radio: ");
    scanf("%lf", &radio);
    printf("cone height: ");
    scanf("%lf", &height);

    printf("\n\nCone volume = %lf\n\n", radio * radio * M_1_PI * height / 3);
    printf("Going back to main menu, mate!\n");
}