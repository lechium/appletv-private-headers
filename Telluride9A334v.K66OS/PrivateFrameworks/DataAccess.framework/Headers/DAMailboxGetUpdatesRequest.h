/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DAMailboxRequest.h"


@interface DAMailboxGetUpdatesRequest : DAMailboxRequest {
	int _maxSize;	// 8 = 0x8
	int _bodyFormat;	// 12 = 0xc
}
@property(readonly, assign) int bodyFormat;	// G=0x337a30a1; converted property
@property(readonly, assign) int maxSize;	// G=0x337a3091; converted property
- (id)initRequestForBodyFormat:(int)bodyFormat withBodySizeLimit:(int)bodySizeLimit;	// 0x337a3031
// converted property getter: - (int)bodyFormat;	// 0x337a30a1
- (id)description;	// 0x337a31c5
- (unsigned)hash;	// 0x337a30b1
- (BOOL)isEqual:(id)equal;	// 0x337a313d
// converted property getter: - (int)maxSize;	// 0x337a3091
@end

