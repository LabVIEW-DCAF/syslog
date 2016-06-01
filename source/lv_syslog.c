#include<syslog.h>
void write_log(int option, int facility, int priority, int mask, char prog[], char msg[])
{
	setlogmask (LOG_UPTO (mask));
	openlog (prog, option, facility);
	syslog(priority, "%s", msg);
	closelog();
}