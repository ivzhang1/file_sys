#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(){
  //open, close, read,write

  int file_id = open("text_file.txt");
  printf("%d\n", file_id);

  
}
