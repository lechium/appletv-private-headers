/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, ODIState;

@interface ODIHierarchy : NSObject {
	int mType;	// 4 = 0x4
	int mMaxMappableTreeDepth;	// 8 = 0x8
	ODIState *mState;	// 12 = 0xc
	NSMutableDictionary *mNodeInfoMap;	// 16 = 0x10
}
+ (BOOL)mapIdentifier:(id)identifier state:(id)state;	// 0x34aeb1b5
- (id)initWithType:(int)type state:(id)state;	// 0x34aeb289
- (CGRect)boundsOfNode:(id)node;	// 0x34aebec9
- (void)createInfoForNode:(id)node depth:(int)depth;	// 0x34aeb3f1
- (void)dealloc;	// 0x34aeb345
- (id)infoForNode:(id)node;	// 0x34aeb3a9
- (void)map;	// 0x34aec495
- (void)mapLogicalBoundsWithXRanges:(const ODIHRangeVector *)xranges;	// 0x34aebcf5
- (void)mapNode:(id)node;	// 0x34aebf51
- (ODIHRangeVector *)mapRangesForNode:(id)node;	// 0x34aeb50d
- (void)setAbsolutePositionOfNode:(id)node parentRow:(int)row parentXOffset:(float)offset;	// 0x34aebd69
@end

