// This file has been generated by Py++.

#include "boost/python.hpp"
#include "opencv_headers.hpp"
#include "pyopencvext_free_functions_gr.pypp.hpp"

namespace bp = boost::python;

void register_free_functions_gr(){

    { //::cv::grabCut
    
        typedef void ( *grabCut_function_type )( ::cv::Mat const &,::cv::Mat &,::cv::Rect,::cv::Mat &,::cv::Mat &,int,int );
        
        bp::def( 
            "grabCut"
            , grabCut_function_type( &::cv::grabCut )
            , ( bp::arg("img"), bp::arg("mask"), bp::arg("rect"), bp::arg("bgdModel"), bp::arg("fgdModel"), bp::arg("iterCount"), bp::arg("mode")=int(::cv::GC_EVAL) ) );
    
    }

}
