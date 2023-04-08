int phoneList(){
    Record currentRecord;
    FILE* fptr;
    fptr = fopen("data.txt","r");

    if(fptr == NULL){
        return 0;
    }

   printf("Name\t\t\tLast Name\t\t\tPhone\n");
   printf("----\t\t\t---- ----\t\t\t-----\n");
    while(!feof(fptr)){
        fscanf(fptr,"%s %s %s",currentRecord.name,currentRecord.lastName,currentRecord.phone);
        printf("%s\t\t\t%s\t\t\t\t%s\n",currentRecord.name,currentRecord.lastName,currentRecord.phone);
    }

    fclose(fptr);
    return 1;
};