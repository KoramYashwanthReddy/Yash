#ifndef _HYDRA_SERVICE_REDIS_H_
#define _HYDRA_SERVICE_REDIS_H_

void service_redis(char *ip, int sp, unsigned char options, char *miscptr, FILE * fp, int port, char *hostname);
int service_redis_init(char *ip, int sp, unsigned char options, char *miscptr, FILE * fp, int port, char *hostname);

#define SERVICE_REDIS { \
    "redis", \
    service_redis_init, \
    service_redis, \
    NULL \
}

#endif /* _HYDRA_SERVICE_REDIS_H_ */
