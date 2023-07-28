#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "GunzipPlugin.h"

void GunzipPlugin::input(std::string file) {
 inputfile = file;
}

void GunzipPlugin::run() {}

void GunzipPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
 myCommand += "gunzip "+inputfile;
 system(myCommand.c_str());
 std::cout << myCommand << std::endl;
}

PluginProxy<GunzipPlugin> GunzipPluginProxy = PluginProxy<GunzipPlugin>("Gunzip", PluginManager::getInstance());
