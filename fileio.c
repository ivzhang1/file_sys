#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
  //open, close, read,write
  char * file = "text_file.txt";
  int file_id = open(file, O_RDWR); //READ AND WRITE
  char * k = malloc(10);
  printf("File Id: %d\n", file_id);

  printf("Bytes Read: %zd\n", read(file_id, k, 20));
  printf("String read: %s\n", k);


  int write_size = write(file_id, "woad\n", 5);
  printf("Write Size: %d\n", write_size);

  char file2 = open("test2.txt", O_RDONLY);
  char info[50];
  read(file2, info, 50);
  printf("%s\n", info);
  close(file2);
  return close(file_id);

}
