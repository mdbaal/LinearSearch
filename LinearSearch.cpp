#include "LinearSearch.h"


int LinearSearch::linearSearch(std::vector<double> list,double target){
  int current = 0;

  while(true){
    if(list[current] == target){
      return current;
    }else if(current < list.size()){
      current++;
    }else{
      return 0;
    }
  }
}
