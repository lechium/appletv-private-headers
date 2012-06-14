/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSData;

@interface CPSearchMatcher : NSObject {
	NSArray *_components;	// 4 = 0x4
	NSData *_wholeSearchStringData;	// 8 = 0x8
	NSData *_context;	// 12 = 0xc
}
- (id)initWithSearchString:(id)searchString;	// 0x333971e1
- (id)initWithSearchString:(id)searchString andLocale:(id)locale;	// 0x33397201
- (id)initWithSearchString:(id)searchString andLocale:(id)locale andOptions:(int)options;	// 0x333973d9
- (id)initWithSearchString:(id)searchString options:(int)options;	// 0x33397225
- (void)dealloc;	// 0x333975f1
- (BOOL)matches:(id)matches;	// 0x3339717d
- (BOOL)matches:(id)matches matchType:(int)type;	// 0x333971ad
- (BOOL)matchesUTF8String:(const char *)string;	// 0x33397165
- (BOOL)matchesUTF8String:(const char *)string matchType:(int)type;	// 0x33397245
@end
