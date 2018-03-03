#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1;

  initBox(&b1,3.4,-5,5,7);  
  assertEquals("(3.4,-5,5,7)", boxToString(b1), "boxToString(b1)");


		   
  return 0;
}
