/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableDictionary, NSArray, NSSet;

@interface MCContainerParallelizer : MCContainer {
	NSMutableDictionary *mPlugs;	// 28 = 0x1c
	NSArray *mCachedZOrderedPlugs;	// 32 = 0x20
	CGColorRef mBackgroundColor;	// 36 = 0x24
}
@property(assign) CGColorRef backgroundColor;	// G=0x2fccac09; S=0x2fccacdd; 
@property(readonly, assign, nonatomic) unsigned countOfPlugs;	// G=0x2fccafe1; 
@property(readonly, assign) NSSet *plugs;	// G=0x2fccae95; 
@property(readonly, assign) NSArray *zOrderedPlugs;	// G=0x2fccbc51; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x2fcca299
- (id)init;	// 0x2fcca319
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x2fcca37d
// declared property getter: - (CGColorRef)backgroundColor;	// 0x2fccac09
- (void)changeIDOfPlug:(id)plug toID:(id)anId;	// 0x2fccb639
// declared property getter: - (unsigned)countOfPlugs;	// 0x2fccafe1
- (void)demolish;	// 0x2fcca675
- (id)imprint;	// 0x2fcca8f1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x2fccaac5
- (id)plugForID:(id)anId;	// 0x2fccb0a9
// declared property getter: - (id)plugs;	// 0x2fccae95
- (void)removeAllPlugs;	// 0x2fccb9c9
- (void)removePlug:(id)plug;	// 0x2fccb7a1
- (void)removePlugForID:(id)anId;	// 0x2fccb991
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x2fccacdd
- (id)setPlugForContainer:(id)container forID:(id)anId;	// 0x2fccb1a5
- (id)setPlugProxyForPlug:(id)plug;	// 0x2fccb3f1
// declared property getter: - (id)zOrderedPlugs;	// 0x2fccbc51
@end
