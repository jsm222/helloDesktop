--- browser/base/content/browser.js.orig	2021-11-02 00:06:32 UTC
+++ browser/base/content/browser.js
@@ -6240,8 +6240,15 @@ function onViewToolbarsPopupShowing(aEvent, aInsertPoi
   MozXULElement.insertFTLIfNeeded("browser/toolbarContextMenu.ftl");
   let firstMenuItem = aInsertPoint || popup.firstElementChild;
   let toolbarNodes = gNavToolbox.querySelectorAll("toolbar");
+
+  let shellShowingMenubar = document.documentElement.getAttribute("shellshowingmenubar") == "true";
+
   for (let toolbar of toolbarNodes) {
     if (!toolbar.hasAttribute("toolbarname")) {
+      continue;
+    }
+
+    if (shellShowingMenubar && toolbar.id == "toolbar-menubar") {
       continue;
     }
 
