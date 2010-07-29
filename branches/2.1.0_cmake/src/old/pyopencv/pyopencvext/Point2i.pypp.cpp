// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "ndarray.hpp"
#include "opencv_converters.hpp"
#include "Point2i.pypp.hpp"

namespace bp = boost::python;

void register_Point2i_class(){

    { //::cv::Point_< int >
        typedef bp::class_< cv::Point_< int > > Point2i_exposer_t;
        Point2i_exposer_t Point2i_exposer = Point2i_exposer_t( "Point2i", bp::init< >() );
        bp::scope Point2i_scope( Point2i_exposer );
        Point2i_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Point_< int > >() );
        Point2i_exposer.def( bp::init< int, int >(( bp::arg("_x"), bp::arg("_y") )) );
        Point2i_exposer.def( bp::init< cv::Point_< int > const & >(( bp::arg("pt") )) );
        Point2i_exposer.def( bp::init< CvPoint const & >(( bp::arg("pt") )) );
        bp::implicitly_convertible< CvPoint const &, cv::Point_< int > >();
        Point2i_exposer.def( bp::init< CvPoint2D32f const & >(( bp::arg("pt") )) );
        bp::implicitly_convertible< CvPoint2D32f const &, cv::Point_< int > >();
        Point2i_exposer.def( bp::init< cv::Size_< int > const & >(( bp::arg("sz") )) );
        bp::implicitly_convertible< cv::Size_< int > const &, cv::Point_< int > >();
        Point2i_exposer.def( bp::init< cv::Vec< int, 2 > const & >(( bp::arg("v") )) );
        bp::implicitly_convertible< cv::Vec< int, 2 > const &, cv::Point_< int > >();
        { //::cv::Point_< int >::ddot
        
            typedef cv::Point_< int > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Point_< int > const & ) const;
            
            Point2i_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Point_< int >::ddot )
                , ( bp::arg("pt") ) );
        
        }
        { //::cv::Point_< int >::dot
        
            typedef cv::Point_< int > exported_class_t;
            typedef int ( exported_class_t::*dot_function_type )( ::cv::Point_< int > const & ) const;
            
            Point2i_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Point_< int >::dot )
                , ( bp::arg("pt") ) );
        
        }
        { //::cv::Point_< int >::inside
        
            typedef cv::Point_< int > exported_class_t;
            typedef bool ( exported_class_t::*inside_function_type )( ::cv::Rect_< int > const & ) const;
            
            Point2i_exposer.def( 
                "inside"
                , inside_function_type( &::cv::Point_< int >::inside )
                , ( bp::arg("r") ) );
        
        }
        Point2i_exposer.def( "__temp_func", &cv::Point_< int >::operator ::CvPoint , "\nWrapped function:"
    "\n    operator ::CvPoint" );
        Point2i_exposer.def( "__temp_func", &cv::Point_< int >::operator ::CvPoint2D32f , "\nWrapped function:"
    "\n    operator ::CvPoint2D32f" );
        Point2i_exposer.def( "__temp_func", &cv::Point_< int >::operator ::cv::Vec< int, 2 > , "\nWrapped function:"
    "\n    operator ::cv::Vec<int, 2>" );
        { //::cv::Point_< int >::operator=
        
            typedef cv::Point_< int > exported_class_t;
            typedef ::cv::Point_< int > & ( exported_class_t::*assign_function_type )( ::cv::Point_< int > const & ) ;
            
            Point2i_exposer.def( 
                "assign"
                , assign_function_type( &::cv::Point_< int >::operator= )
                , ( bp::arg("pt") )
                , bp::return_self< >()
                , "\nWrapped function:"
    "\n    operator=" );
        
        }
        Point2i_exposer.def_readwrite( "x", &cv::Point_< int >::x );
        Point2i_exposer.def_readwrite( "y", &cv::Point_< int >::y );
        Point2i_exposer.def("from_ndarray", &sdcpp::from_ndarray< cv::Point_<int> >, (bp::arg("inst_ndarray")) );
        Point2i_exposer.staticmethod("from_ndarray");
        Point2i_exposer.add_property("ndarray", &sdcpp::as_ndarray< cv::Point_<int> >);
        Point2i_exposer.def("__iadd__", &__iadd__<cv::Point2i, cv::Point2i>, bp::return_self<>() );
        Point2i_exposer.def("__isub__", &__isub__<cv::Point2i, cv::Point2i>, bp::return_self<>() );
        Point2i_exposer.def("__imul__", &__imul__<cv::Point2i, double>, bp::return_self<>() );
        Point2i_exposer.def("__add__", &__add__<cv::Point2i, cv::Point2i> );
        Point2i_exposer.def("__sub__", &__sub__<cv::Point2i, cv::Point2i> );
        Point2i_exposer.def("__eq__", &__eq__<cv::Point2i, cv::Point2i> );
        Point2i_exposer.def("__neg__", &__neg__<cv::Point2i> );
        Point2i_exposer.def("__mul__", &__mul__<cv::Point2i, double> );
        Point2i_exposer.def("__rmul__", &__rmul__<double, cv::Point2i> );
    }

}