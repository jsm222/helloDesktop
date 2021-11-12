--- widget/gtk/nsWindow.cpp.orig	2021-11-02 00:07:45 UTC
+++ widget/gtk/nsWindow.cpp
@@ -6953,6 +6953,10 @@ void nsWindow::HideWindowChrome(bool aShouldHide) {
   SetWindowDecoration(aShouldHide ? eBorderStyle_none : mBorderStyle);
 }
 
+void nsWindow::SetMenuBar(UniquePtr<nsMenuBar> aMenuBar) {
+  mMenuBar = std::move(aMenuBar);
+}
+
 bool nsWindow::CheckForRollup(gdouble aMouseX, gdouble aMouseY, bool aIsWheel,
                               bool aAlwaysRollup) {
   nsIRollupListener* rollupListener = GetActiveRollupListener();
