int phoneAdd(){
    Record recordPhone;

    FILE* fptr;
    fptr = fopen("data.txt","a");

    if(fptr == NULL){
        return 0;
    }

    printf("Enter name(MAX 20):");
    scanf("%s",recordPhone.name);

    printf("Enter last name(MAX 20):");
    scanf("%s",recordPhone.lastName);

    printf("Enter phone number(MAX 11):");
    scanf("%s",recordPhone.phone);

    fprintf(fptr,"\n%s\t\t\t %s\t\t\t %s",recordPhone.name,recordPhone.lastName,recordPhone.phone);

    fclose(fptr);
    return 1;
}