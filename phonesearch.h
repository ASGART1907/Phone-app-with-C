int phoneSearch(char* name){
    int i = 0;

    Record currentRecord;

    FILE* fptr;
    fptr = fopen("data.txt","r");

    if(fptr == NULL){
        return 0;
    }

    while(!feof(fptr)){
        fscanf(fptr,"%s %s %s",currentRecord.name,currentRecord.lastName,currentRecord.phone);
        if(!strcmp(name,currentRecord.name)){
            printf("%s\t\t\t%s\t\t\t\t%s\n\n",currentRecord.name,currentRecord.lastName,currentRecord.phone);
            i++;
        }
    }

    fclose(fptr);

    return i;
}