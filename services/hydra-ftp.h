#ifndef _HYDRA_SERVICE_FTP_H_
#define _HYDRA_SERVICE_FTP_H_

void service_ftp(char *ip, int sp, unsigned char options, char *miscptr, FILE * fp, int port, char *hostname);
void service_ftps(char *ip, int sp, unsigned char options, char *miscptr, FILE * fp, int port, char *hostname);
int service_ftp_init(char *ip, int sp, unsigned char options, char *miscptr, FILE * fp, int port, char *hostname);

#define SERVICE_FTP { "ftp", service_ftp_init, service_ftp, NULL }
#define SERVICE_FTPS { "ftps", service_ftp_init, service_ftps, NULL }

#endif /* _HYDRA_SERVICE_FTP_H_ */
