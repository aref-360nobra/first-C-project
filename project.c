#include <stdio.h>
#define MAX_LENGTH 100

int main(void){

    system("clear");
    int data[MAX_LENGTH];
    int length = 0;
    int value,index;
    int search_result;

    int input;

    do{
        
    printf("Menu: \n");
    printf("--------------\n");
    printf("1. Add\n2. Insert\n3. Edit\n4. Delete\n");
    printf("5. Display\n6. Clear\n7. Minimun\n8. Maximum\n");
    printf("9. Sum\n10. Average\n11. Search\n12. Sort\n");
    printf("0. Exit\n");
    printf("--------------\n");

    printf("Enter A Menu: ");
    scanf("%d",&input);

    system("clear");

    printf("------- Result -------\n");

    switch(input){
        case 0:
        //Do nothing, just terminate the program
            break;
        case 1:
        //Add operation
            printf("Please Enter an Integer value: ");
            scanf("%d",&value);
            data[length] = value;
            printf("%d inserted at index  %d\n", value, length);
            length++;
            break;
        case 2:
        //Insert operation
        printf("Enter an Integer value: ");
        scanf("%d",&value);
        printf("Please enter an Index between 0 - %d: ",length);
        scanf("%d",&index);

        for(int i=length; i>index; i--){
            data[i]=data[i-1];
        }
        data[index]=value;
        length++;
        printf("%d inserted at index %d\n", value, index);

            break;
        case 3:
        //Edit operation
        printf("Please enter an Index between 0 - %d: ",length -1);
        scanf("%d",&index);
        printf("Please Enter an Integer value: ");
        scanf("%d",&value);
        data[index]=value;
        printf("%d updated at index %d\n", value, index);
            break;
        case 4:
        //Delete operation
        printf("Please enter an Index between 0 - %d: ",length -1);
        scanf("%d",&index);

        int dv = data[index];

        for(int i=index; i<length; i++){
            data[i] = data[i+1];
        }
            data[length]=0;
            length--;

            printf("%d Deleted at index %d\n", dv, index);

        break;
        case 5:
        //Display items using a for loop
        if(length==0){
            printf("There is no data\n");
        }else{


            printf("DATA: ");
            for(int i=0;i<length;i++){
                printf("%d\t",data[i]);
            }
            printf("\n");
            break;
        }
        case 6:
        //Clear the list
            printf("DATA: ");
            for(int i=0;i<length;i++){
                data[i] = 0;
            }
            length = 0;
            printf("Data Cleared\n");
            break;
        
        case 7:
        //Minimun
        int minimum = data[0];
        for(int i=0; i<length;i++){
            if(data[i] < minimum){
                minimum = data[i];
            }
        }printf("Minimum = %d\n", minimum);
        break;

        case 8:
        //Maximum
        int max=data[0];
        for(int i=0; i<length;i++){
            if(data[i] > max){
                max=data[i];
            }
        }printf("Maximum = %d\n", max);

        case 9:
        //Sum
        int sum = 0;
        for(int i=0;i<=length;i++){
            sum += data[i];
        }printf("Sum = %d\n", sum);
        break;

        case 10:
        //Average
        printf("Agerage = %d\n", sum/length);
        break;

        case 11:
        // Search
        printf("Please Enter your search key: ");
        scanf("%d", &value);
        int found_index = -1;

        for(int i=0; i<length; i++){
            if(data[i]==value){
                found_index = i;
                break;
            }
        }
        if(found_index != -1){
            printf("%d Found at Index %d\n",value, found_index);
        }else{
            printf("ERROR 404\n");
        }
        break;

        case 12:
        //Sort
        int temp;
        length = sizeof(data)/sizeof(data[0]);

        for(int i=0;i<length;i++){
            for(int j=i+1;j<length;j++){
                if(data[i]>data[j]){
                    temp=data[i];
                    data[i]=data[j];
                    data[j]=temp;
                }
            }
        }
        printf("Sorted Data: ");
        for(int i=0;i<length;i++){
            printf("%d\t",data[i]);
        }printf("\n");

        break;


        default:
            printf("Invalid Menu\n");
        }

    printf("You have selected %d no. menu.\n", input);
    printf("------- Result End -------\n\n");    

    }
    while (input != 0);   

    system("Clear");
    printf("Thanks for using our application. Good bye\n");
            
    return 0;
}
