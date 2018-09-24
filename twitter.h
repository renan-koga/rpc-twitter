/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _TWITTER_H_RPCGEN
#define _TWITTER_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct postTopic {
	char *username;
	char *topic;
	char *text;
};
typedef struct postTopic postTopic;

struct followUser {
	char *username;
	char *usernameFollow;
};
typedef struct followUser followUser;

struct user {
	char *username;
};
typedef struct user user;

struct topic {
	char *username;
	char *topic;
};
typedef struct topic topic;

struct unfollowUser {
	char *username;
	char *usernameUnfollow;
};
typedef struct unfollowUser unfollowUser;

struct topicTime {
	char *username;
	char *topic;
	char *timestamp;
};
typedef struct topicTime topicTime;

struct post {
	char *username;
	char *text;
};
typedef struct post post;

#define TWITTER_PROG 1111111
#define TWITTER_VERSION 1

#if defined(__STDC__) || defined(__cplusplus)
#define POST_TOPIC 1
extern  int * post_topic_1(postTopic *, CLIENT *);
extern  int * post_topic_1_svc(postTopic *, struct svc_req *);
#define FOLLOW 2
extern  int * follow_1(followUser *, CLIENT *);
extern  int * follow_1_svc(followUser *, struct svc_req *);
#define LIST_USERS 3
extern  char ** list_users_1(void *, CLIENT *);
extern  char ** list_users_1_svc(void *, struct svc_req *);
#define CREATE_USER 4
extern  int * create_user_1(user *, CLIENT *);
extern  int * create_user_1_svc(user *, struct svc_req *);
#define SEARCH_TOPICS 5
extern  char ** search_topics_1(void *, CLIENT *);
extern  char ** search_topics_1_svc(void *, struct svc_req *);
#define NEW_TOPIC 6
extern  int * new_topic_1(topic *, CLIENT *);
extern  int * new_topic_1_svc(topic *, struct svc_req *);
#define UNFOLLOW 7
extern  int * unfollow_1(unfollowUser *, CLIENT *);
extern  int * unfollow_1_svc(unfollowUser *, struct svc_req *);
#define RETRIEVE_TOPIC 8
extern  char ** retrieve_topic_1(topicTime *, CLIENT *);
extern  char ** retrieve_topic_1_svc(topicTime *, struct svc_req *);
#define TWITTE 9
extern  int * twitte_1(post *, CLIENT *);
extern  int * twitte_1_svc(post *, struct svc_req *);
extern int twitter_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define POST_TOPIC 1
extern  int * post_topic_1();
extern  int * post_topic_1_svc();
#define FOLLOW 2
extern  int * follow_1();
extern  int * follow_1_svc();
#define LIST_USERS 3
extern  char ** list_users_1();
extern  char ** list_users_1_svc();
#define CREATE_USER 4
extern  int * create_user_1();
extern  int * create_user_1_svc();
#define SEARCH_TOPICS 5
extern  char ** search_topics_1();
extern  char ** search_topics_1_svc();
#define NEW_TOPIC 6
extern  int * new_topic_1();
extern  int * new_topic_1_svc();
#define UNFOLLOW 7
extern  int * unfollow_1();
extern  int * unfollow_1_svc();
#define RETRIEVE_TOPIC 8
extern  char ** retrieve_topic_1();
extern  char ** retrieve_topic_1_svc();
#define TWITTE 9
extern  int * twitte_1();
extern  int * twitte_1_svc();
extern int twitter_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_postTopic (XDR *, postTopic*);
extern  bool_t xdr_followUser (XDR *, followUser*);
extern  bool_t xdr_user (XDR *, user*);
extern  bool_t xdr_topic (XDR *, topic*);
extern  bool_t xdr_unfollowUser (XDR *, unfollowUser*);
extern  bool_t xdr_topicTime (XDR *, topicTime*);
extern  bool_t xdr_post (XDR *, post*);

#else /* K&R C */
extern bool_t xdr_postTopic ();
extern bool_t xdr_followUser ();
extern bool_t xdr_user ();
extern bool_t xdr_topic ();
extern bool_t xdr_unfollowUser ();
extern bool_t xdr_topicTime ();
extern bool_t xdr_post ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_TWITTER_H_RPCGEN */