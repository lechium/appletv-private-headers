/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVTimedMetadataGroup.h"
#import "AVFoundation-Structs.h"

@class NSArray, AVMutableTimedMetadataGroupInternal;

@interface AVMutableTimedMetadataGroup : AVTimedMetadataGroup {
	AVMutableTimedMetadataGroupInternal *_mutablePriv;	// 8 = 0x8
}
@property(copy) NSArray *items;	// G=0x30ede985; S=0x30edebb1; 
@property(assign) XXStruct_yD8eWC timeRange;	// G=0x30ede89d; S=0x30ede915; 
- (id)copyWithZone:(NSZone *)zone;	// 0x30edeb85
// declared property getter: - (id)items;	// 0x30ede985
// declared property setter: - (void)setItems:(id)items;	// 0x30edebb1
// declared property setter: - (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x30ede915
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x30ede89d
@end
