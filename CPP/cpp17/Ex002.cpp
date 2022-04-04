
/************************************************\
 * kilometers,meters,centimeters to centimeters.
 * centimeters to kilometers,meters,centimeters.
\************************************************/

#include<iostream>

int main ()
{
    std::cout<<"Enter a distance as kilometers,meters,and centimeters"
        <<"with three value separated by spaces:"
        <<std::endl ;
    unsigned int kilometers {} ,meters {} ,centimeters {} , total_centimeters {} ;
    std::cin>> kilometers >> meters >> centimeters ;
    const unsigned int kms_per_meters {1000} , meters_per_centimeters {100} ;
    total_centimeters = centimeters + meters_per_centimeters * ( kilometers * kms_per_meters + meters ) ;
    std::cout<<"The distance corresponds to "
        <<total_centimeters
        <<" centimeters.\n"
        <<std::endl ;
    std::cout<< "Enter a distance as total centimeters:"<< std::endl;
    std::cin>> total_centimeters ;
    meters = total_centimeters / meters_per_centimeters ;
    kilometers = meters / kms_per_meters ;
    centimeters = total_centimeters % meters_per_centimeters ;
    meters = meters % kms_per_meters ;
    std::cout<< kilometers << " kilometers " << meters << " meters " << centimeters << " centiences\n" << std::endl ;

    return 0 ;
}