#include "DS.h"

static void swim(Heap *p, int);
static void sink(Heap *p, int);

/*
  Хоёр зурвасын чухлыг харьцуулах функц.
  b нь илүү чухал бол 1, бусад үед 0-ыг буцаах функц.
  Өөрөөр хэлбэл a < b үйлдэл юм.
*/
int less(const Msg *a, const Msg *b)
{
  if(b->priority > a->priority)
      return 1;
  return 0;
}

/*
  Оруулах функц. heap зарчмаар чухлын дарааллыг баримтлан оруулна.
  Ингэхдээ хамгийн чухал зурвас heap-ын оройд хадгалагдана.
  x зурвасыг p-ын зааж буй heap бүтцэд оруулна.
 */
void insert(Heap *p, const Msg x)
{
  p->h_arr[p->h_len] = x;
  while (k > 0 && less(&p->h_arr[(k-1)/2], &p->h_arr[k]){
    Msg temp = p->h_arr[k];
    p->h_arr[k] = p->h_arr[(k-1)/2];
    p->h_arr[(k-1)/2} = tmp;
    k = (k-1)/2;
  }
  p->h_len++;
}

/*
  Heap бүтцийн swim үйлдэл.
  k нь swim үйлдлийг p-ын зааж буй heap дээр эхлүүлэх индекс.
 */
static void swim(Heap *p, int k)
{
    while (k > 0 && less(&p->h_arr[(k-1)/2], &p->h_arr[k]){
    Msg temp = p->h_arr[k];
    p->h_arr[k] = p->h_arr[(k-1)/2];
    p->h_arr[(k-1)/2} = tmp;
    k = (k-1)/2;
}

/*
  Heap бүтцийн sink үйлдэл.
  k нь sink үйлдлийг p-ын зааж буй heap дээр эхлүүлэх индекс.
 */
static void sink(Heap *p, int k)
{
  while (2*k + 1 <= p->h_len){
    int j = 2*(k+1);
    if( j + 1 < p->h_len && less(&p->h_arr[j], &p->h_arr[j+1]))
      j++;
    if(!less(&p->h_arr[k],&p->h_arr[j]))
      break;
    Msg tmp = p->h_arr[k];
    p->h_arr[k] = p->h_arr[j];
    p->h_arr[j] = tmp;
    k = j;
  }
}

/*
  p-ын зааж буй heap бүтцээс оройн элементийг гаргаад буцаах функц.
  Гаргасны дараа орой бүрийн хувьд heap зарчим хадгалах ёстой.
 */
Msg delMin(Heap *p)
{
  Msg min = p->h_arr[1];
  
}

