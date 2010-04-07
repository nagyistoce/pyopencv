// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvSURFParams.pypp.hpp"

namespace bp = boost::python;

void register_CvSURFParams_class(){

    bp::class_< CvSURFParams >( "CvSURFParams" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvSURFParams >() )    
        .def_readwrite( "extended", &CvSURFParams::extended )    
        .def_readwrite( "hessianThreshold", &CvSURFParams::hessianThreshold )    
        .def_readwrite( "nOctaveLayers", &CvSURFParams::nOctaveLayers )    
        .def_readwrite( "nOctaves", &CvSURFParams::nOctaves );

}