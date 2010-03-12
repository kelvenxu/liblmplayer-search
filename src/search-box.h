/* vi: set sw=4 ts=4: */
/*
 * search-box.h
 *
 * This file is part of liblmplayer-search
 *
 * Copyright (C) 2010 - kelvenxu <kelvenxu@gmail.com>.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 * */

#ifndef __SEARCH_BOX_H__
#define __SEARCH_BOX_H__  1

#include <gtk/gtk.h>
#include <glib-object.h>

G_BEGIN_DECLS

#define LMPLAYER_SEARCH_BOX_TYPE (lmplayer_search_box_get_type())
#define LMPLAYER_SEARCH_BOX(obj) (G_TYPE_CHECK_INSTANCE_CAST((obj), LMPLAYER_SEARCH_BOX_TYPE, LmplayerSearchBox))
#define LMPLAYER_SEARCH_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST((klass), LMPLAYER_SEARCH_BOX_TYPE, LmplayerSearchBoxClass))
#define LMPLAYER_IS_SEARCH_BOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE((obj), LMPLAYER_SEARCH_BOX_TYPE))
#define LMPLAYER_IS_SEARCH_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass), LMPLAYER_SEARCH_BOX_TYPE))
#define LMPLAYER_SEARCH_BOX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS((obj), LMPLAYER_SEARCH_BOX_TYPE, LmplayerSearchBoxClass))

typedef struct _LmplayerSearchBoxPrivate LmplayerSearchBoxPrivate;

typedef struct 
{
	GtkEntry parent;

	LmplayerSearchBoxPrivate *priv;
} LmplayerSearchBox;

typedef struct
{
	GtkEntryClass parent;

	/* Action signals
	 */
	void (* activated) (LmplayerSearchBox *box);

} LmplayerSearchBoxClass;


//GtkWidget * search_box_create();
GtkWidget * lmplayer_search_box_new();

G_END_DECLS
#endif /*__SEARCH_BOX_H__ */
