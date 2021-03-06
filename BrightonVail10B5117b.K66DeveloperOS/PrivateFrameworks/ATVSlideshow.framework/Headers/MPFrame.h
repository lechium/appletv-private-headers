/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableDictionary, MPFrameInternal, NSString, MPSlide;

@interface MPFrame : NSObject <NSCoding, NSCopying> {
	NSMutableDictionary *_attributes;	// 4 = 0x4
	MPSlide *_parentSlide;	// 8 = 0x8
	MPFrameInternal *_internal;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *frameID;	// G=0x332efdb9; S=0x332efdd9; @dynamic
@property(retain) MPSlide *parentSlide;	// G=0x332f0159; S=0x332f029d; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x332efe65; S=0x332efe9d; @dynamic
+ (id)frameWithFrameID:(id)frameID;	// 0x332ef97d
- (id)init;	// 0x332efa15
- (id)initWithCoder:(id)coder;	// 0x332efc5d
- (id)initWithFrameID:(id)frameID;	// 0x332ef9b9
- (void)copyStruct:(id)aStruct;	// 0x332f01f9
- (id)copyWithZone:(NSZone *)zone;	// 0x332efab1
- (void)dealloc;	// 0x332efd51
- (id)description;	// 0x332efb15
- (void)dump;	// 0x332f0169
- (void)encodeWithCoder:(id)coder;	// 0x332efb75
- (id)frameAttributeForKey:(id)key;	// 0x332f0005
- (id)frameAttributes;	// 0x332eff8d
// declared property getter: - (id)frameID;	// 0x332efdb9
- (id)fullDebugLog;	// 0x332f0191
- (id)parentDocument;	// 0x332f01d1
// converted property getter: - (id)parentSlide;	// 0x332f0159
// declared property getter: - (id)presetID;	// 0x332efe65
- (void)setFrameAttribute:(id)attribute forKey:(id)key;	// 0x332f0031
// declared property setter: - (void)setFrameID:(id)anId;	// 0x332efdd9
// converted property setter: - (void)setParentSlide:(id)slide;	// 0x332f029d
// declared property setter: - (void)setPresetID:(id)anId;	// 0x332efe9d
@end

