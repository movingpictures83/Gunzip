#ifndef GUNZIPPLUGIN_H
#define GUNZIPPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class GunzipPlugin : public Plugin
{
public: 
 std::string toString() {return "Gunzip";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
