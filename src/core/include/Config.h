/*
 *	 TwitCrusader++ - Twitter Client For Linux Desktop
 *		Copyright (C) 2011  TwitCrusader++
 *
 *		This program is free software: you can redistribute it and/or modify
 *		it under the terms of the GNU General Public License as published by
 *		the Free Software Foundation, either version 3 of the License, or
 *		(at your option) any later version.
 *
 *		This program is distributed in the hope that it will be useful,
 *		but WITHOUT ANY WARRANTY; without even the implied warranty of
 *		MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *		GNU General Public License for more details.
 *
 *		You should have received a copy of the GNU General Public License
 *		along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *		Source: https://github.com/RoxShannon/TwitCrusaderpp
 *		email: orazio.1985@hotmail.com
 *
 */

#ifndef CONFIG_H_
#define CONFIG_H_

/*
 *
 */
#include <iostream>
#include <string>
#include <gtk/gtk.h>
#include <cstdlib>

//for mkdir
#include <sys/stat.h>
#include <sys/types.h>

#include "Functions.h"

#define CONFIG_FILENAME "config.xml"

#define SUB_DIR "/.TwitCrusader++/"

#define AVATAR_SUBDIR SUB_DIR"avatar/"
#define CONFIG_SUBDIR SUB_DIR"config/"
#define TIMELINE_SUBDIR SUB_DIR"timeline/"

#define MKDIR_CMD "mkdir -p "
#define RM_CMD "rm "

using  namespace std;

namespace TwitCrusader {

class Config {
private:
	string avatarDir;
	string configDir;
	string configFile;
	string timelineDir;
	string homeDir;

public:
	Config();
	virtual ~Config();

	string getAvatarDir();
	string getConfigDir();
	string getConfigFile();
	string getTimeLineDir();

	void setAvatarDir();
	void setConfigFile();
	void setConfigDir();
	void setTimelineDir();

	bool createAvatarDir();
	bool createConfigDir();
	bool createTimelineDir();
	bool deleteConfigFile();
	bool is_registered();
};
}
#endif /* CONFIG_H_ */
