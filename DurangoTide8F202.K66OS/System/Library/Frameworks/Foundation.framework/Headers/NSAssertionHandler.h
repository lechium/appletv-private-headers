/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSAssertionHandler : NSObject {
@private
	void *_reserved;	// 4 = 0x4
}
+ (id)currentHandler;	// 0x3246529d
- (void)handleFailureInFunction:(id)function file:(id)file lineNumber:(int)number description:(id)description;	// 0x324654e9
- (void)handleFailureInMethod:(SEL)method object:(id)object file:(id)file lineNumber:(int)number description:(id)description;	// 0x32465535
@end

