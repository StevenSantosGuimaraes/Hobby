#include "main.h"

int main(){
    do{
        clearSystem();
        switch(screenMain()){
            case 1:
                do{
                    clearSystem();
                    printf("Enter the amount of data to be entered: ");
                    scanf("%d", &length);
                    values = (float *) malloc(length * sizeof(float));
                }while(length <= 0);
                break;
            case 2:
                print_values(values, length);
                break;
            case 3:
                insertValue(values, length);
                break;
            case 4:
                clearSystem();
                switch(screenSort()){
                    case 1:
                        clearSystem();
                        printf("Before: ");
                        print_values(values, length);
                        bubble_sort(values, length);
                        printf("\nAfter: ");
                        print_values(values, length);
                        break;
                    case 2:
                        clearSystem();
                        printf("Before: ");
                        print_values(values, length);
                        selection_sort(values, length);
                        printf("\nAfter: ");
                        print_values(values, length);
                        break;
                    case 3:
                        clearSystem();
                        printf("Before: ");
                        print_values(values, length);
                        insertion_sort(values, length);
                        printf("\nAfter: ");
                        print_values(values, length);
                        break;
                    case 4:
                        clearSystem();
                        printf("Before: ");
                        quick_sort(&values, 0, length - 1);
                        printf("\nAfter: ");
                        print_values(values, length);
                        break;
                    case 0:
                        clearSystem();
                        printf("Returning...");
                        break;
                    default:
                        clearSystem();
                        printf("The option informed is invalid, try again...");
                        break;
                }
                break;
            case 0:
                clearSystem();
                exit(1);
                break;
            default:
                printf("\nThe option informed is invalid, try again...");
                break;
        }
    }while(exit_program());
    clearSystem();
    printf("The program ended successfully.\n");
}
