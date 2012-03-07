/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSData;

__attribute__((visibility("hidden")))
@interface DRMData : NSObject {
@private
	NSString *drmSystemID;	// 4 = 0x4
	NSData *data;	// 8 = 0x8
}
+ (void)initialize;	// 0x343bbc98
+ (id)netflixKeyEnvelopeID;	// 0x343bbb6c
+ (id)playReadyID;	// 0x343bbb58
- (id)initWithBuffer:(id)buffer length:(unsigned)length;	// 0x343bbba8
- (void)dealloc;	// 0x343bbd98
- (id)getDRMSystemID;	// 0x343bbb80
- (id)getData;	// 0x343bbb94
@end
