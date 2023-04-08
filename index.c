#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
#include "phoneadd.h"
#include "phonelist.h"
#include "phonesearch.h"

int main(){
  int choice = 0;
  int resultSearch;
  char* name[20];

  while(choice != 4){
      menu();
      printf("An option input:");
      scanf("%d",&choice);
      switch(choice){
        case 1: 
          if(phoneAdd() == 1){
          printf("Phone added\n");
        }else{
          printf("Error adding phone");
        }
          break;

        case 2: 
          if(phoneList() == 1){
            printf("The numbers are listed\n");
          }else{
            printf("An error occurred while listing numbers!");
          }
          break;

        case 3: 
            printf("Enter name(MAX 20):");
            scanf("%s",&name);
            resultSearch = phoneSearch(name);
            if(resultSearch == 0){
              printf("No such record found\n");
            }else{
              printf("%d results found\n",resultSearch);
            }
          break;

        case 4: 
            printf("You logged out");
            return 0;
          break;

        default:
          printf("You cannot enter such an option");
    }
  }

  return 0;
}

void menu(){
  printf("----------------------\n");
  printf("*    1.Phone Add      *\n");
  printf("*    2.Phone List     *\n");
  printf("*    1.Phone Search   *\n");
  printf("*    4.Exit           *\n");
  printf("-----------------------\n");
}