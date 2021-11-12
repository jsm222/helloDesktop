--- widget/gtk/nsWindow.cpp.orig	2021-11-03 16:25:15 UTC
+++ widget/gtk/nsWindow.cpp
@@ -7221,6 +7221,10 @@ void nsWindow::HideWindowChrome(bool aShouldHide) {
   SetWindowDecoration(aShouldHide ? eBorderStyle_none : mBorderStyle);
 }
 
+void nsWindow::SetMenuBar(UniquePtr<nsMenuBar> aMenuBar) {
+  mMenuBar = std::move(aMenuBar);
+}
+
 bool nsWindow::CheckForRollup(gdouble aMouseX, gdouble aMouseY, bool aIsWheel,
                               bool aAlwaysRollup) {
   nsIRollupListener* rollupListener = GetActiveRollupListener();
