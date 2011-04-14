/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class AVVideoCompositionInstructionInternal, NSArray;

@interface AVVideoCompositionInstruction : NSObject <NSCoding, NSCopying, NSMutableCopying> {
@private
	AVVideoCompositionInstructionInternal *_instruction;	// 4 = 0x4
}
@property(retain, nonatomic) CGColorRef backgroundColor;	// G=0x303ee2c9; S=0x303effc1; 
@property(readonly, assign, nonatomic) BOOL enablePostProcessing;	// G=0x303ee301; 
@property(readonly, copy, nonatomic) NSArray *layerInstructions;	// G=0x303ee2e5; 
@property(readonly, assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x303ee259; 
+ (void)initialize;	// 0x303ef299
- (id)init;	// 0x303ef7c5
- (id)initWithCoder:(id)coder;	// 0x303ef70d
- (void)_setValuesFromDictionary:(id)dictionary;	// 0x303f04d1
// declared property getter: - (CGColorRef)backgroundColor;	// 0x303ee2c9
- (id)copyWithZone:(NSZone *)zone;	// 0x303efc41
- (void)dealloc;	// 0x303f0065
- (id)description;	// 0x303ef1c9
- (id)dictionaryRepresentation;	// 0x303f01ad
// declared property getter: - (BOOL)enablePostProcessing;	// 0x303ee301
- (void)encodeWithCoder:(id)coder;	// 0x303ef269
- (void)finalize;	// 0x303f0009
// declared property getter: - (id)layerInstructions;	// 0x303ee2e5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x303efb45
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x303effc1
- (void)setEnablePostProcessing:(BOOL)processing;	// 0x303ee31d
- (void)setLayerInstructions:(id)instructions;	// 0x303ef215
- (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x303ee281
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x303ee259
@end

