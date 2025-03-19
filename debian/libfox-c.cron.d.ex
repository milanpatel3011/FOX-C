#
# Regular cron jobs for the libfox-c package.
#
0 4	* * *	root	[ -x /usr/bin/libfox-c_maintenance ] && /usr/bin/libfox-c_maintenance
