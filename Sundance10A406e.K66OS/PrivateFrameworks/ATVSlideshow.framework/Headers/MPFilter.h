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
#import "MPAnimationSupport.h"

@class NSMutableDictionary, NSString, MCFilter, MPFilterInternal;
@protocol MPFilterSupport;

@interface MPFilter : NSObject <NSCoding, NSCopying, MPAnimationSupport> {
	NSMutableDictionary *_attributes;	// 4 = 0x4
	NSMutableDictionary *_animationPaths;	// 8 = 0x8
	MCFilter *_filter;	// 12 = 0xc
	NSObject<MPFilterSupport> *_parent;	// 16 = 0x10
	MPFilterInternal *_internal;	// 20 = 0x14
}
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x36031a85; converted property
@property(retain) MCFilter *filter;	// G=0x36031d3d; S=0x360320e9; converted property
@property(copy, nonatomic) NSString *filterID;	// G=0x36031859; S=0x36031879; @dynamic
@property(retain) id parent;	// G=0x36031d2d; S=0x360324c9; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x360318c1; S=0x360318e1; @dynamic
+ (id)filterWithFilterID:(id)filterID;	// 0x360311d9
- (id)init;	// 0x36031281
- (id)initWithCoder:(id)coder;	// 0x36031599
- (id)initWithFilterID:(id)filterID;	// 0x36031215
- (id)animationPathForKey:(id)key;	// 0x36031a95
// converted property getter: - (id)animationPaths;	// 0x36031a85
- (id)convertMCAttributeToMPAttribute:(id)mpattribute withKey:(id)key;	// 0x36031ef5
- (id)convertMPAttributeToMCAttribute:(id)mcattribute withKey:(id)key;	// 0x36031ea9
- (void)copyAnimationPaths:(id)paths;	// 0x36031fe5
- (void)copyStruct:(id)aStruct;	// 0x36031f41
- (id)copyWithZone:(NSZone *)zone;	// 0x3603133d
- (void)dealloc;	// 0x360317b9
- (id)description;	// 0x360313c1
- (void)dump;	// 0x36031d4d
- (void)encodeWithCoder:(id)coder;	// 0x36031485
// converted property getter: - (id)filter;	// 0x36031d3d
- (id)filterAttributeForKey:(id)key;	// 0x36031951
- (id)filterAttributes;	// 0x36031941
// declared property getter: - (id)filterID;	// 0x36031859
- (void)finalize;	// 0x3603178d
- (id)fullDebugLog;	// 0x36031d75
- (int)index;	// 0x36031ce9
// converted property getter: - (id)parent;	// 0x36031d2d
- (id)parentDocument;	// 0x36032529
// declared property getter: - (id)presetID;	// 0x360318c1
- (void)removeAnimationPathForKey:(id)key;	// 0x36031c41
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x36031ab5
- (void)setDefaults;	// 0x36031db5
// converted property setter: - (void)setFilter:(id)filter;	// 0x360320e9
- (void)setFilterAttribute:(id)attribute forKey:(id)key;	// 0x36031971
// declared property setter: - (void)setFilterID:(id)anId;	// 0x36031879
// converted property setter: - (void)setParent:(id)parent;	// 0x360324c9
// declared property setter: - (void)setPresetID:(id)anId;	// 0x360318e1
@end
