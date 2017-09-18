#ifndef NS_ERROR_ESTIMATION_H
#define NS_ERROR_ESTIMATION_H

#include <apf.h>
#include <apfMesh2.h>

namespace error{
 namespace NS{
   struct InputInfo{
    apf::Field* velocity;
    apf::Field* pressure;
   };
   apf::Field* getERMerror(InputInfo info);
   //void getVMSerror();
 }
}

#endif
