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
@property(readonly, assign) int bodyFormat;	// G=0x33562415; converted property
@property(readonly, retain) NSString *longID;	// G=0x33562405; converted property
@property(readonly, assign) int maxSize;	// G=0x33562425; converted property
- (id)initRequestForBodyFormat:(int)bodyFormat withLongID:(id)longID withBodySizeLimit:(int)bodySizeLimit;	// 0x33562385
// converted property getter: - (int)bodyFormat;	// 0x33562415
- (void)dealloc;	// 0x3356262d
- (id)description;	// 0x33562599
- (unsigned)hash;	// 0x33562435
- (BOOL)isEqual:(id)equal;	// 0x335624d5
// converted property getter: - (id)longID;	// 0x33562405
// converted property getter: - (int)maxSize;	// 0x33562425
@end

