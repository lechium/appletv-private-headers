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

@class MPFrameInternal, MPSlide, NSString, NSMutableDictionary;

@interface MPFrame : NSObject <NSCoding, NSCopying> {
	NSMutableDictionary *_attributes;	// 4 = 0x4
	MPSlide *_parentSlide;	// 8 = 0x8
	MPFrameInternal *_internal;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *frameID;	// G=0x32075ef1; S=0x32075f11; @dynamic
@property(retain) MPSlide *parentSlide;	// G=0x32076291; S=0x320763d5; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x32075f9d; S=0x32075fd5; @dynamic
+ (id)frameWithFrameID:(id)frameID;	// 0x32075ab5
- (id)init;	// 0x32075b4d
- (id)initWithCoder:(id)coder;	// 0x32075d95
- (id)initWithFrameID:(id)frameID;	// 0x32075af1
- (void)copyStruct:(id)aStruct;	// 0x32076331
- (id)copyWithZone:(NSZone *)zone;	// 0x32075be9
- (void)dealloc;	// 0x32075e89
- (id)description;	// 0x32075c4d
- (void)dump;	// 0x320762a1
- (void)encodeWithCoder:(id)coder;	// 0x32075cad
- (id)frameAttributeForKey:(id)key;	// 0x3207613d
- (id)frameAttributes;	// 0x320760c5
// declared property getter: - (id)frameID;	// 0x32075ef1
- (id)fullDebugLog;	// 0x320762c9
- (id)parentDocument;	// 0x32076309
// converted property getter: - (id)parentSlide;	// 0x32076291
// declared property getter: - (id)presetID;	// 0x32075f9d
- (void)setFrameAttribute:(id)attribute forKey:(id)key;	// 0x32076169
// declared property setter: - (void)setFrameID:(id)anId;	// 0x32075f11
// converted property setter: - (void)setParentSlide:(id)slide;	// 0x320763d5
// declared property setter: - (void)setPresetID:(id)anId;	// 0x32075fd5
@end
