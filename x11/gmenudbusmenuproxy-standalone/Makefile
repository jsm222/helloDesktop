PORTNAME=	gmenudbusmenuproxy-standalone
DISTNAME=       plasma-workspace-${KDE_PLASMA_VERSION}
DISTVERSION=    ${KDE_PLASMA_VERSION}
WRKSRC_SUBDIR=	gmenu-dbusmenu-proxy
MASTER_SITES=          KDE/${KDE_PLASMA_BRANCH}/plasma/${KDE_PLASMA_VERSION}
DIST_SUBDIR=           KDE/plasma/${KDE_PLASMA_VERSION}
MASTER_SITE=	
CATEGORIES=	x11 

MAINTAINER=	jsm@FreeBSD.org
COMMENT=	Global dbus menu proxy

LICENSE=	LGPL21+

LIB_DEPENDS=	libdbusmenu-qt5.so:devel/libdbusmenu-qt \
		libxkbcommon.so:x11/libxkbcommon \
		libappmenu-gtk2-parser.so:x11/gtk-app-menu	

USES=	cmake compiler:c++14-lang gettext-runtime kde:5 qt:5 \
	localbase:ldflags pkgconfig tar:xz xorg 
USE_QT=	buildtools_build qmake_build core dbus gui x11extras widgets
USE_KDE=	windowsystem config coreaddons
USE_XORG=	xcb

post-extract:
	${CP} ${WRKSRC}/../config-X11.h.cmake ${WRKSRC} 

.include <bsd.port.mk>
