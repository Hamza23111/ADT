#include <stdio.h>
#include <stdlib.h>

struct myArray{
    int total_size,used_size;
    int*ptr;
};

void create_array(struct myArray *a,int t_size,int u_size){
 (*a).total_size=t_size;
  (*a).used_size=u_size;
  (*a).ptr=malloc(t_size*sizeof(int));
  
}
void set_value(struct myArray *a){
    //for show of elements
    int n;
   for(int i;i<(*a).total_size;i++){
       printf(" element value enter please:\n");
       scanf("%d",( &n) );
      a->ptr[i]=n;
   }
}
void show(struct myArray *a){
    //for show of elements
   for(int i;i<(*a).total_size;i++){
          printf("%d\n",( (*a).ptr[i] ) );
      
   }
}


int main() {
    
struct myArray array;
create_array(&array,1,8);
set_value(&array);
//show(&array);
    return 0;
}