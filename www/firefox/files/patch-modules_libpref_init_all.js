--- modules/libpref/init/all.js.orig	2021-11-03 16:25:15 UTC
+++ modules/libpref/init/all.js
@@ -314,6 +314,9 @@ pref("dom.mouseevent.click.hack.use_legacy_non-primary
 // Fastback caching - if this pref is negative, then we calculate the number
 // of content viewers to cache based on the amount of available memory.
 pref("browser.sessionhistory.max_total_viewers", -1);
+#ifdef MOZ_WIDGET_GTK
+pref("ui.use_unity_menubar", true);
+#endif
 
 pref("browser.display.force_inline_alttext", false); // true = force ALT text for missing images to be layed out inline
 // 0 = no external leading,
