/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVTimedMetadataGroup.h"
#import "AVFoundation-Structs.h"

@class AVMutableTimedMetadataGroupInternal, NSArray;

@interface AVMutableTimedMetadataGroup : AVTimedMetadataGroup {
	AVMutableTimedMetadataGroupInternal *_mutablePriv;	// 8 = 0x8
}
@property(copy) NSArray *items;	// G=0x30421571; S=0x304215b9; 
@property(assign) XXStruct_yD8eWC timeRange;	// G=0x304214d5; S=0x30421529; 
- (id)copyWithZone:(NSZone *)zone;	// 0x30421591
// declared property getter: - (id)items;	// 0x30421571
// declared property setter: - (void)setItems:(id)items;	// 0x304215b9
// declared property setter: - (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x30421529
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x304214d5
@end

