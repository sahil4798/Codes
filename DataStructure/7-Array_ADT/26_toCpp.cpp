#include <iostream>
using namespace std;

class Array
{ 
  private:
  int *A;
  int size;
  int length;
  public:
  Array()
  {
    size=10;
    length=0;
    A = new int[size];
  }
  Array(int x)
  {
    size=x;
    length=0;
    A = new int[size];
  }
  ~Array()
  {
    delete []A;
  }

  void display() ;
  void Insertsion( int index, int element);
  int Delete( int index);
  int Search( int key);
  int Get( int index);

};

void Array :: display ()
{
  printf("The element of array are : ");

  for (int i = 0; i < length; i++)
  {
    printf(" %d ", A[i]);
  }
  printf("\n");
}

void Array :: Insertsion( int index, int element)
{
   if(index>=0 || index<=length)
    {
    for (int i = length; i > index; i--) // 0 1 2 3 4 5
    {
      A[i] = A[i - 1]; // arr[6]=arr[5];
    }
    A[index] = element;
    length++;
  }
}

int Array :: Delete( int index)
{
  int x = 0;
  if (index >= 0 && index < length)
  {
    x = A[index];

    for (int i = index; i < length - 1; i++)
    {
      A[i] = A[i + 1];
    }
    length--;
    return x;
  }
  return 0;
}

int Array :: Search( int key)
{
  for (int i = 0; i < length; i++)
  {
    if (A[i] == key)
    {
      return i;
    }
  }

  return -1;
}

int Array :: Get( int index)
{
  int e;
  if (index >= 0 && index < length)
  {
    e = A[index];
    return e;
  }
  return -1;
}

// int Set(struct Array *obj, int index, int x)
// {

//   if (index >= 0 && index < obj->length)
//   {
//     obj->A[index] = x;
//     return x;
//   }
//   return -1;
// }

// int Max(struct Array obj)
// {
//   int max = obj.A[0];
//   for (int i = 1; i < obj.length; i++)
//   {
//     if (obj.A[i] > max)
//     {
//       max = obj.A[i];
//     }
//   }
//   return max;
// }

// int Min(struct Array obj)
// {
//   int min = obj.A[0];
//   for (int i = 1; i < obj.length; i++)
//   {
//     if (obj.A[i] < min)
//     {
//       min = obj.A[i];
//     }
//   }
//   return min;
// }

// int Sum(struct Array obj)
// {
//   int sum = 0;
//   for (int i = 0; i < obj.length; i++)
//   {
//     sum = sum + obj.A[i];
//   }
//   return sum;
// }

// float Avg(struct Array obj)
// {
//   float sum = 0;
//   for (int i = 0; i < obj.length ; i++)
//   {
//     sum = sum + obj.A[i];
//   }
//   return sum/obj.length ;
// }

// void Reverse1(struct Array *obj)
// {
//     //   int B[obj->length];
//     int *B;
//     B = (int *) malloc(obj->length*sizeof(int));

//     for(int i= obj->length-1 ,  j=0 ; i>=0 ; i-- ,j++)
//     {
//     B[j] = obj->A[i];
//     }

//     for(int i= 0 ; i<obj->length ; i++ )
//     {
//     obj->A[i] = B[i] ;
//     }

// }

// void FShift(struct Array *obj)
// {
//     for(int i =0 ; i<obj->length-1 ; i++)
//     {
//     obj->A[i]=obj->A[i+1] ;
//     }
//     obj->A[obj->length-1]=0;
// }
// void BShift(struct Array *obj)
// {
//     for(int i =obj->length-1; i>=0 ; i--)
//     {
//     obj->A[i]=obj->A[i-1] ;
//     }
//    obj->A[0]=0;

// }

// void FRoatate(struct Array *obj)
// {
//     int temp =  obj->A[0];
//     for(int i=0 ; i<obj->length-1 ; i++)
//     {
//         obj->A[i] = obj->A[i+1];
//     }
//     obj->A[obj->length-1]=temp;
// }

// void BRoatate(struct Array *obj)
// {
//     int temp =  obj->A[obj->length-1];
//     for(int i=obj->length-1; i>=0 ; i--)
//     {
//         obj->A[i] = obj->A[i-1];
//     }
//     obj->A[0]=temp;
// }

int main()
{
  // class Array obj = {{1, 2, 3, 4, 5}, 10, 5};
   
   class Array obj;
   obj.display();
   obj.Insertsion(0 , 10);
   obj.Insertsion(1 , 20);
   obj.Insertsion(2 , 30);
   obj.display();
   obj.Insertsion(0 , 0);
   obj.display();
   obj.Delete(2);
   obj.display();
   cout<<"The index of 0 is :"<<obj.Search(0)<<endl;
   cout<<"element at index 2 is :"<<obj.Get(2)<<endl;

  return 0;
}