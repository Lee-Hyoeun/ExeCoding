//산18년 1회

class Soojebi{
  public static void main(String[] args){
    int []a = {3,2,5,1,4};
    fn(aa, 5);
    for(int i=0; i<a.length; i++){
      System.out.print(a[i]);
    }
  }

public static void fn(int[] a, int n){
  int i, j;
  int min, temp;
  for(i=0; i<n-1; i++){
    min = i;

    for(j=i+1; j<n; j++){
      if(a[j] < a[min])
        min = j;
    }
  
    temp = a[min];
    a[min] = a[i];
    a[i] = temp;
    }
  }
}

//x

