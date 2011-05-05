/*
*	TwitCrusader - Twitter Client For Linux Desktop
*		Copyright (C) 2011  PTKDev, RoxShannon
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
*
*		Author: Patryk Rzucidlo (PTKDev)
*		Twitter: @ptkdev / @twitcrusader_en
*		WebSite: http://www.twitcrusader.org
*/

#ifndef GTKWINDOWS_H_
#define GTKWINDOWS_H_

#define _GNU_SOURCE

#include <stdio.h>
#include <gtk/gtk.h>
#include <glib.h>
#include <gdk/gdkkeysyms.h>

#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "function.h"
#include "twitter.h"
#include "gethttp.h"

typedef struct
{
	GtkWidget *pin;
	GtkWidget *window;

} AuthWidget;

struct StatusBars
{
	GtkStatusbar *message;

} StatusBar;

#define TWC_VERSION "0.1.86"
#define TWC_VERSION_STATUS "-Alpha"
#define TWC_UPDATES_URL "http://www.twitcrusader.org/version.php"
#define ICON_SETTINGS ICONS_DIR"/setting.png"
#define ICON_ABOUT ICONS_DIR"/tw_about.png"
#define ICON_STAR ICONS_DIR"/star.png"
#define ICON_ADDUSER ICONS_DIR"/add-user.png"
#define ICON_SIGNIN ICONS_DIR"/sign-in-with-twitter.png"
#define ICON_FAVICON ICONS_DIR"/favicon.png"
#define ICON_CLOSE ICONS_DIR"/close.png"
#define ICON_HOME ICONS_DIR"/home.png"
#define ICON_UPDATE ICONS_DIR"/update.png"
#define ICON_UPGRADE ICONS_DIR"/upgrade.png"
#define ICON_MENTION ICONS_DIR"/mention.png"
#define ICON_DM ICONS_DIR"/dm.png"
#define ICON_FAVORITES ICONS_DIR"/favorites.png"
#define ICON_LINK ICONS_DIR"/link.png"
#define ICON_PHOTO ICONS_DIR"/photo.png"

typedef struct configuration {
	char* default_user;
}config;


void destroy(GtkButton *button, gpointer widget);
gboolean gtkOnKeyPress (GtkWidget * window, GdkEventKey* pKey, gpointer userdata);
gboolean gtkSendTweet(GtkWidget *TextArea, GdkEventKey *pKey, GtkTextBuffer *tweetBuffer);
void updateStatusBar(GtkTextBuffer *buffer, GtkStatusbar  *statusbar);
void gtkSwitchPage (GtkButton *button, GtkNotebook *notebook);
void windowOption();
void windowUpgrade();
void windowCredits();
void gtkAccessToken(GtkButton *button, AuthWidget *DataInput);
int windowAddUser();
void gtkDeleteAccount(GtkButton *button, gpointer widget);
void gtkConnect(GtkButton *button, gpointer window);
void gtkDisconnect(GtkButton *button, gpointer window);
void gtkAddUser(GtkButton *button, gpointer window);
int windowMain(int argc, char **argv);
void gtkRefreshTimeline(GtkWidget *table_into, gpointer window);

#endif /* GTKWINDOWS_H_ */
