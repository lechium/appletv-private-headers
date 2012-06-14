/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class AVVideoCompositionInstructionInternal, NSArray;

@interface AVVideoCompositionInstruction : NSObject <NSCoding, NSCopying, NSMutableCopying> {
@private
	AVVideoCompositionInstructionInternal *_instruction;	// 4 = 0x4
}
@property(retain, nonatomic) CGColorRef backgroundColor;	// G=0x326b8e41; S=0x326b8e61; 
@property(readonly, assign, nonatomic) BOOL enablePostProcessing;	// G=0x326b8f2d; 
@property(readonly, assign, nonatomic) NSArray *layerInstructions;	// G=0x326b8ead; 
@property(readonly, assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x326b8d89; 
+ (void)initialize;	// 0x326b87c9
- (id)init;	// 0x326b8809
- (id)initWithCoder:(id)coder;	// 0x326b88f9
- (void)_setValuesFromDictionary:(id)dictionary;	// 0x326b930d
// declared property getter: - (CGColorRef)backgroundColor;	// 0x326b8e41
- (id)copyWithZone:(NSZone *)zone;	// 0x326b89e9
- (void)dealloc;	// 0x326b8ca5
- (id)description;	// 0x326b970d
- (id)dictionaryRepresentation;	// 0x326b8f6d
// declared property getter: - (BOOL)enablePostProcessing;	// 0x326b8f2d
- (void)encodeWithCoder:(id)coder;	// 0x326b89b1
- (void)finalize;	// 0x326b8d2d
// declared property getter: - (id)layerInstructions;	// 0x326b8ead
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x326b8b69
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x326b8e61
- (void)setEnablePostProcessing:(BOOL)processing;	// 0x326b8f4d
- (void)setLayerInstructions:(id)instructions;	// 0x326b8ecd
- (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x326b8de5
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x326b8d89
@end
