
#include "IMPL/LCGenericObjectImpl.h"

using namespace EVENT ;

namespace IMPL {
  
  LCGenericObjectImpl::LCGenericObjectImpl():
  _isFixedSize( false ) {
    
  }

  LCGenericObjectImpl::LCGenericObjectImpl(int nInt, int nFloat, int nDouble):
  _isFixedSize( true ) {
    _intVec.resize( nInt ) ;
    _floatVec.resize( nFloat ) ;
    _doubleVec.resize( nDouble ) ;
  }

  int LCGenericObjectImpl::getNInt() const{
    return _intVec.size() ;
  }
  int LCGenericObjectImpl::getNFloat() const{
    return _floatVec.size() ;
  }
  
  int LCGenericObjectImpl::getNDouble() const{
    return _doubleVec.size() ;
  }
  
  int LCGenericObjectImpl::getIntVal(int index) const{
    return _intVec[ index ] ;
  }

  float LCGenericObjectImpl::getFloatVal(int index) const{
    return _floatVec[ index ] ;
  }

  float LCGenericObjectImpl::getDoubleVal(int index) const{
    return _doubleVec[ index ] ;
  }
  
  bool LCGenericObjectImpl::isFixedSize() const{
    return _isFixedSize ;
  }
  
  void LCGenericObjectImpl::setIntVal(unsigned index, int value) {
    if( _intVec.size() <= index && !_isFixedSize ) 
      _intVec.resize( index+1 ) ;
    _intVec[ index ] = value ;
  }
  
  void LCGenericObjectImpl::setFloatVal(unsigned index, float value){
    if( _floatVec.size() <= index && !_isFixedSize ) 
      _floatVec.resize( index+1 ) ;
    _floatVec[ index ] = value ;
  }
  
  void LCGenericObjectImpl::setDoubleVal(unsigned index, double value){
    if( _doubleVec.size() <= index && !_isFixedSize ) 
      _doubleVec.resize( index+1 ) ;
    _doubleVec[ index ] = value ;
  }

}
