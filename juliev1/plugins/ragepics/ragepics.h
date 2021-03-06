//
/// \file plugins/ragepics/ragepics.h
/// \brief RagePics plugin
//

#ifndef PLUGINS_RAGEPICS_RAGEPICS_H
#define PLUGINS_RAGEPICS_RAGEPICS_H

#include "../../bot/plugin.h"
#include <map>
#include <string>
#include <vector>
#include <istream>
#include <sstream>


class RagePics : public JulieSu::Plugin
{
	public:
		void init (JulieSu::Bot* bot);
		void free (void);

		void run (JulieSu::Irc::Message message);
 private:
		std::map<std::string,std::string> responses;
		void sendOptions(std::string target);

};

extern "C" JulieSu::Plugin* initPlugin (JulieSu::Bot* bot);
extern "C" void freePlugin (JulieSu::Plugin* plugin);

#endif // PLUGINS_RAGEPICS_RAGEPICS_H
