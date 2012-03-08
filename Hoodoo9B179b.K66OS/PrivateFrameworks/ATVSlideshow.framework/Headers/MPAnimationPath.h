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
@property(retain) MCAnimationPath *animationPath;	// G=0x3542d4c1; S=0x3542dee9; converted property
@property(assign) BOOL isTriggered;	// G=0x3542b509; S=0x3542b519; 
@property(retain) id parent;	// G=0x3542b5b5; S=0x3542db9d; converted property
+ (id)animationPath;	// 0x3542b251
- (id)init;	// 0x3542b295
- (id)initWithCoder:(id)coder;	// 0x3542b31d
- (id)animatedKey;	// 0x3542dc55
- (id)animatedParent;	// 0x3542dbf9
// converted property getter: - (id)animationPath;	// 0x3542d4c1
- (void)cleanup;	// 0x3542df59
- (id)copyWithZone:(NSZone *)zone;	// 0x3542b3e1
- (void)dealloc;	// 0x3542b38d
- (id)description;	// 0x3542b449
- (void)encodeWithCoder:(id)coder;	// 0x3542b2e1
// declared property getter: - (BOOL)isTriggered;	// 0x3542b509
- (id)key;	// 0x3542b4bd
// converted property getter: - (id)parent;	// 0x3542b5b5
- (id)parentDocument;	// 0x3542dcd1
// converted property setter: - (void)setAnimationPath:(id)path;	// 0x3542dee9
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x3542b519
// converted property setter: - (void)setParent:(id)parent;	// 0x3542db9d
@end

