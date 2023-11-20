#include <stdio.h>
#include <strings.h>
int main() {
  struct book {
    int price;
    int pages;
    char name[50];
  } social, science;
  strcpy(social.name, "All in One Social JK Brothers");
  social.price = 250;
  social.pages = 505;
  strcpy(science.name, "All in One Science DK Brothers");
  science.price = 150;
  science.pages = 300;
  struct book maths;
  strcpy(maths.name, "All in One Maths PK Brothers");
  maths.price = 200;
  maths.pages = 280;
  struct book hindi;
  strcpy(hindi.name, "All in One Hindi SK Brothers");
  hindi.price = 150;
  hindi.pages = 100;
  struct book english;
  strcpy(english.name, "All in One English TK Brothers");
  english.price=190;
  english.pages=170;
// input based data
  struct book poems;
  printf("Enter the name of the book: ");
  gets(poems.name);
  printf("Enter the price of the book: ");
  scanf("%d",&poems.price);
  printf("Enter the No. of Pages: ");
  scanf("%d",&poems.pages);
  
  
  printf("Maths Book->\n");
  printf(" %s\n", maths.name);
  printf(" %d\n", maths.price);
  printf(" %d\n", maths.pages);
  printf("Social Book->\n");
  printf(" %s\n", social.name);
  printf(" %d\n", social.price);
  printf(" %d\n", social.pages);
  printf("Science Book->\n");
  printf(" %s\n", science.name);
  printf(" %d\n", science.price);
  printf(" %d\n", science.pages);
  printf("Hindi Book->\n");
  printf(" %s\n", hindi.name);
  printf(" %d\n", hindi.price);
  printf(" %d\n", hindi.pages);
  printf("English Book->\n");
  printf(" %s\n", english.name);
  printf(" %d\n", english.price);
  printf(" %d\n", english.pages);
  printf("**Input Based** Poem Book->\n");
  printf(" %s\n", poems.name);
  printf(" %d\n", poems.price);
  printf(" %d\n", poems.pages);
  return 0;
}
// output >> 
//Enter the name of the book: Kids Poem Mini Series
//   Enter the price of the book: 500
//   Enter the No. of Pages: 80
//   Maths Book->
//    All in One Maths PK Brothers
//    200
//    280
//   Social Book->
//    All in One Social JK Brothers
//    250
//    505
//   Science Book->
//    All in One Science DK Brothers
//    150
//    300
//   Hindi Book->
//    All in One Hindi SK Brothers
//    150
//    100
//   English Book->
//    All in One English TK Brothers
//    190
//    170
//   **Input Based** Poem Book->
//    Kids Poem Mini Series
//    500
//    80