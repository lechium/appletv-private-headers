/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ATViTunesKeyValueStorePutItem : NSObject {
@private
	NSString *key;	// 4 = 0x4
	NSData *value;	// 8 = 0x8
	NSString *baseVersion;	// 12 = 0xc
}
+ (id)putItemWithKey:(id)key value:(id)value baseVersion:(id)version;	// 0x337009d1
- (id)_initWithKey:(id)key withValue:(id)value withBaseVersion:(id)baseVersion;	// 0x33701095
- (void)dealloc;	// 0x33701029
@end

