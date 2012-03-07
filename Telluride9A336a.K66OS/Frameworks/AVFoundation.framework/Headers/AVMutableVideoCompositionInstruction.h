/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVVideoCompositionInstruction.h"
#import "AVFoundation-Structs.h"

@class AVMutableVideoCompositionInstructionInternal, NSArray;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction {
@private
	AVMutableVideoCompositionInstructionInternal *_mutableInstruction;	// 8 = 0x8
}
@property(retain, nonatomic) CGColorRef backgroundColor;	// G=0x31470721; S=0x314706f5; 
@property(assign, nonatomic) BOOL enablePostProcessing;	// G=0x31470671; S=0x31470645; 
@property(copy, nonatomic) NSArray *layerInstructions;	// G=0x314706c9; S=0x3147069d; 
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x3147074d; S=0x3147059d; 
+ (id)videoCompositionInstruction;	// 0x31470601
// declared property getter: - (CGColorRef)backgroundColor;	// 0x31470721
// declared property getter: - (BOOL)enablePostProcessing;	// 0x31470671
// declared property getter: - (id)layerInstructions;	// 0x314706c9
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x314706f5
// declared property setter: - (void)setEnablePostProcessing:(BOOL)processing;	// 0x31470645
// declared property setter: - (void)setLayerInstructions:(id)instructions;	// 0x3147069d
// declared property setter: - (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x3147059d
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x3147074d
@end
