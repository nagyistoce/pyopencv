// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "SpinImageModel.pypp.hpp"

namespace bp = boost::python;

static boost::python::object match_86773a6b4d89ae97806d1109a2438811( ::cv::SpinImageModel & inst, ::cv::SpinImageModel const & scene ){
    std::vector<std::vector<cv::Vec<int,2> > > result3;
    inst.match(scene, result3);
    return bp::object( result3 );
}

void register_SpinImageModel_class(){

    { //::cv::SpinImageModel
        typedef bp::class_< cv::SpinImageModel > SpinImageModel_exposer_t;
        SpinImageModel_exposer_t SpinImageModel_exposer = SpinImageModel_exposer_t( "SpinImageModel", bp::init< >() );
        bp::scope SpinImageModel_scope( SpinImageModel_exposer );
        SpinImageModel_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::SpinImageModel >() );
        SpinImageModel_exposer.def( bp::init< cv::Mesh3D const & >(( bp::arg("mesh") )) );
        bp::implicitly_convertible< cv::Mesh3D const &, cv::SpinImageModel >();
        { //::cv::SpinImageModel::compute
        
            typedef void ( ::cv::SpinImageModel::*compute_function_type )(  ) ;
            
            SpinImageModel_exposer.def( 
                "compute"
                , compute_function_type( &::cv::SpinImageModel::compute ) );
        
        }
        { //::cv::SpinImageModel::getMesh
        
            typedef ::cv::Mesh3D const & ( ::cv::SpinImageModel::*getMesh_function_type )(  ) const;
            
            SpinImageModel_exposer.def( 
                "getMesh"
                , getMesh_function_type( &::cv::SpinImageModel::getMesh )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::cv::SpinImageModel::getMesh
        
            typedef ::cv::Mesh3D & ( ::cv::SpinImageModel::*getMesh_function_type )(  ) ;
            
            SpinImageModel_exposer.def( 
                "getMesh"
                , getMesh_function_type( &::cv::SpinImageModel::getMesh )
                , bp::return_internal_reference< >() );
        
        }
        { //::cv::SpinImageModel::getSpinCount
        
            typedef ::size_t ( ::cv::SpinImageModel::*getSpinCount_function_type )(  ) const;
            
            SpinImageModel_exposer.def( 
                "getSpinCount"
                , getSpinCount_function_type( &::cv::SpinImageModel::getSpinCount ) );
        
        }
        { //::cv::SpinImageModel::getSpinImage
        
            typedef ::cv::Mat ( ::cv::SpinImageModel::*getSpinImage_function_type )( ::size_t ) const;
            
            SpinImageModel_exposer.def( 
                "getSpinImage"
                , getSpinImage_function_type( &::cv::SpinImageModel::getSpinImage )
                , ( bp::arg("index") ) );
        
        }
        { //::cv::SpinImageModel::getSpinNormal
        
            typedef ::cv::Point3f const & ( ::cv::SpinImageModel::*getSpinNormal_function_type )( ::size_t ) const;
            
            SpinImageModel_exposer.def( 
                "getSpinNormal"
                , getSpinNormal_function_type( &::cv::SpinImageModel::getSpinNormal )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::cv::SpinImageModel::getSpinVertex
        
            typedef ::cv::Point3f const & ( ::cv::SpinImageModel::*getSpinVertex_function_type )( ::size_t ) const;
            
            SpinImageModel_exposer.def( 
                "getSpinVertex"
                , getSpinVertex_function_type( &::cv::SpinImageModel::getSpinVertex )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::cv::SpinImageModel::match
        
            typedef boost::python::object ( *match_function_type )( cv::SpinImageModel &,cv::SpinImageModel const & );
            
            SpinImageModel_exposer.def( 
                "match"
                , match_function_type( &match_86773a6b4d89ae97806d1109a2438811 )
                , ( bp::arg("inst"), bp::arg("scene") )
                , "\nArgument 'result':"\
    "\n    C/C++ type: ::std::vector< std::vector< cv::Vec<int, 2> > > &."\
    "\n    Python type: vector_vector_Vec2i."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nReturns:"\
    "\n    result" );
        
        }
        { //::cv::SpinImageModel::packRandomScaledSpins
        
            typedef ::cv::Mat ( ::cv::SpinImageModel::*packRandomScaledSpins_function_type )( bool,::size_t,::size_t ) const;
            
            SpinImageModel_exposer.def( 
                "packRandomScaledSpins"
                , packRandomScaledSpins_function_type( &::cv::SpinImageModel::packRandomScaledSpins )
                , ( bp::arg("separateScale")=(bool)(false), bp::arg("xCount")=(::size_t)(10), bp::arg("yCount")=(::size_t)(10) ) );
        
        }
        { //::cv::SpinImageModel::selectRandomSubset
        
            typedef void ( ::cv::SpinImageModel::*selectRandomSubset_function_type )( float ) ;
            
            SpinImageModel_exposer.def( 
                "selectRandomSubset"
                , selectRandomSubset_function_type( &::cv::SpinImageModel::selectRandomSubset )
                , ( bp::arg("ratio") ) );
        
        }
        { //::cv::SpinImageModel::setSubset
        
            typedef void ( ::cv::SpinImageModel::*setSubset_function_type )( ::std::vector< int > const & ) ;
            
            SpinImageModel_exposer.def( 
                "setSubset"
                , setSubset_function_type( &::cv::SpinImageModel::setSubset )
                , ( bp::arg("subset") ) );
        
        }
        { //::cv::SpinImageModel::spinCorrelation
        
            typedef bool ( *spinCorrelation_function_type )( ::cv::Mat const &,::cv::Mat const &,float,float & );
            
            SpinImageModel_exposer.def( 
                "spinCorrelation"
                , spinCorrelation_function_type( &::cv::SpinImageModel::spinCorrelation )
                , ( bp::arg("spin1"), bp::arg("spin2"), bp::arg("lambda"), bp::arg("result") ) );
        
        }
        SpinImageModel_exposer.def_readwrite( "T_GeometriccConsistency", &cv::SpinImageModel::T_GeometriccConsistency );
        SpinImageModel_exposer.def_readwrite( "T_GroupingCorespondances", &cv::SpinImageModel::T_GroupingCorespondances );
        SpinImageModel_exposer.def_readwrite( "binSize", &cv::SpinImageModel::binSize );
        SpinImageModel_exposer.def_readwrite( "gamma", &cv::SpinImageModel::gamma );
        SpinImageModel_exposer.def_readwrite( "imageWidth", &cv::SpinImageModel::imageWidth );
        SpinImageModel_exposer.def_readwrite( "lambda_", &cv::SpinImageModel::lambda );
        SpinImageModel_exposer.def_readwrite( "minNeighbors", &cv::SpinImageModel::minNeighbors );
        SpinImageModel_exposer.def_readwrite( "normalRadius", &cv::SpinImageModel::normalRadius );
        SpinImageModel_exposer.staticmethod( "spinCorrelation" );
    }

}
