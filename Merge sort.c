//simple merge sort program in c language 
#include<stdio.h>
#include<conio.h>

#define MAX_SIZE 5

void merge_sort(int, int);
void merge_array(int, int, int, int);

int arr[MAX_SIZE];

int main() {
  int i;

  printf("Simple Merge Sort Example Array\n");
  printf("\nEnter %d Elements for Sorting\n", MAX_SIZE);
  for (i = 0; i < MAX_SIZE; i++)
    scanf("%d", &arr[i]);

  printf("\nYour Data   :");
  for (i = 0; i < MAX_SIZE; i++) {
    printf("\t%d", arr[i]);
  }

  merge_sort(0, MAX_SIZE - 1);

  printf("\n\nSorted Data :");
  for (i = 0; i < MAX_SIZE; i++) {
    printf("\t%d", arr[i]);
  }
  getch();

}

void merge_sort(int i, int j) {
  int m;

  if (i < j) {
    m = (i + j) / 2;
    merge_sort(i, m);
    merge_sort(m + 1, j);
    // Merging the two arrays
    merge_array(i, m, m + 1, j);
  }
}

void merge_array(int a, int b, int c, int d) {
  int t[50];
  int i = a, j = c, k = 0;

  while (i <= b && j <= d) {
    if (arr[i] < arr[j])
      t[k++] = arr[i++];
    else
      t[k++] = arr[j++];
  }

  //collect the remaining elements 
  while (i <= b)
    t[k++] = arr[i++];

  while (j <= d)
    t[k++] = arr[j++];

  for (i = a, j = 0; i <= d; i++, j++)
    arr[i] = t[j];
}
