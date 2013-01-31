//
//  Lesson10Model.h
//

#import "Bee.h"

#pragma mark -

@interface Lesson11Record : BeeActiveRecord
{
	NSNumber *	_rid;
	NSString *	_name;
	NSString *	_url;
}

@property (nonatomic, strong) NSNumber *	rid;
@property (nonatomic, strong) NSString *	name;
@property (nonatomic, strong) NSString *	url;

@end
