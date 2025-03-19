#
# Regular cron jobs for the fox-c package.
#
0 4	* * *	root	[ -x /usr/bin/fox-c_maintenance ] && /usr/bin/fox-c_maintenance
