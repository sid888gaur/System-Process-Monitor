#ifndef PROCESS_H
#define PROCESS_H

#include <string>

class Process {
 public:
    Process(int pid);
  int Pid() const;                               
  std::string User();                      
  std::string Command();                   
  float CpuUtilization();
  long int UpTime();                  
  std::string Ram();                       
  bool operator<(Process& a);  
  
 private:
    int pid_;
};

#endif
