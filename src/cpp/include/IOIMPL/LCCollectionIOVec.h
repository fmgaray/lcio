// -*- C++ -*-
/** Adding stuff needed for io (friend declarations, etc.)
 * 
 * @author gaede
 * @version Mar 6, 2003
 */
#ifndef LCCOLLECTIONIOVEC_H
#define LCCOLLECTIONIOVEC_H 1

#include "IMPL/LCCollectionVec.h"

namespace SIO{
  class SIOCollectionHandler;
};

namespace IOIMPL {
  
  class LCCollectionIOVec  : public IMPL::LCCollectionVec {
    
    friend class SIO::SIOCollectionHandler ;
    
  protected:
    LCCollectionIOVec() {  /* no default c'tor */ }
    

  public:
    LCCollectionIOVec(const std::string& type) : IMPL::LCCollectionVec(type) { } 
    
  }; // class
}; // namespace 
#endif /* ifndef LCCOLLECTIONVEC_H */
