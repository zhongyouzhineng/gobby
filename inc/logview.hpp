/* gobby - A GTKmm driven libobby client
 * Copyright (C) 2005 0x539 dev group
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this program; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef _GOBBY_LOGVIEW_HPP_
#define _GOBBY_LOGVIEW_HPP_

#include <list>
#include <gtkmm/textview.h>

namespace Gobby
{

/** A Gtk::TextView-derived widget that easily supports the appending of new
 * lines in multiple colors and scrolls automatically to the bottom, if a new
 * line has been inserted. It is not editable by default.
 */

class LogView : public Gtk::TextView
{
public:
	LogView();
	virtual ~LogView();

	void clear();
	void log(const Glib::ustring& text, const Glib::ustring& color);

protected:
	Glib::RefPtr<Gtk::TextMark> m_end_mark;
};
	
}
	
#endif // _GOBBY_LOGVIEW_HPP_