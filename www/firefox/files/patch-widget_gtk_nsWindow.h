--- widget/gtk/nsWindow.h.orig	2021-11-03 16:25:15 UTC
+++ widget/gtk/nsWindow.h
@@ -26,6 +26,8 @@
 #include "nsRefPtrHashtable.h"
 #include "IMContextWrapper.h"
 
+#include "nsMenuBar.h"
+
 #ifdef ACCESSIBILITY
 #  include "mozilla/a11y/LocalAccessible.h"
 #endif
@@ -185,6 +187,8 @@ class nsWindow final : public nsBaseWidget {
                                   nsIScreen* aTargetScreen = nullptr) override;
   virtual void HideWindowChrome(bool aShouldHide) override;
 
+  void SetMenuBar(mozilla::UniquePtr<nsMenuBar> aMenuBar);
+
   /**
    * GetLastUserInputTime returns a timestamp for the most recent user input
    * event.  This is intended for pointer grab requests (including drags).
@@ -810,6 +814,8 @@ class nsWindow final : public nsBaseWidget {
   static GtkWindowDecoration sGtkWindowDecoration;
 
   static bool sTransparentMainWindow;
+
+  mozilla::UniquePtr<nsMenuBar> mMenuBar;
 
 #ifdef ACCESSIBILITY
   RefPtr<mozilla::a11y::LocalAccessible> mRootAccessible;
