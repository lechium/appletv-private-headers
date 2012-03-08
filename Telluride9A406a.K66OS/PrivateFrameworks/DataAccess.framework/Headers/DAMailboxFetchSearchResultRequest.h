/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface DAMailboxFetchSearchResultRequest : NSObject {
	NSString *_longID;	// 4 = 0x4
	int _bodyFormat;	// 8 = 0x8
	int _maxSize;	// 12 = 0xc
}
@property(readonly, assign) int bodyFormat;	// G=0x3616673d; converted property
@property(readonly, retain) NSString *longID;	// G=0x3616672d; converted property
@property(readonly, assign) int maxSize;	// G=0x3616674d; converted property
- (id)initRequestForBodyFormat:(int)bodyFormat withLongID:(id)longID withBodySizeLimit:(int)bodySizeLimit;	// 0x361666ad
// converted property getter: - (int)bodyFormat;	// 0x3616673d
- (void)dealloc;	// 0x36166945
- (id)description;	// 0x361668bd
- (unsigned)hash;	// 0x3616675d
- (BOOL)isEqual:(id)equal;	// 0x361667f9
// converted property getter: - (id)longID;	// 0x3616672d
// converted property getter: - (int)maxSize;	// 0x3616674d
@end

