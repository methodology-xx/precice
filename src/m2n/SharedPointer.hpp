// Copyright (C) 2011 Technische Universitaet Muenchen
// This file is part of the preCICE project. For conditions of distribution and
// use, please see the license notice at http://www5.in.tum.de/wiki/index.php/PreCICE_License
#ifndef PRECICE_M2N_SHAREDPOINTER_HPP_
#define PRECICE_M2N_SHAREDPOINTER_HPP_

#include "boost/smart_ptr.hpp"

namespace precice {
namespace m2n {

class GlobalCommunication;
typedef boost::shared_ptr<GlobalCommunication> PtrGlobalCommunication;

//class M2NConfiguration;
//typedef boost::shared_ptr<M2NConfiguration> PtrCommunicationConfiguration;

}} // namespace precice, m2n

#endif /* PRECICE_M2N_SHAREDPOINTER_HPP_ */