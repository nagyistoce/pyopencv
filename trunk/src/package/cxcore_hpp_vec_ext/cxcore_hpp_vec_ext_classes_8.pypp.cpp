// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "cxcore_hpp_vec_wrapper.hpp"
#include "ndarray.hpp"
#include "opencv_converters.hpp"
#include "cxcore_hpp_vec_ext_classes_8.pypp.hpp"

namespace bp = boost::python;

void register_classes_8(){

    { //::cv::Vec< int, 2 >
        typedef bp::class_< cv::Vec< int, 2 > > Vec2i_exposer_t;
        Vec2i_exposer_t Vec2i_exposer = Vec2i_exposer_t( "Vec2i", bp::init< >() );
        bp::scope Vec2i_scope( Vec2i_exposer );
        Vec2i_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Vec< int, 2 > >() );
        bp::scope().attr("depth") = (int)cv::Vec<int, 2>::depth;
        bp::scope().attr("channels") = (int)cv::Vec<int, 2>::channels;
        bp::scope().attr("type") = (int)cv::Vec<int, 2>::type;
        Vec2i_exposer.def( bp::init< int >(( bp::arg("v0") )) );
        bp::implicitly_convertible< int, cv::Vec< int, 2 > >();
        Vec2i_exposer.def( bp::init< int, int >(( bp::arg("v0"), bp::arg("v1") )) );
        Vec2i_exposer.def( bp::init< int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2") )) );
        Vec2i_exposer.def( bp::init< int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3") )) );
        Vec2i_exposer.def( bp::init< int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4") )) );
        Vec2i_exposer.def( bp::init< int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5") )) );
        Vec2i_exposer.def( bp::init< int, int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6") )) );
        Vec2i_exposer.def( bp::init< int, int, int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7") )) );
        Vec2i_exposer.def( bp::init< int, int, int, int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8") )) );
        Vec2i_exposer.def( bp::init< int, int, int, int, int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8"), bp::arg("v9") )) );
        Vec2i_exposer.def( bp::init< cv::Vec< int, 2 > const & >(( bp::arg("v") )) );
        { //::cv::Vec< int, 2 >::all
        
            typedef cv::Vec< int, 2 > exported_class_t;
            typedef ::cv::Vec< int, 2 > ( *all_function_type )( int );
            
            Vec2i_exposer.def( 
                "all"
                , all_function_type( &::cv::Vec< int, 2 >::all )
                , ( bp::arg("alpha") ) );
        
        }
        { //::cv::Vec< int, 2 >::cross
        
            typedef cv::Vec< int, 2 > exported_class_t;
            typedef ::cv::Vec< int, 2 > ( exported_class_t::*cross_function_type )( ::cv::Vec< int, 2 > const & ) const;
            
            Vec2i_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Vec< int, 2 >::cross )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< int, 2 >::ddot
        
            typedef cv::Vec< int, 2 > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Vec< int, 2 > const & ) const;
            
            Vec2i_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Vec< int, 2 >::ddot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< int, 2 >::dot
        
            typedef cv::Vec< int, 2 > exported_class_t;
            typedef int ( exported_class_t::*dot_function_type )( ::cv::Vec< int, 2 > const & ) const;
            
            Vec2i_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Vec< int, 2 >::dot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< int, 2 >::operator[]
        
            typedef cv::Vec< int, 2 > exported_class_t;
            typedef int ( exported_class_t::*__getitem___function_type )( int ) const;
            
            Vec2i_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< int, 2 >::operator[] )
                , ( bp::arg("i") )
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        { //::cv::Vec< int, 2 >::operator[]
        
            typedef cv::Vec< int, 2 > exported_class_t;
            typedef int & ( exported_class_t::*__getitem___function_type )( int ) ;
            
            Vec2i_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< int, 2 >::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >()
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        Vec2i_exposer.staticmethod( "all" );
        Vec2i_exposer.add_property("ndarray", &sdcpp::as_ndarray< cv::Vec<int,2> >);
        Vec2i_exposer.def("__iadd__", &__iadd__<cv::Vec2i, cv::Vec2b>, bp::return_self<>() );
        Vec2i_exposer.def("__isub__", &__isub__<cv::Vec2i, cv::Vec2b>, bp::return_self<>() );
        Vec2i_exposer.def("__iadd__", &__iadd__<cv::Vec2i, cv::Vec2s>, bp::return_self<>() );
        Vec2i_exposer.def("__isub__", &__isub__<cv::Vec2i, cv::Vec2s>, bp::return_self<>() );
        Vec2i_exposer.def("__iadd__", &__iadd__<cv::Vec2i, cv::Vec2w>, bp::return_self<>() );
        Vec2i_exposer.def("__isub__", &__isub__<cv::Vec2i, cv::Vec2w>, bp::return_self<>() );
        Vec2i_exposer.def("__iadd__", &__iadd__<cv::Vec2i, cv::Vec2i>, bp::return_self<>() );
        Vec2i_exposer.def("__isub__", &__isub__<cv::Vec2i, cv::Vec2i>, bp::return_self<>() );
        Vec2i_exposer.def("__iadd__", &__iadd__<cv::Vec2i, cv::Vec2f>, bp::return_self<>() );
        Vec2i_exposer.def("__isub__", &__isub__<cv::Vec2i, cv::Vec2f>, bp::return_self<>() );
        Vec2i_exposer.def("__iadd__", &__iadd__<cv::Vec2i, cv::Vec2d>, bp::return_self<>() );
        Vec2i_exposer.def("__isub__", &__isub__<cv::Vec2i, cv::Vec2d>, bp::return_self<>() );
        Vec2i_exposer.def("__add__", &__add__<cv::Vec2i, cv::Vec2i> );
        Vec2i_exposer.def("__sub__", &__sub__<cv::Vec2i, cv::Vec2i> );
        Vec2i_exposer.def("__eq__", &__eq__<cv::Vec2i, cv::Vec2i> );
        Vec2i_exposer.def("__ne__", &__ne__<cv::Vec2i, cv::Vec2i> );
        Vec2i_exposer.def("__imul__", &__imul__<cv::Vec2i, int>, bp::return_self<>() );
        Vec2i_exposer.def("__mul__", &__mul__<cv::Vec2i, int> );
        Vec2i_exposer.def("__rmul__", &__rmul__<int, cv::Vec2i> );
        Vec2i_exposer.def("__neg__", &__neg__<cv::Vec2i> );
    }

    { //::cv::Vec< int, 3 >
        typedef bp::class_< cv::Vec< int, 3 > > Vec3i_exposer_t;
        Vec3i_exposer_t Vec3i_exposer = Vec3i_exposer_t( "Vec3i", bp::init< >() );
        bp::scope Vec3i_scope( Vec3i_exposer );
        Vec3i_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Vec< int, 3 > >() );
        bp::scope().attr("depth") = (int)cv::Vec<int, 3>::depth;
        bp::scope().attr("channels") = (int)cv::Vec<int, 3>::channels;
        bp::scope().attr("type") = (int)cv::Vec<int, 3>::type;
        Vec3i_exposer.def( bp::init< int >(( bp::arg("v0") )) );
        bp::implicitly_convertible< int, cv::Vec< int, 3 > >();
        Vec3i_exposer.def( bp::init< int, int >(( bp::arg("v0"), bp::arg("v1") )) );
        Vec3i_exposer.def( bp::init< int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2") )) );
        Vec3i_exposer.def( bp::init< int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3") )) );
        Vec3i_exposer.def( bp::init< int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4") )) );
        Vec3i_exposer.def( bp::init< int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5") )) );
        Vec3i_exposer.def( bp::init< int, int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6") )) );
        Vec3i_exposer.def( bp::init< int, int, int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7") )) );
        Vec3i_exposer.def( bp::init< int, int, int, int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8") )) );
        Vec3i_exposer.def( bp::init< int, int, int, int, int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8"), bp::arg("v9") )) );
        Vec3i_exposer.def( bp::init< cv::Vec< int, 3 > const & >(( bp::arg("v") )) );
        { //::cv::Vec< int, 3 >::all
        
            typedef cv::Vec< int, 3 > exported_class_t;
            typedef ::cv::Vec< int, 3 > ( *all_function_type )( int );
            
            Vec3i_exposer.def( 
                "all"
                , all_function_type( &::cv::Vec< int, 3 >::all )
                , ( bp::arg("alpha") ) );
        
        }
        { //::cv::Vec< int, 3 >::cross
        
            typedef cv::Vec< int, 3 > exported_class_t;
            typedef ::cv::Vec< int, 3 > ( exported_class_t::*cross_function_type )( ::cv::Vec< int, 3 > const & ) const;
            
            Vec3i_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Vec< int, 3 >::cross )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< int, 3 >::ddot
        
            typedef cv::Vec< int, 3 > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Vec< int, 3 > const & ) const;
            
            Vec3i_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Vec< int, 3 >::ddot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< int, 3 >::dot
        
            typedef cv::Vec< int, 3 > exported_class_t;
            typedef int ( exported_class_t::*dot_function_type )( ::cv::Vec< int, 3 > const & ) const;
            
            Vec3i_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Vec< int, 3 >::dot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< int, 3 >::operator[]
        
            typedef cv::Vec< int, 3 > exported_class_t;
            typedef int ( exported_class_t::*__getitem___function_type )( int ) const;
            
            Vec3i_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< int, 3 >::operator[] )
                , ( bp::arg("i") )
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        { //::cv::Vec< int, 3 >::operator[]
        
            typedef cv::Vec< int, 3 > exported_class_t;
            typedef int & ( exported_class_t::*__getitem___function_type )( int ) ;
            
            Vec3i_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< int, 3 >::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >()
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        Vec3i_exposer.staticmethod( "all" );
        Vec3i_exposer.add_property("ndarray", &sdcpp::as_ndarray< cv::Vec<int,3> >);
        Vec3i_exposer.def("__iadd__", &__iadd__<cv::Vec3i, cv::Vec3b>, bp::return_self<>() );
        Vec3i_exposer.def("__isub__", &__isub__<cv::Vec3i, cv::Vec3b>, bp::return_self<>() );
        Vec3i_exposer.def("__iadd__", &__iadd__<cv::Vec3i, cv::Vec3s>, bp::return_self<>() );
        Vec3i_exposer.def("__isub__", &__isub__<cv::Vec3i, cv::Vec3s>, bp::return_self<>() );
        Vec3i_exposer.def("__iadd__", &__iadd__<cv::Vec3i, cv::Vec3w>, bp::return_self<>() );
        Vec3i_exposer.def("__isub__", &__isub__<cv::Vec3i, cv::Vec3w>, bp::return_self<>() );
        Vec3i_exposer.def("__iadd__", &__iadd__<cv::Vec3i, cv::Vec3i>, bp::return_self<>() );
        Vec3i_exposer.def("__isub__", &__isub__<cv::Vec3i, cv::Vec3i>, bp::return_self<>() );
        Vec3i_exposer.def("__iadd__", &__iadd__<cv::Vec3i, cv::Vec3f>, bp::return_self<>() );
        Vec3i_exposer.def("__isub__", &__isub__<cv::Vec3i, cv::Vec3f>, bp::return_self<>() );
        Vec3i_exposer.def("__iadd__", &__iadd__<cv::Vec3i, cv::Vec3d>, bp::return_self<>() );
        Vec3i_exposer.def("__isub__", &__isub__<cv::Vec3i, cv::Vec3d>, bp::return_self<>() );
        Vec3i_exposer.def("__add__", &__add__<cv::Vec3i, cv::Vec3i> );
        Vec3i_exposer.def("__sub__", &__sub__<cv::Vec3i, cv::Vec3i> );
        Vec3i_exposer.def("__eq__", &__eq__<cv::Vec3i, cv::Vec3i> );
        Vec3i_exposer.def("__ne__", &__ne__<cv::Vec3i, cv::Vec3i> );
        Vec3i_exposer.def("__imul__", &__imul__<cv::Vec3i, int>, bp::return_self<>() );
        Vec3i_exposer.def("__mul__", &__mul__<cv::Vec3i, int> );
        Vec3i_exposer.def("__rmul__", &__rmul__<int, cv::Vec3i> );
        Vec3i_exposer.def("__neg__", &__neg__<cv::Vec3i> );
    }

    { //::cv::Vec< int, 4 >
        typedef bp::class_< cv::Vec< int, 4 > > Vec4i_exposer_t;
        Vec4i_exposer_t Vec4i_exposer = Vec4i_exposer_t( "Vec4i", bp::init< >() );
        bp::scope Vec4i_scope( Vec4i_exposer );
        Vec4i_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Vec< int, 4 > >() );
        bp::scope().attr("depth") = (int)cv::Vec<int, 4>::depth;
        bp::scope().attr("channels") = (int)cv::Vec<int, 4>::channels;
        bp::scope().attr("type") = (int)cv::Vec<int, 4>::type;
        Vec4i_exposer.def( bp::init< int >(( bp::arg("v0") )) );
        bp::implicitly_convertible< int, cv::Vec< int, 4 > >();
        Vec4i_exposer.def( bp::init< int, int >(( bp::arg("v0"), bp::arg("v1") )) );
        Vec4i_exposer.def( bp::init< int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2") )) );
        Vec4i_exposer.def( bp::init< int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3") )) );
        Vec4i_exposer.def( bp::init< int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4") )) );
        Vec4i_exposer.def( bp::init< int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5") )) );
        Vec4i_exposer.def( bp::init< int, int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6") )) );
        Vec4i_exposer.def( bp::init< int, int, int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7") )) );
        Vec4i_exposer.def( bp::init< int, int, int, int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8") )) );
        Vec4i_exposer.def( bp::init< int, int, int, int, int, int, int, int, int, int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8"), bp::arg("v9") )) );
        Vec4i_exposer.def( bp::init< cv::Vec< int, 4 > const & >(( bp::arg("v") )) );
        { //::cv::Vec< int, 4 >::all
        
            typedef cv::Vec< int, 4 > exported_class_t;
            typedef ::cv::Vec< int, 4 > ( *all_function_type )( int );
            
            Vec4i_exposer.def( 
                "all"
                , all_function_type( &::cv::Vec< int, 4 >::all )
                , ( bp::arg("alpha") ) );
        
        }
        { //::cv::Vec< int, 4 >::cross
        
            typedef cv::Vec< int, 4 > exported_class_t;
            typedef ::cv::Vec< int, 4 > ( exported_class_t::*cross_function_type )( ::cv::Vec< int, 4 > const & ) const;
            
            Vec4i_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Vec< int, 4 >::cross )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< int, 4 >::ddot
        
            typedef cv::Vec< int, 4 > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Vec< int, 4 > const & ) const;
            
            Vec4i_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Vec< int, 4 >::ddot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< int, 4 >::dot
        
            typedef cv::Vec< int, 4 > exported_class_t;
            typedef int ( exported_class_t::*dot_function_type )( ::cv::Vec< int, 4 > const & ) const;
            
            Vec4i_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Vec< int, 4 >::dot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< int, 4 >::operator[]
        
            typedef cv::Vec< int, 4 > exported_class_t;
            typedef int ( exported_class_t::*__getitem___function_type )( int ) const;
            
            Vec4i_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< int, 4 >::operator[] )
                , ( bp::arg("i") )
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        { //::cv::Vec< int, 4 >::operator[]
        
            typedef cv::Vec< int, 4 > exported_class_t;
            typedef int & ( exported_class_t::*__getitem___function_type )( int ) ;
            
            Vec4i_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< int, 4 >::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >()
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        Vec4i_exposer.staticmethod( "all" );
        Vec4i_exposer.add_property("ndarray", &sdcpp::as_ndarray< cv::Vec<int,4> >);
        Vec4i_exposer.def("__iadd__", &__iadd__<cv::Vec4i, cv::Vec4b>, bp::return_self<>() );
        Vec4i_exposer.def("__isub__", &__isub__<cv::Vec4i, cv::Vec4b>, bp::return_self<>() );
        Vec4i_exposer.def("__iadd__", &__iadd__<cv::Vec4i, cv::Vec4s>, bp::return_self<>() );
        Vec4i_exposer.def("__isub__", &__isub__<cv::Vec4i, cv::Vec4s>, bp::return_self<>() );
        Vec4i_exposer.def("__iadd__", &__iadd__<cv::Vec4i, cv::Vec4w>, bp::return_self<>() );
        Vec4i_exposer.def("__isub__", &__isub__<cv::Vec4i, cv::Vec4w>, bp::return_self<>() );
        Vec4i_exposer.def("__iadd__", &__iadd__<cv::Vec4i, cv::Vec4i>, bp::return_self<>() );
        Vec4i_exposer.def("__isub__", &__isub__<cv::Vec4i, cv::Vec4i>, bp::return_self<>() );
        Vec4i_exposer.def("__iadd__", &__iadd__<cv::Vec4i, cv::Vec4f>, bp::return_self<>() );
        Vec4i_exposer.def("__isub__", &__isub__<cv::Vec4i, cv::Vec4f>, bp::return_self<>() );
        Vec4i_exposer.def("__iadd__", &__iadd__<cv::Vec4i, cv::Vec4d>, bp::return_self<>() );
        Vec4i_exposer.def("__isub__", &__isub__<cv::Vec4i, cv::Vec4d>, bp::return_self<>() );
        Vec4i_exposer.def("__add__", &__add__<cv::Vec4i, cv::Vec4i> );
        Vec4i_exposer.def("__sub__", &__sub__<cv::Vec4i, cv::Vec4i> );
        Vec4i_exposer.def("__eq__", &__eq__<cv::Vec4i, cv::Vec4i> );
        Vec4i_exposer.def("__ne__", &__ne__<cv::Vec4i, cv::Vec4i> );
        Vec4i_exposer.def("__imul__", &__imul__<cv::Vec4i, int>, bp::return_self<>() );
        Vec4i_exposer.def("__mul__", &__mul__<cv::Vec4i, int> );
        Vec4i_exposer.def("__rmul__", &__rmul__<int, cv::Vec4i> );
        Vec4i_exposer.def("__neg__", &__neg__<cv::Vec4i> );
    }

    { //::cv::Vec< short, 2 >
        typedef bp::class_< cv::Vec< short, 2 > > Vec2s_exposer_t;
        Vec2s_exposer_t Vec2s_exposer = Vec2s_exposer_t( "Vec2s", bp::init< >() );
        bp::scope Vec2s_scope( Vec2s_exposer );
        Vec2s_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Vec< short, 2 > >() );
        bp::scope().attr("depth") = (int)cv::Vec<short, 2>::depth;
        bp::scope().attr("channels") = (int)cv::Vec<short, 2>::channels;
        bp::scope().attr("type") = (int)cv::Vec<short, 2>::type;
        Vec2s_exposer.def( bp::init< short int >(( bp::arg("v0") )) );
        bp::implicitly_convertible< short int, cv::Vec< short, 2 > >();
        Vec2s_exposer.def( bp::init< short int, short int >(( bp::arg("v0"), bp::arg("v1") )) );
        Vec2s_exposer.def( bp::init< short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2") )) );
        Vec2s_exposer.def( bp::init< short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3") )) );
        Vec2s_exposer.def( bp::init< short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4") )) );
        Vec2s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5") )) );
        Vec2s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6") )) );
        Vec2s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7") )) );
        Vec2s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8") )) );
        Vec2s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8"), bp::arg("v9") )) );
        Vec2s_exposer.def( bp::init< cv::Vec< short, 2 > const & >(( bp::arg("v") )) );
        { //::cv::Vec< short, 2 >::all
        
            typedef cv::Vec< short, 2 > exported_class_t;
            typedef ::cv::Vec< short, 2 > ( *all_function_type )( short int );
            
            Vec2s_exposer.def( 
                "all"
                , all_function_type( &::cv::Vec< short, 2 >::all )
                , ( bp::arg("alpha") ) );
        
        }
        { //::cv::Vec< short, 2 >::cross
        
            typedef cv::Vec< short, 2 > exported_class_t;
            typedef ::cv::Vec< short, 2 > ( exported_class_t::*cross_function_type )( ::cv::Vec< short, 2 > const & ) const;
            
            Vec2s_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Vec< short, 2 >::cross )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< short, 2 >::ddot
        
            typedef cv::Vec< short, 2 > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Vec< short, 2 > const & ) const;
            
            Vec2s_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Vec< short, 2 >::ddot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< short, 2 >::dot
        
            typedef cv::Vec< short, 2 > exported_class_t;
            typedef short int ( exported_class_t::*dot_function_type )( ::cv::Vec< short, 2 > const & ) const;
            
            Vec2s_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Vec< short, 2 >::dot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< short, 2 >::operator[]
        
            typedef cv::Vec< short, 2 > exported_class_t;
            typedef short int ( exported_class_t::*__getitem___function_type )( int ) const;
            
            Vec2s_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< short, 2 >::operator[] )
                , ( bp::arg("i") )
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        { //::cv::Vec< short, 2 >::operator[]
        
            typedef cv::Vec< short, 2 > exported_class_t;
            typedef short int & ( exported_class_t::*__getitem___function_type )( int ) ;
            
            Vec2s_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< short, 2 >::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >()
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        Vec2s_exposer.staticmethod( "all" );
        Vec2s_exposer.add_property("ndarray", &sdcpp::as_ndarray< cv::Vec<short,2> >);
        Vec2s_exposer.def("__iadd__", &__iadd__<cv::Vec2s, cv::Vec2b>, bp::return_self<>() );
        Vec2s_exposer.def("__isub__", &__isub__<cv::Vec2s, cv::Vec2b>, bp::return_self<>() );
        Vec2s_exposer.def("__iadd__", &__iadd__<cv::Vec2s, cv::Vec2s>, bp::return_self<>() );
        Vec2s_exposer.def("__isub__", &__isub__<cv::Vec2s, cv::Vec2s>, bp::return_self<>() );
        Vec2s_exposer.def("__iadd__", &__iadd__<cv::Vec2s, cv::Vec2w>, bp::return_self<>() );
        Vec2s_exposer.def("__isub__", &__isub__<cv::Vec2s, cv::Vec2w>, bp::return_self<>() );
        Vec2s_exposer.def("__iadd__", &__iadd__<cv::Vec2s, cv::Vec2i>, bp::return_self<>() );
        Vec2s_exposer.def("__isub__", &__isub__<cv::Vec2s, cv::Vec2i>, bp::return_self<>() );
        Vec2s_exposer.def("__iadd__", &__iadd__<cv::Vec2s, cv::Vec2f>, bp::return_self<>() );
        Vec2s_exposer.def("__isub__", &__isub__<cv::Vec2s, cv::Vec2f>, bp::return_self<>() );
        Vec2s_exposer.def("__iadd__", &__iadd__<cv::Vec2s, cv::Vec2d>, bp::return_self<>() );
        Vec2s_exposer.def("__isub__", &__isub__<cv::Vec2s, cv::Vec2d>, bp::return_self<>() );
        Vec2s_exposer.def("__add__", &__add__<cv::Vec2s, cv::Vec2s> );
        Vec2s_exposer.def("__sub__", &__sub__<cv::Vec2s, cv::Vec2s> );
        Vec2s_exposer.def("__eq__", &__eq__<cv::Vec2s, cv::Vec2s> );
        Vec2s_exposer.def("__ne__", &__ne__<cv::Vec2s, cv::Vec2s> );
        Vec2s_exposer.def("__imul__", &__imul__<cv::Vec2s, short>, bp::return_self<>() );
        Vec2s_exposer.def("__mul__", &__mul__<cv::Vec2s, short> );
        Vec2s_exposer.def("__rmul__", &__rmul__<short, cv::Vec2s> );
        Vec2s_exposer.def("__neg__", &__neg__<cv::Vec2s> );
    }

    { //::cv::Vec< short, 3 >
        typedef bp::class_< cv::Vec< short, 3 > > Vec3s_exposer_t;
        Vec3s_exposer_t Vec3s_exposer = Vec3s_exposer_t( "Vec3s", bp::init< >() );
        bp::scope Vec3s_scope( Vec3s_exposer );
        Vec3s_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Vec< short, 3 > >() );
        bp::scope().attr("depth") = (int)cv::Vec<short, 3>::depth;
        bp::scope().attr("channels") = (int)cv::Vec<short, 3>::channels;
        bp::scope().attr("type") = (int)cv::Vec<short, 3>::type;
        Vec3s_exposer.def( bp::init< short int >(( bp::arg("v0") )) );
        bp::implicitly_convertible< short int, cv::Vec< short, 3 > >();
        Vec3s_exposer.def( bp::init< short int, short int >(( bp::arg("v0"), bp::arg("v1") )) );
        Vec3s_exposer.def( bp::init< short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2") )) );
        Vec3s_exposer.def( bp::init< short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3") )) );
        Vec3s_exposer.def( bp::init< short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4") )) );
        Vec3s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5") )) );
        Vec3s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6") )) );
        Vec3s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7") )) );
        Vec3s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8") )) );
        Vec3s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8"), bp::arg("v9") )) );
        Vec3s_exposer.def( bp::init< cv::Vec< short, 3 > const & >(( bp::arg("v") )) );
        { //::cv::Vec< short, 3 >::all
        
            typedef cv::Vec< short, 3 > exported_class_t;
            typedef ::cv::Vec< short, 3 > ( *all_function_type )( short int );
            
            Vec3s_exposer.def( 
                "all"
                , all_function_type( &::cv::Vec< short, 3 >::all )
                , ( bp::arg("alpha") ) );
        
        }
        { //::cv::Vec< short, 3 >::cross
        
            typedef cv::Vec< short, 3 > exported_class_t;
            typedef ::cv::Vec< short, 3 > ( exported_class_t::*cross_function_type )( ::cv::Vec< short, 3 > const & ) const;
            
            Vec3s_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Vec< short, 3 >::cross )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< short, 3 >::ddot
        
            typedef cv::Vec< short, 3 > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Vec< short, 3 > const & ) const;
            
            Vec3s_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Vec< short, 3 >::ddot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< short, 3 >::dot
        
            typedef cv::Vec< short, 3 > exported_class_t;
            typedef short int ( exported_class_t::*dot_function_type )( ::cv::Vec< short, 3 > const & ) const;
            
            Vec3s_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Vec< short, 3 >::dot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< short, 3 >::operator[]
        
            typedef cv::Vec< short, 3 > exported_class_t;
            typedef short int ( exported_class_t::*__getitem___function_type )( int ) const;
            
            Vec3s_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< short, 3 >::operator[] )
                , ( bp::arg("i") )
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        { //::cv::Vec< short, 3 >::operator[]
        
            typedef cv::Vec< short, 3 > exported_class_t;
            typedef short int & ( exported_class_t::*__getitem___function_type )( int ) ;
            
            Vec3s_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< short, 3 >::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >()
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        Vec3s_exposer.staticmethod( "all" );
        Vec3s_exposer.add_property("ndarray", &sdcpp::as_ndarray< cv::Vec<short,3> >);
        Vec3s_exposer.def("__iadd__", &__iadd__<cv::Vec3s, cv::Vec3b>, bp::return_self<>() );
        Vec3s_exposer.def("__isub__", &__isub__<cv::Vec3s, cv::Vec3b>, bp::return_self<>() );
        Vec3s_exposer.def("__iadd__", &__iadd__<cv::Vec3s, cv::Vec3s>, bp::return_self<>() );
        Vec3s_exposer.def("__isub__", &__isub__<cv::Vec3s, cv::Vec3s>, bp::return_self<>() );
        Vec3s_exposer.def("__iadd__", &__iadd__<cv::Vec3s, cv::Vec3w>, bp::return_self<>() );
        Vec3s_exposer.def("__isub__", &__isub__<cv::Vec3s, cv::Vec3w>, bp::return_self<>() );
        Vec3s_exposer.def("__iadd__", &__iadd__<cv::Vec3s, cv::Vec3i>, bp::return_self<>() );
        Vec3s_exposer.def("__isub__", &__isub__<cv::Vec3s, cv::Vec3i>, bp::return_self<>() );
        Vec3s_exposer.def("__iadd__", &__iadd__<cv::Vec3s, cv::Vec3f>, bp::return_self<>() );
        Vec3s_exposer.def("__isub__", &__isub__<cv::Vec3s, cv::Vec3f>, bp::return_self<>() );
        Vec3s_exposer.def("__iadd__", &__iadd__<cv::Vec3s, cv::Vec3d>, bp::return_self<>() );
        Vec3s_exposer.def("__isub__", &__isub__<cv::Vec3s, cv::Vec3d>, bp::return_self<>() );
        Vec3s_exposer.def("__add__", &__add__<cv::Vec3s, cv::Vec3s> );
        Vec3s_exposer.def("__sub__", &__sub__<cv::Vec3s, cv::Vec3s> );
        Vec3s_exposer.def("__eq__", &__eq__<cv::Vec3s, cv::Vec3s> );
        Vec3s_exposer.def("__ne__", &__ne__<cv::Vec3s, cv::Vec3s> );
        Vec3s_exposer.def("__imul__", &__imul__<cv::Vec3s, short>, bp::return_self<>() );
        Vec3s_exposer.def("__mul__", &__mul__<cv::Vec3s, short> );
        Vec3s_exposer.def("__rmul__", &__rmul__<short, cv::Vec3s> );
        Vec3s_exposer.def("__neg__", &__neg__<cv::Vec3s> );
    }

}