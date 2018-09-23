#define PROGRAM_NUMBER 1111111
#define VERSION_NUMBER 1

struct postTopic {
  char *username;
  char *topic;
  char *text;
};

struct followUser {
  char *username;
  char *usernameFollow;
};

struct user {
  char *username;
};

struct topic {
  char *username;
  char *topic;
};

struct unfollowUser {
  char *username;
  char *usernameUnfollow;
};

struct topicTime {
  struct topic *topic;
  char *timestamp;
};

struct post {
  char *username;
  char *text;
};

/* Definição da interface que será oferecida aos clientes */
program TWITTER_PROG {
  version TWITTER_VERSION {
    int POST_TOPIC(postTopic) = 1;
    int FOLLOW(followUser) = 2;
    string LIST_USERS(void) = 3;
    int CREATE_USER(user) = 4;
    string SEARCH_TOPICS(void) = 5;
    int NEW_TOPIC(topic) = 6;
    int UNFOLLOW(unfollowUser) = 7;
    string RETRIEVE_TOPIC(topicTime) = 8;
    int TWITTE(post) = 9;
  } = VERSION_NUMBER;
} = PROGRAM_NUMBER;