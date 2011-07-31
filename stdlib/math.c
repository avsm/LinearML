#include"liml.h"
#include<math.h>

lvalue liml_sqrt(lvalue arg){
  lfloat res = sqrt(V2F(arg)) ; 
  return F2V(res) ;
}

lvalue liml_sin(lvalue arg){
  lfloat res = sin(V2F(arg)) ; 
  return F2V(res) ;

}

lvalue liml_exp(lvalue arg) {
  lfloat res = expf(V2F(arg)) ;
  return F2V(res) ;
}

lvalue liml_float_of_int(lvalue arg){
  lfloat x = (lfloat)arg;
  return F2V(x) ;
}
