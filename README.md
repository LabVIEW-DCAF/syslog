# syslog
Small API to interact with the syslog-ng daemon present on NI Linux RT systems

When running interactively, the appropriate .so file for the target will need to be manually placed in the /usr/local/lib directory on the target.

RTEXE builds will automatically pull in the correct .so file and add it to the build.
