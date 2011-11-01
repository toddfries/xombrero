/*
 * Copyright (c) 2011 Conformal Systems LLC <info@conformal.com>
 * Copyright (c) 2011 Marco Peereboom <marco@peereboom.us>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include "xxxterm.h"

WebKitWebView*
inspector_inspect_web_view_cb(WebKitWebInspector *inspector, WebKitWebView* wv,
    struct tab *t)
{
	GtkWidget	*inspector_window;
	GtkWidget	*inspector_view;

	inspector_window = create_window("inspector");
	inspector_view = webkit_web_view_new();
	gtk_container_add(GTK_CONTAINER(inspector_window), inspector_view);
	gtk_widget_show_all(inspector_window);

	return WEBKIT_WEB_VIEW(inspector_view);
}
