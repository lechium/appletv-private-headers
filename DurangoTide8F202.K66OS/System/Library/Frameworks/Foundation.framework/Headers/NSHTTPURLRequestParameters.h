/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString, NSArray, NSData;

__attribute__((visibility("hidden")))
@interface NSHTTPURLRequestParameters : NSObject {
@private
	NSString *method;	// 4 = 0x4
	NSMutableDictionary *fields;	// 8 = 0x8
	NSArray *extraCookies;	// 12 = 0xc
	NSData *data;	// 16 = 0x10
	unsigned pageNotFoundCacheLifetime;	// 20 = 0x14
	BOOL shouldHandleCookies;	// 24 = 0x18
	BOOL _pad1;	// 25 = 0x19
	BOOL _pad2;	// 26 = 0x1a
	BOOL _pad3;	// 27 = 0x1b
}
- (id)init;	// 0x324bf979
- (id)initWithCoder:(id)coder;	// 0x324bfb29
- (void)dealloc;	// 0x324bf9b5
@end

