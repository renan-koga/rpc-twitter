/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "twitter.h"

void create_user(CLIENT *clnt);
void list_users(CLIENT *clnt);
void follow(CLIENT *clnt);
void unfollow(CLIENT *clnt);
void tweet(CLIENT *clnt);
void new_topic(CLIENT *clnt);
void search_topics(CLIENT *clnt);
void post_topic(CLIENT *clnt);
void retrieve_topic(CLIENT *clnt);
int main (int argc, char *argv[]) {
	CLIENT *clnt;
	char *host;
	int opt;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}

	host = argv[1];
	clnt = clnt_create(host, TWITTER_PROG, TWITTER_VERSION, "udp");

	/* Verifica se a referência foi criada */
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}

	while(1) {
		printf("\n##################################################################");
		printf("\n############################## MENU ##############################");
		printf("\n##################################################################");
	
		printf("\n\nDigite:");
		printf("\n0 - Encerrar");
		printf("\n1 - Criar Usuário");
		printf("\n2 - Listar Usuários");
		printf("\n3 - Seguir");
		printf("\n4 - Deixar de Seguir");
		printf("\n5 - Twittar");
		printf("\n6 - Criar Novo Tópico");
		printf("\n7 - Listar Tópicos");
		printf("\n8 - Postar Tópico");
		printf("\n9 - Recuperar Tópicos\n\n");

		scanf("%d", &opt);

		switch(opt) {
			case 0:
				exit(0);

			case 1:
				create_user(clnt);
				break;
				
			case 2:
				list_users(clnt);
				break;

			case 3:
				follow(clnt);
				break;

			case 4:
				unfollow(clnt);
				break;

			case 5:
				tweet(clnt);
				break;

			case 6:
				new_topic(clnt);
				break;

			case 7:
				search_topics(clnt);
				break;

			case 8:
				post_topic(clnt);
				break;

			case 9:
				retrieve_topic(clnt);
				break;

			default:
				printf("\n\nOpção Inválida!\n");
				break;
		}
	}
	
	exit(0);
}

void create_user(CLIENT *clnt) {
	user usuario;
	char *username;
	int *result;

	username = (char *) malloc(64*sizeof(char));
	printf("Digite o nome  do usuário a ser criado:\n");
	scanf("%s", username);

	// printf("\nUSERNAME: %s ---- %ld", username, strlen(username));

	usuario.username = username;

	result = create_user_1(&usuario, clnt);

	if (result == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	else if (*result == 1) {
		printf("\nUsuário %s criado com sucesso!", username);
	}
	else {
		printf("Falha ao criar o usuário %s", username);
	}
}

void list_users(CLIENT *clnt) {
	void *nothing;
	char *result;

	result = (char *) list_users_1(nothing, clnt);

	printf("TAM: %s", result);
}

void follow(CLIENT *clnt) {
	followUser follow;
	int *result;
	char *username, *usernameFollow;

	username = (char *) malloc(64*sizeof(char));
	usernameFollow = (char *) malloc(64*sizeof(char));
	
	printf("Digite o seu nome de usuário:\n");
	scanf("%s", username);

	printf("Digite o nome do usuário que deseja seguir:\n");
	scanf("%s", usernameFollow);

	follow.username = username;
	follow.usernameFollow = usernameFollow;

	result = follow_1(&follow, clnt);

	if (result == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	else if (*result == 1) {
		printf("\nVocê está seguindo usuário o %s!", usernameFollow);
	}
	else {
		printf("Falha ao seguir o usuário %s", usernameFollow);
	}
}

void unfollow(CLIENT *clnt) {
	unfollowUser unfollow;
	int *result;
	char *username, *usernameUnfollow;

	username = (char *) malloc(64*sizeof(char));
	usernameUnfollow = (char *) malloc(64*sizeof(char));
	
	printf("Digite o seu nome de usuário:\n");
	scanf("%s", username);

	printf("Digite o nome do usuário que deseja deixar de seguir:\n");
	scanf("%s", usernameUnfollow);

	unfollow.username = username;
	unfollow.usernameUnfollow = usernameUnfollow;

	result = unfollow_1(&unfollow, clnt);

	if (result == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	else if (*result == 1) {
		printf("\nVocê não está mais seguindo o usuário %s!", usernameUnfollow);
	}
	else {
		printf("Falha ao deixar de seguir o usuário %s", usernameUnfollow);
	}
}

void tweet(CLIENT *clnt) {
	tweetPost tweet;
	int *result;
	char *username, *post;

	username = (char *) malloc(64*sizeof(char));
	post = (char *) malloc(128*sizeof(char));

	printf("Digite o seu nome de usuário:\n");
	scanf("%s", username);

	fflush(stdin);

	printf("Digite seu post (sem quebras de linhas):\n");
	scanf(" %[^\n]", post);

	tweet.username = username;
	tweet.post = post;

	result = tweet_1(&tweet, clnt);

	if (result == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	else if (*result == 1) {
		printf("\nTweet efetuado com sucesso!");
	}
	else {
		printf("Falha no tweet");
	}
}

void new_topic(CLIENT *clnt) {
	topic newTopic;
	int *result;
	char *username, *topicName;

	username = (char *) malloc(64*sizeof(char));
	topicName = (char *) malloc(128*sizeof(char));

	printf("Digite o seu nome de usuário:\n");
	scanf("%s", username);

	printf("Digite o novo tópico:\n");
	scanf("%s", topicName);

	newTopic.username = username;
	newTopic.topicName = topicName;

	result = new_topic_1(&newTopic, clnt);

	if (result == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	else if (*result == 1) {
		printf("\nTópico %s criado com sucesso!", topicName);
	}
	else {
		printf("Falha ao criar o tópico %s...", topicName);
	}
}

void search_topics(CLIENT *clnt) {
	void *nothing;
	char *result;

	result = (char *) search_topics_1(nothing, clnt);
}

void post_topic(CLIENT *clnt) {
	postTopic newPostTopic;
	int *result;
	char *username, *topicName, *post;

	username = (char *) malloc(64*sizeof(char));
	topicName = (char *) malloc(128*sizeof(char));
	post = (char *) malloc(128*sizeof(char));

	printf("Digite o seu nome de usuário:\n");
	scanf("%s", username);

	printf("Digite o novo tópico:\n");
	scanf("%s", topicName);

	fflush(stdin);

	printf("Digite seu post (sem quebras de linhas):\n");
	scanf(" %[^\n]", post);

	newPostTopic.username = username;
	newPostTopic.topicName = topicName;
	newPostTopic.post = post;

	result = post_topic_1(&newPostTopic, clnt);

	if (result == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	else if (*result == 1) {
		printf("\nPost enviado com sucesso no tópico %s!", topicName);
	}
	else {
		printf("Falha ao postar no tópico %s...", topicName);
	}
}

void retrieve_topic(CLIENT *clnt) {
	topicTime retrieveTopic;
	char *result;
	char *username, *topicName, *timestamp;

	username = (char *) malloc(64*sizeof(char));
	topicName = (char *) malloc(128*sizeof(char));
	timestamp = (char *) malloc(64*sizeof(char));

	printf("Digite o seu nome de usuário:\n");
	scanf("%s", username);

	printf("Digite o novo tópico:\n");
	scanf("%s", topicName);

	printf("Digite seu post (sem quebras de linhas):\n");
	scanf("%s", timestamp);

	retrieveTopic.username = username;
	retrieveTopic.topicName = topicName;
	retrieveTopic.timestamp = timestamp;

	result = (char *) retrieve_topic_1(&retrieveTopic, clnt);
}