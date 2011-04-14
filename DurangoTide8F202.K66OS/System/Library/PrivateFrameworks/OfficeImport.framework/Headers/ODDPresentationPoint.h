/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDPoint.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDPresentationPoint : ODDPoint {
@private
	ODDPresentationPoint *mParent;	// 20 = 0x14
	NSMutableArray *mChildren;	// 24 = 0x18
}
- (void)addChild:(id)child order:(unsigned long)order;	// 0x31a6ac69
- (id)children;	// 0x31abfe35
- (void)dealloc;	// 0x31a6ec4d
- (id)parent;	// 0x31abfe25
- (void)setType:(int)type;	// 0x31a6a341
@end

