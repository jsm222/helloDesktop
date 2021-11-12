--- widget/gtk/NativeMenuSupport.cpp.orig	2021-11-11 20:21:27 UTC
+++ widget/gtk/NativeMenuSupport.cpp
@@ -0,0 +1,25 @@
+/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
+/* This Source Code Form is subject to the terms of the Mozilla Public
+ * License, v. 2.0. If a copy of the MPL was not distributed with this
+ * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
+
+#include "mozilla/widget/NativeMenuSupport.h"
+
+#include "MainThreadUtils.h"
+#include "nsINativeMenuService.h"
+
+namespace mozilla::widget {
+
+void NativeMenuSupport::CreateNativeMenuBar(nsIWidget* aParent, dom::Element* aMenuBarElement) {
+    MOZ_RELEASE_ASSERT(NS_IsMainThread(), "Attempting to create native menu bar on wrong thread!");
+
+    nsCOMPtr<nsINativeMenuService> nms =
+        do_GetService("@mozilla.org/widget/nativemenuservice;1");
+    if (!nms) {
+        return;
+    }
+
+    nms->CreateNativeMenuBar(aParent, aMenuBarElement);
+}
+
+}  // namespace mozilla::widget
