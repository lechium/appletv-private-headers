/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import </libobjc.A.h>

@class NSString;

@interface DAMailboxFetchSearchResultRequest : NSObject {
	NSString *_longID;	// 4 = 0x4
	int _bodyFormat;	// 8 = 0x8
	int _maxSize;	// 12 = 0xc
}
@property(readonly, assign) int bodyFormat;	// G=0x3081a3fd; converted property
@property(readonly, retain) NSString *longID;	// G=0x3081a3ed; converted property
@property(readonly, assign) int maxSize;	// G=0x3081a40d; converted property
- (id)initRequestForBodyFormat:(int)bodyFormat withLongID:(id)longID withBodySizeLimit:(int)bodySizeLimit;	// 0x3081a36d
// converted property getter: - (int)bodyFormat;	// 0x3081a3fd
- (void)dealloc;	// 0x3081a619
- (id)description;	// 0x3081a589
- (unsigned)hash;	// 0x3081a41d
- (BOOL)isEqual:(id)equal;	// 0x3081a4c5
// converted property getter: - (id)longID;	// 0x3081a3ed
// converted property getter: - (int)maxSize;	// 0x3081a40d
@end
