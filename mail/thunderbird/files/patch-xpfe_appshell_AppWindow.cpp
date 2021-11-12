--- xpfe/appshell/AppWindow.cpp.orig	2021-11-02 00:07:49 UTC
+++ xpfe/appshell/AppWindow.cpp
@@ -80,7 +80,7 @@
 
 #include "mozilla/dom/DocumentL10n.h"
 
-#ifdef XP_MACOSX
+#if defined(XP_MACOSX) || defined(MOZ_WIDGET_GTK)
 #  include "mozilla/widget/NativeMenuSupport.h"
 #  define USE_NATIVE_MENUS
 #endif
