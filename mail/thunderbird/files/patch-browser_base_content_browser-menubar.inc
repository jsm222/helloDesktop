--- browser/base/content/browser-menubar.inc.orig	2021-11-02 00:06:32 UTC
+++ browser/base/content/browser-menubar.inc
@@ -7,7 +7,12 @@
 # On macOS, we don't track whether activation of the native menubar happened
 # with the keyboard.
 #ifndef XP_MACOSX
-                onpopupshowing="if (event.target.parentNode.parentNode == this)
+                onpopupshowing="if (event.target.parentNode.parentNode == this &amp;&amp;
+#ifdef MOZ_WIDGET_GTK
+                                    document.documentElement.getAttribute('shellshowingmenubar') != 'true')
+#else
+                                    true)
+#endif
                                   this.setAttribute('openedwithkey',
                                                     event.target.parentNode.openedWithKey);"
 #endif
