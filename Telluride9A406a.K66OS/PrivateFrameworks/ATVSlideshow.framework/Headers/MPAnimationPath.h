/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class MCAnimationPath;
@protocol MPAnimationSupport;

@interface MPAnimationPath : NSObject <NSCoding, NSCopying> {
	BOOL _isTriggered;	// 4 = 0x4
	NSObject<MPAnimationSupport> *_parentObject;	// 8 = 0x8
	MCAnimationPath *_animationPath;	// 12 = 0xc
}
@property(retain) MCAnimationPath *animationPath;	// G=0x348fe459; S=0x348fee81; converted property
@property(assign) BOOL isTriggered;	// G=0x348fc4a5; S=0x348fc4b5; 
@property(retain) id parent;	// G=0x348fc551; S=0x348feb35; converted property
+ (id)animationPath;	// 0x348fc1ed
- (id)init;	// 0x348fc231
- (id)initWithCoder:(id)coder;	// 0x348fc2b9
- (id)animatedKey;	// 0x348febed
- (id)animatedParent;	// 0x348feb91
// converted property getter: - (id)animationPath;	// 0x348fe459
- (void)cleanup;	// 0x348feef1
- (id)copyWithZone:(NSZone *)zone;	// 0x348fc37d
- (void)dealloc;	// 0x348fc329
- (id)description;	// 0x348fc3e5
- (void)encodeWithCoder:(id)coder;	// 0x348fc27d
// declared property getter: - (BOOL)isTriggered;	// 0x348fc4a5
- (id)key;	// 0x348fc459
// converted property getter: - (id)parent;	// 0x348fc551
- (id)parentDocument;	// 0x348fec69
// converted property setter: - (void)setAnimationPath:(id)path;	// 0x348fee81
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x348fc4b5
// converted property setter: - (void)setParent:(id)parent;	// 0x348feb35
@end

