PORTNAME=	hellodesktop-qtplugin
PORTVERSION=	0.10
CATEGORIES=	sysutils

MAINTAINER=	jsm@FreeBSD.org
COMMENT=	Integration plugin for Qt for helloDesktop

LICENSE=	GPLv3+

LIB_DEPENDS=	libdbusmenu-qt5.so:devel/libdbusmenu-qt \
		libexif.so:graphics/libexif \
		libQt5XdgIconLoader.so:devel/libqtxdg

USES=	cmake compiler:c++14-lang kde:5 pkgconfig tar:xz qt:5 \
	gettext-runtime
USE_GITHUB=     yes
USE_KDE=	ecm windowsystem
USE_QT=		buildtools core dbus gui qmake svg x11extras widgets
GH_ACCOUNT=     helloSystem
GH_PROJECT=     QtPlugin
GH_TAGNAME=     c973e71

USE_LDCONFIG=	yes

PLIST_FILES=	%%QT_PLUGINDIR%%/platformthemes/libpanda-qtplugin.so \
		%%QT_PLUGINDIR%%/styles/libpstyleplugin.so

.include <bsd.port.mk>
