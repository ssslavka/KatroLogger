#ifndef SMTP_MAIL_H
#define SMTP_MAIL_H

#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/utsname.h>
#include <quickmail.h>

void smtp_mail(int argc, char **argv);
extern char outfile[100];
extern const char *cron_file;
extern const char *smtp_log;

#endif
