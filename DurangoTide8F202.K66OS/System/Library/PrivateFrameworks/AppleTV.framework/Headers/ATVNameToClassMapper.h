/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVNameToClassMapper : NSObject {
@private
	NSDictionary *_nameToClass;	// 4 = 0x4
}
- (id)initWithPlist:(id)plist;	// 0x33725399
- (Class)classForName:(id)name;	// 0x33725329
- (void)dealloc;	// 0x33725351
@end

