// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "opencv_converters.hpp"
#include "CvHaarClassifier.pypp.hpp"

namespace bp = boost::python;

static ::CvHaarFeature * get_haar_feature( ::CvHaarClassifier const & inst ) { return inst.haar_feature; }

static cv::Mat get_threshold(::CvHaarClassifier const &inst)
{
    cv::Mat threshold2;
    convert_from_array_of_T_to_Mat(inst.threshold, inst.count+0, threshold2);
    return threshold2;
}

static cv::Mat get_left(::CvHaarClassifier const &inst)
{
    cv::Mat left2;
    convert_from_array_of_T_to_Mat(inst.left, inst.count+0, left2);
    return left2;
}

static cv::Mat get_right(::CvHaarClassifier const &inst)
{
    cv::Mat right2;
    convert_from_array_of_T_to_Mat(inst.right, inst.count+0, right2);
    return right2;
}

static cv::Mat get_alpha(::CvHaarClassifier const &inst)
{
    cv::Mat alpha2;
    convert_from_array_of_T_to_Mat(inst.alpha, inst.count+1, alpha2);
    return alpha2;
}

void register_CvHaarClassifier_class(){

    bp::class_< CvHaarClassifier >( "CvHaarClassifier" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvHaarClassifier >() )    
        .def_readwrite( "count", &CvHaarClassifier::count )    
        .add_property( "haar_feature", bp::make_function(&::get_haar_feature, bp::return_internal_reference<>()) )    
        .add_property( "threshold", &::get_threshold)    
        .add_property( "left", &::get_left)    
        .add_property( "right", &::get_right)    
        .add_property( "alpha", &::get_alpha);

}