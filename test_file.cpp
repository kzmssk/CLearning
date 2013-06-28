#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <sstream>

int main(){
  std::ofstream ofs;
  char buf[10];
  std::string filename;
  for(int i=0;i<5;i++){
    sprintf(buf,"data/test%d.txt", i);
    std::cout << buf << std::endl;
    ofs.open(buf);
    ofs << "this is " << i << " times test." << std::endl;
    ofs.close();
  }
  return 0;
}


