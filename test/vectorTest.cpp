#include "VectorTest.h"

namespace EasySTL {
	namespace VectorTest {
		void testCase1(){
			//std::string old_SGI_vector = "old_SGI_vector";
			//std::string new_EasySTL_vector = "new_EasySTL_vector";
			//stdVec<std::string> v1(10, "zzz");
			easyVec<std::string> v2(5, "zm");
			//EasySTL::Test::print_container(v1, "SGI_vector");
			EasySTL::Test::print_container(v2, "construct");
			std::cout<< v2.size() <<std::endl;
            std::cout<< v2.capacity() <<std::endl;
            //easyVec<std::string> v3 = {"abc","cba","dca","ghj"};
            //EasySTL::Test::print_container(v3, "v3");
   //          std::string a = "huyun";
			// v2.push_back(a);

			// EasySTL::Test::print_container(v2, "push_back");
            
   //          v2.pop_back();

   //          EasySTL::Test::print_container(v2, "pop_back");

            auto p = v2.begin();

            auto q = p + 2;

   //          std::cout << "the second one" <<*p <<std::endl;
            v2.insert(q,5,"huyun");
            EasySTL::Test::print_container(v2, "insert");
            // v2.erase(p, q);
            // EasySTL::Test::print_container(v2, "erase");
            
            // std::cout << "number of items : " <<v2.size() <<std::endl;

            // std::cout << "capacity of container : " <<v2.capacity() <<std::endl;

            // v2.resize(3);

            // std::cout << "capacity of container : " <<v2.capacity() <<std::endl;

            // v2.clear();
            // EasySTL::Test::print_container(v2, "clear");
            // std::cout << "capacity of container : " <<v2.capacity() <<std::endl;
			//assert(EasySTL::Test::container_equal(v1, v2));

		}
	}
}