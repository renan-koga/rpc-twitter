/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include <stdio.h>
#include "twitter.h"

int *
post_topic_1_svc(postTopic *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
follow_1_svc(followUser *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

char **
list_users_1_svc(void *argp, struct svc_req *rqstp)
{
	static char * result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
create_user_1_svc(user *argp, struct svc_req *rqstp)
{
	static int  result;

	// printf("\nUsuário: %s\n", argp->username);
	/*
	*	Código para inserir novo usuário no banco de dados.
	*	- Caso nome já exista, retornar erro.
	*/

	return &result;
}

char **
search_topics_1_svc(void *argp, struct svc_req *rqstp)
{
	static char * result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
new_topic_1_svc(topic *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
unfollow_1_svc(unfollowUser *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

char **
retrieve_topic_1_svc(topicTime *argp, struct svc_req *rqstp)
{
	static char * result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
twitte_1_svc(post *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}
