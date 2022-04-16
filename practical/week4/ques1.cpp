#include <iostream>
using namespace std;

void merge(int *array, int l, int m, int r, int &comparison, int &inversion)
{
   int i, j, k, nl, nr;
   nl = m - l + 1;
   nr = r - m;
   int larr[nl], rarr[nr];
   for (i = 0; i < nl; i++)
      larr[i] = array[l + i];
   for (j = 0; j < nr; j++)
      rarr[j] = array[m + 1 + j];
   i = 0;
   j = 0;
   k = l;
   while (i < nl && j < nr)
   {
      comparison++;
      if (larr[i] < rarr[j])
      {
         array[k] = larr[i];
         i++;
      }
      else
      {
         inversion += nl - i;
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while (i < nl)
   {
      array[k] = larr[i];
      i++;
      k++;
   }
   while (j < nr)
   {
      array[k] = rarr[j];
      j++;
      k++;
   }
}
void mergeSort(int *array, int l, int r, int &comparison, int &inversion)
{
   if (l < r)
   {
      int m = (l + r) / 2;
      mergeSort(array, l, m, comparison, inversion);
      mergeSort(array, m + 1, r, comparison, inversion);
      merge(array, l, m, r, comparison, inversion);
   }
}
int main()
{
   int n;
   int t;
   cin >> t;
   while (t != 0)
   {
      cin >> n;
      int arr[n], comparison = 0, inversion = 0;
      for (int i = 0; i < n; i++)
         cin >> arr[i];
      mergeSort(arr, 0, n - 1, comparison, inversion);

      for (int i = 0; i < n; i++)
         cout << arr[i] << " ";
      cout << "\ncomparison = " << comparison << endl;
      cout << "Inversion = " << inversion << endl;

      t--;
   }
}
