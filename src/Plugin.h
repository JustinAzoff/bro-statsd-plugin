
#ifndef BRO_PLUGIN_NCSA_STATSD
#define BRO_PLUGIN_NCSA_STATSD

#include <plugin/Plugin.h>

namespace plugin {
namespace NCSA_Statsd {

class Plugin : public ::plugin::Plugin
{
protected:
	// Overridden from plugin::Plugin.
	virtual plugin::Configuration Configure();
};

extern Plugin plugin;

}
}

#endif
