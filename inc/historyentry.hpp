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

#ifndef _GOBBY_HISTORYENTRY_HPP_
#define _GOBBY_HISTORYENTRY_HPP_

#include <list>
#include <gtkmm/entry.h>

namespace Gobby
{

/** Entry field which allows to scroll in history using up and down arrows keys.
 */

class HistoryEntry : public Gtk::Entry
{
public:
	HistoryEntry();
	virtual ~HistoryEntry();

	void clear_history();

protected:
	virtual void on_activate();
	virtual bool on_key_press_event(GdkEventKey* event);

	void scroll_down();
	void scroll_up();

	std::list<Glib::ustring> m_history;
	std::list<Glib::ustring>::iterator m_pos;
};

}
	
#endif // _GOBBY_HISTORYENTRY_HPP_