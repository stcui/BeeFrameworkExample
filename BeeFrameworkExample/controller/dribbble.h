//    												
//    												
//    	 ______    ______    ______					
//    	/\  __ \  /\  ___\  /\  ___\			
//    	\ \  __<  \ \  __\_ \ \  __\_		
//    	 \ \_____\ \ \_____\ \ \_____\		
//    	  \/_____/  \/_____/  \/_____/			
//    												
//    												
//    												
// title:  Dribbble
// author: http://dribbble.com/api
// date:   2013-07-14 19:30:49 +0000
//

#import "Bee.h"

#pragma mark - enums

#define LIST_EVERYONE	@"everyone"
#define LIST_POPULAR	@"popular"
#define LIST_DEBUTS	@"debuts"

#pragma mark - models

@class COMMENT;
@class PLAYER;
@class SHOT;

@interface COMMENT : BeeActiveObject
@property (nonatomic, strong) NSNumber *		id;
@property (nonatomic, strong) NSString *		body;
@property (nonatomic, strong) NSString *		created_at;
@property (nonatomic, strong) NSNumber *		likes_count;
@property (nonatomic, strong) PLAYER *		player;
@end

@interface PLAYER : BeeActiveObject
@property (nonatomic, strong) NSNumber *		id;
@property (nonatomic, strong) NSString *		avatar_url;
@property (nonatomic, strong) NSNumber *		comments_count;
@property (nonatomic, strong) NSNumber *		comments_received_count;
@property (nonatomic, strong) NSString *		created_at;
@property (nonatomic, strong) NSNumber *		draftees_count;
@property (nonatomic, strong) NSNumber *		followers_count;
@property (nonatomic, strong) NSNumber *		following_count;
@property (nonatomic, strong) NSNumber *		likes_count;
@property (nonatomic, strong) NSNumber *		likes_received_count;
@property (nonatomic, strong) NSString *		location;
@property (nonatomic, strong) NSString *		name;
@property (nonatomic, strong) NSNumber *		rebounds_count;
@property (nonatomic, strong) NSNumber *		rebounds_received_count;
@property (nonatomic, strong) NSNumber *		shots_count;
@property (nonatomic, strong) NSString *		twitter_screen_name;
@property (nonatomic, strong) NSString *		url;
@property (nonatomic, strong) NSString *		username;
@end

@interface SHOT : BeeActiveObject
@property (nonatomic, strong) NSNumber *		id;
@property (nonatomic, strong) NSNumber *		comments_count;
@property (nonatomic, strong) NSString *		created_at;
@property (nonatomic, strong) NSNumber *		height;
@property (nonatomic, strong) NSString *		image_teaser_url;
@property (nonatomic, strong) NSString *		image_url;
@property (nonatomic, strong) NSNumber *		likes_count;
@property (nonatomic, strong) PLAYER *		player;
@property (nonatomic, strong) NSNumber *		rebound_source_id;
@property (nonatomic, strong) NSNumber *		rebounds_count;
@property (nonatomic, strong) NSString *		short_url;
@property (nonatomic, strong) NSString *		title;
@property (nonatomic, strong) NSString *		url;
@property (nonatomic, strong) NSNumber *		views_count;
@property (nonatomic, strong) NSNumber *		width;
@end

#pragma mark - controllers

#pragma mark - GET /players/:id

@interface REQ_PLAYERS_ID : BeeActiveObject
@end


@interface API_PLAYERS_ID : BeeRoutine
@property (nonatomic, strong) NSString *	id;
@property (nonatomic, strong) REQ_PLAYERS_ID *	req;
@property (nonatomic, strong) PLAYER *	resp;
@end

#pragma mark - GET /players/:id/draftees

@interface REQ_PLAYERS_ID_DRAFTEES : BeeActiveObject
@end

@interface RESP_PLAYERS_ID_DRAFTEES : BeeActiveObject
@property (nonatomic, strong) NSNumber *		page;
@property (nonatomic, strong) NSNumber *		pages;
@property (nonatomic, strong) NSNumber *		per_page;
@property (nonatomic, strong) NSArray *		players;
@property (nonatomic, strong) NSNumber *		total;
@end

@interface API_PLAYERS_ID_DRAFTEES : BeeRoutine
@property (nonatomic, strong) NSString *	id;
@property (nonatomic, strong) REQ_PLAYERS_ID_DRAFTEES *	req;
@property (nonatomic, strong) RESP_PLAYERS_ID_DRAFTEES *	resp;
@end

#pragma mark - GET /players/:id/followers

@interface REQ_PLAYERS_ID_FOLLOWERS : BeeActiveObject
@end

@interface RESP_PLAYERS_ID_FOLLOWERS : BeeActiveObject
@property (nonatomic, strong) NSNumber *		page;
@property (nonatomic, strong) NSNumber *		pages;
@property (nonatomic, strong) NSNumber *		per_page;
@property (nonatomic, strong) NSArray *		players;
@property (nonatomic, strong) NSNumber *		total;
@end

@interface API_PLAYERS_ID_FOLLOWERS : BeeRoutine
@property (nonatomic, strong) NSString *	id;
@property (nonatomic, strong) REQ_PLAYERS_ID_FOLLOWERS *	req;
@property (nonatomic, strong) RESP_PLAYERS_ID_FOLLOWERS *	resp;
@end

#pragma mark - GET /players/:id/following

@interface REQ_PLAYERS_ID_FOLLOWING : BeeActiveObject
@end

@interface RESP_PLAYERS_ID_FOLLOWING : BeeActiveObject
@property (nonatomic, strong) NSNumber *		page;
@property (nonatomic, strong) NSNumber *		pages;
@property (nonatomic, strong) NSNumber *		per_page;
@property (nonatomic, strong) NSArray *		players;
@property (nonatomic, strong) NSNumber *		total;
@end

@interface API_PLAYERS_ID_FOLLOWING : BeeRoutine
@property (nonatomic, strong) NSString *	id;
@property (nonatomic, strong) REQ_PLAYERS_ID_FOLLOWING *	req;
@property (nonatomic, strong) RESP_PLAYERS_ID_FOLLOWING *	resp;
@end

#pragma mark - GET /players/:id/shots

@interface REQ_PLAYERS_ID_SHOTS : BeeActiveObject
@property (nonatomic, strong) NSNumber *		page;
@property (nonatomic, strong) NSNumber *		per_page;
@end

@interface RESP_PLAYERS_ID_SHOTS : BeeActiveObject
@property (nonatomic, strong) NSNumber *		page;
@property (nonatomic, strong) NSNumber *		pages;
@property (nonatomic, strong) NSNumber *		per_page;
@property (nonatomic, strong) NSArray *		shots;
@property (nonatomic, strong) NSNumber *		total;
@end

@interface API_PLAYERS_ID_SHOTS : BeeRoutine
@property (nonatomic, strong) NSString *	id;
@property (nonatomic, strong) REQ_PLAYERS_ID_SHOTS *	req;
@property (nonatomic, strong) RESP_PLAYERS_ID_SHOTS *	resp;
@end

#pragma mark - GET /players/:id/shots/following

@interface REQ_PLAYERS_ID_SHOTS_FOLLOWING : BeeActiveObject
@property (nonatomic, strong) NSNumber *		page;
@property (nonatomic, strong) NSNumber *		per_page;
@end

@interface RESP_PLAYERS_ID_SHOTS_FOLLOWING : BeeActiveObject
@property (nonatomic, strong) NSNumber *		page;
@property (nonatomic, strong) NSNumber *		pages;
@property (nonatomic, strong) NSNumber *		per_page;
@property (nonatomic, strong) NSArray *		shots;
@property (nonatomic, strong) NSNumber *		total;
@end

@interface API_PLAYERS_ID_SHOTS_FOLLOWING : BeeRoutine
@property (nonatomic, strong) NSString *	id;
@property (nonatomic, strong) REQ_PLAYERS_ID_SHOTS_FOLLOWING *	req;
@property (nonatomic, strong) RESP_PLAYERS_ID_SHOTS_FOLLOWING *	resp;
@end

#pragma mark - GET /players/:id/shots/likes

@interface REQ_PLAYERS_ID_SHOTS_LIKES : BeeActiveObject
@property (nonatomic, strong) NSNumber *		page;
@property (nonatomic, strong) NSNumber *		per_page;
@end

@interface RESP_PLAYERS_ID_SHOTS_LIKES : BeeActiveObject
@property (nonatomic, strong) NSNumber *		page;
@property (nonatomic, strong) NSNumber *		pages;
@property (nonatomic, strong) NSNumber *		per_page;
@property (nonatomic, strong) NSArray *		shots;
@property (nonatomic, strong) NSNumber *		total;
@end

@interface API_PLAYERS_ID_SHOTS_LIKES : BeeRoutine
@property (nonatomic, strong) NSString *	id;
@property (nonatomic, strong) REQ_PLAYERS_ID_SHOTS_LIKES *	req;
@property (nonatomic, strong) RESP_PLAYERS_ID_SHOTS_LIKES *	resp;
@end

#pragma mark - GET /shots/:id

@interface REQ_SHOTS_ID : BeeActiveObject
@end


@interface API_SHOTS_ID : BeeRoutine
@property (nonatomic, strong) NSString *	id;
@property (nonatomic, strong) REQ_SHOTS_ID *	req;
@property (nonatomic, strong) SHOT *	resp;
@end

#pragma mark - GET /shots/:id/comments

@interface REQ_SHOTS_ID_COMMENTS : BeeActiveObject
@property (nonatomic, strong) NSNumber *		page;
@property (nonatomic, strong) NSNumber *		per_page;
@end

@interface RESP_SHOTS_ID_COMMENTS : BeeActiveObject
@property (nonatomic, strong) NSArray *		comments;
@property (nonatomic, strong) NSNumber *		page;
@property (nonatomic, strong) NSNumber *		pages;
@property (nonatomic, strong) NSNumber *		per_page;
@property (nonatomic, strong) NSNumber *		total;
@end

@interface API_SHOTS_ID_COMMENTS : BeeRoutine
@property (nonatomic, strong) NSString *	id;
@property (nonatomic, strong) REQ_SHOTS_ID_COMMENTS *	req;
@property (nonatomic, strong) RESP_SHOTS_ID_COMMENTS *	resp;
@end

#pragma mark - GET /shots/:id/rebounds

@interface REQ_SHOTS_ID_REBOUNDS : BeeActiveObject
@end

@interface RESP_SHOTS_ID_REBOUNDS : BeeActiveObject
@property (nonatomic, strong) NSNumber *		page;
@property (nonatomic, strong) NSNumber *		pages;
@property (nonatomic, strong) NSNumber *		per_page;
@property (nonatomic, strong) NSArray *		shots;
@property (nonatomic, strong) NSNumber *		total;
@end

@interface API_SHOTS_ID_REBOUNDS : BeeRoutine
@property (nonatomic, strong) NSString *	id;
@property (nonatomic, strong) REQ_SHOTS_ID_REBOUNDS *	req;
@property (nonatomic, strong) RESP_SHOTS_ID_REBOUNDS *	resp;
@end

#pragma mark - GET /shots/:list

@interface REQ_SHOTS_LIST : BeeActiveObject
@property (nonatomic, strong) NSNumber *		page;
@property (nonatomic, strong) NSNumber *		per_page;
@end

@interface RESP_SHOTS_LIST : BeeActiveObject
@property (nonatomic, strong) NSNumber *		page;
@property (nonatomic, strong) NSNumber *		pages;
@property (nonatomic, strong) NSNumber *		per_page;
@property (nonatomic, strong) NSArray *		shots;
@property (nonatomic, strong) NSNumber *		total;
@end

@interface API_SHOTS_LIST : BeeRoutine
@property (nonatomic, strong) NSString *	list;
@property (nonatomic, strong) REQ_SHOTS_LIST *	req;
@property (nonatomic, strong) RESP_SHOTS_LIST *	resp;
@end

