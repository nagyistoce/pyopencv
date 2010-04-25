// This file has been generated by Py++.

#include "boost/python.hpp"
#include "opencv_headers.hpp"
#include "pyopencvext_free_functions_cl.pypp.hpp"

namespace bp = boost::python;

void register_free_functions_cl(){

    { //::cv::clipLine
    
        typedef bool ( *clipLine_function_type )( ::cv::Rect,::cv::Point &,::cv::Point & );
        
        bp::def( 
            "clipLine"
            , clipLine_function_type( &::cv::clipLine )
            , ( bp::arg("img_rect"), bp::arg("pt1"), bp::arg("pt2") )
            , "\nClips the line against the image rectangle."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/drawing_functions.html#cv-clipline" );
    
    }

    { //::cv::clipLine
    
        typedef bool ( *clipLine_function_type )( ::cv::Size,::cv::Point &,::cv::Point & );
        
        bp::def( 
            "clipLine"
            , clipLine_function_type( &::cv::clipLine )
            , ( bp::arg("imgSize"), bp::arg("pt1"), bp::arg("pt2") )
            , "\nClips the line against the image rectangle."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/drawing_functions.html#cv-clipline" );
    
    }

    { //::cvClearMemStorage
    
        typedef void ( *clearMemStorage_function_type )( ::CvMemStorage * );
        
        bp::def( 
            "clearMemStorage"
            , clearMemStorage_function_type( &::cvClearMemStorage )
            , ( bp::arg("storage") )
            , "\nWrapped function:"
    "\n    cvClearMemStorage" );
    
    }

    { //::cvClearSeq
    
        typedef void ( *clearSeq_function_type )( ::CvSeq * );
        
        bp::def( 
            "clearSeq"
            , clearSeq_function_type( &::cvClearSeq )
            , ( bp::arg("seq") )
            , "\nWrapped function:"
    "\n    cvClearSeq" );
    
    }

    { //::cvClearSet
    
        typedef void ( *clearSet_function_type )( ::CvSet * );
        
        bp::def( 
            "clearSet"
            , clearSet_function_type( &::cvClearSet )
            , ( bp::arg("set_header") )
            , "\nWrapped function:"
    "\n    cvClearSet" );
    
    }

    { //::cvClearSubdivVoronoi2D
    
        typedef void ( *clearSubdivVoronoi2D_function_type )( ::CvSubdiv2D * );
        
        bp::def( 
            "clearSubdivVoronoi2D"
            , clearSubdivVoronoi2D_function_type( &::cvClearSubdivVoronoi2D )
            , ( bp::arg("subdiv") )
            , "\nWrapped function:"
    "\n    cvClearSubdivVoronoi2D" );
    
    }

    { //::cvCloneSeq
    
        typedef ::CvSeq * ( *cloneSeq_function_type )( ::CvSeq const *,::CvMemStorage * );
        
        bp::def( 
            "cloneSeq"
            , cloneSeq_function_type( &::cvCloneSeq )
            , ( bp::arg("seq"), bp::arg("storage")=bp::object() )
            , bp::with_custodian_and_ward_postcall< 0, 2, bp::return_value_policy< bp::reference_existing_object > >()
            , "\nWrapped function:"
    "\n    cvCloneSeq" );
    
    }

}
