/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSLocking.h"
#import "Foundation-Structs.h"


@interface NSCondition : NSObject <NSLocking> {
@private
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x327ab1ed; S=0x327ab59d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x32754c31
- (id)init;	// 0x32754c3d
- (void)broadcast;	// 0x3275502d
- (void)dealloc;	// 0x327564bd
- (id)description;	// 0x327ab5d1
- (void)finalize;	// 0x327abcd5
- (void)lock;	// 0x32754dd9
// converted property getter: - (id)name;	// 0x327ab1ed
// converted property setter: - (void)setName:(id)name;	// 0x327ab59d
- (void)signal;	// 0x32771735
- (void)unlock;	// 0x32754e65
- (void)wait;	// 0x3275f861
- (BOOL)waitUntilDate:(id)date;	// 0x3276e945
@end
