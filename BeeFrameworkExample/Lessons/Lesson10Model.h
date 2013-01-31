//
//  Lesson10Model.h
//

#import "Bee.h"

#pragma mark -

@interface Lesson10Model : BeeModel
{
	NSDate *	_date;
	NSString *	_text;
}

@property (nonatomic, strong) NSDate *		date;
@property (nonatomic, strong) NSString *	text;

- (void)loadCache;
- (void)saveCache;
- (void)clearCache;

@end
