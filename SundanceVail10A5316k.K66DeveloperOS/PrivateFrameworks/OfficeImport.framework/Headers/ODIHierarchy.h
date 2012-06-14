/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, ODIState;

__attribute__((visibility("hidden")))
@interface ODIHierarchy : NSObject {
@private
	int mType;	// 4 = 0x4
	int mMaxMappableTreeDepth;	// 8 = 0x8
	ODIState *mState;	// 12 = 0xc
	NSMutableDictionary *mNodeInfoMap;	// 16 = 0x10
}
+ (BOOL)mapIdentifier:(id)identifier state:(id)state;	// 0x312ee1c5
- (id)initWithType:(int)type state:(id)state;	// 0x312ee299
- (CGRect)boundsOfNode:(id)node;	// 0x312eeed9
- (void)createInfoForNode:(id)node depth:(int)depth;	// 0x312ee401
- (void)dealloc;	// 0x312ee355
- (id)infoForNode:(id)node;	// 0x312ee3b9
- (void)map;	// 0x312ef4a5
- (void)mapLogicalBoundsWithXRanges:(const ODIHRangeVector *)xranges;	// 0x312eed05
- (void)mapNode:(id)node;	// 0x312eef61
- (ODIHRangeVector *)mapRangesForNode:(id)node;	// 0x312ee51d
- (void)setAbsolutePositionOfNode:(id)node parentRow:(int)row parentXOffset:(float)offset;	// 0x312eed79
@end

