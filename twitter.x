#define PROGRAM_NUMBER 1111111
#define VERSION_NUMBER 1

struct postTopic {
  string username<>;
  string topicName<>;
  string post<>;
};

struct followUser {
  string username<>;
  string usernameFollow<>;
};

struct user {
  string username<>;
};

struct topic {
  string username<>;
  string topicName<>;
};

struct unfollowUser {
  string username<>;
  string usernameUnfollow<>;
};

struct topicTime {
  string username<>;
  string topicName<>;
  string timestamp<>;
};

struct tweetPost {
  string username<>;
  string post<>;
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
    int TWEET(tweetPost) = 9;
  } = VERSION_NUMBER;
} = PROGRAM_NUMBER;