// This file is part of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/desktop-app/legal/blob/master/LEGAL
//
#include "webview/platform/linux/webview_linux.h"

//#include "webview/platform/linux/webview_linux_webkit2gtk.h"

namespace Webview {

bool Supported() {
	return false;// WebKit2Gtk::Supported();
}

bool SupportsEmbedAfterCreate() {
	return true;
}

std::unique_ptr<Interface> CreateInstance(Config config) {
	return nullptr;// WebKit2Gtk::CreateInstance(std::move(config));
}

} // namespace Webview
