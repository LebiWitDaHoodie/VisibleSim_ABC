
/**
 * @file ABCcenter.cpp
 * Generated by VisibleSim BlockCode Generator
 * https://services-stgi.pu-pm.univ-fcomte.fr/visiblesim/generator.php#
 * @author yourName
 * @date 2024-10-01                                                                     
 **/
 
#include <iostream>
#include "ABCcenterCode.hpp"

using namespace std;
using namespace BlinkyBlocks;

int main(int argc, char **argv) {
    try {
        createSimulator(argc, argv, ABCcenterCode::buildNewBlockCode);
        getSimulator()->printInfo();
        BaseSimulator::getWorld()->printInfo();
        deleteSimulator();
    } catch(std::exception const& e) {
        cerr << "Uncaught exception: " << e.what();
    }

    return 0;
}