#ifndef	CONFIG_H
#define	CONFIG_H

/*
 * Some global #defines for programmers to use for conditional compilation
 */
#define HAVE_AX25	1
#define HAVE_FLEX	1
#define HAVE_ROSE	1
#define HAVE_NETROM	1
#define HAVE_ZLIB	1
#define HAVE_JHEARD	1
#define HAVE_AUTOROUTE	1
#define HAVE_TCPIP	1
#define	PROC_AX25_CALLS_FILE	"/proc/net/ax25_calls"

/*
 * node specific
 */
#define	CONF_NODE_FILE		"/usr/local/etc/ax25/uronode.conf"
#define	CONF_NODE_PERMS_FILE	"/usr/local/etc/ax25/uronode.perms"
#define HAVEMOTD		"/etc/ax25/uronode.motd"
#define	CONF_NODE_INFO_FILE	"/usr/local/etc/ax25/uronode.info"
#define CONF_NODE_ANN_FILE	"/usr/local/etc/ax25/uronode.announce"
#define AX_ROUTES_FILE          "/usr/local/etc/ax25/uronode.routes"
#define CONF_USERS_FILE         "/usr/local/etc/ax25/uronode.users"
#define FLEXD_CONF_FILE         "/usr/local/etc/ax25/flexd.conf"
#define FLEXD_TEMP_PATH         "/usr/local/var/ax25/flex/"
#define FLEXD_PID_FILE		"/var/run/flexd.pid"
#define FLEX_GT_FILE            "/usr/local/var/ax25/flex/gateways"
#define FLEX_DST_FILE           "/usr/local/var/ax25/flex/destinations"
#define DATA_MHEARD_FILE        "/usr/local/var/ax25/mheard/mheard.dat"
#define	DATA_NODE_LOGIN_FILE	"/usr/local/var/ax25/node/loggedin"
#define	DATA_NODE_HELP_DIR	"/usr/local/var/ax25/node/help/"
#define DATA_NODE_LAST_FILE     "/usr/local/var/ax25/node/lastlog"
#define DATA_NODE_IP_FILE       "/usr/local/var/ax25/node/iplog"

#endif
