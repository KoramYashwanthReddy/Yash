#ifndef _HYDRA_SERVICE_ORACLE_H_
#define _HYDRA_SERVICE_ORACLE_H_

void service_oracle(char *ip, int sp, unsigned char options, char *miscptr, FILE * fp, int port, char *hostname);
int service_oracle_init(char *ip, int sp, unsigned char options, char *miscptr, FILE * fp, int port, char *hostname);
void usage_oracle(const char* service);

#define SERVICE_ORACLE { \
    "oracle", \
    service_oracle_init, \
    service_oracle, \
    usage_oracle \
}

#endif /* _HYDRA_SERVICE_ORACLE_H_ */
