/**
 * \file amoduleloader.cpp
 * \author Thibault Schueller <thibault.schueller@islog.com>
 * \brief module loader class containing basic informations
 */

#include "amoduleloader.hpp"

#include "osac.hpp"

AModuleLoader::AModuleLoader(const std::string& name, int major, int minor, int patch)
:   _name(name),
    _version(OSAC::buildVersionString(major, minor, patch))
{}

AModuleLoader::~AModuleLoader() {}

AModuleLoader::AModuleLoader(const AModuleLoader& /*other*/) {}

AModuleLoader& AModuleLoader::operator=(const AModuleLoader& /*other*/)
{
    return (*this);
}

const std::string& AModuleLoader::getModuleName() const
{
    return (_name);
}

const std::string& AModuleLoader::getVersionString() const
{
    return (_version);
}
