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

@class MCAction;
@protocol MPActionSupport;

@interface MPAction : NSObject <NSCoding, NSCopying> {
	NSObject<MPActionSupport> *_parentObject;	// 4 = 0x4
	MCAction *_action;	// 8 = 0x8
	NSObject *_targetObject;	// 12 = 0xc
}
@property(retain) id parent;	// G=0x32394431; S=0x32394569; converted property
@property(retain, nonatomic) NSObject *targetObject;	// G=0x32394151; S=0x32394255; @synthesize=_targetObject
+ (id)action;	// 0x32394051
- (id)init;	// 0x32394095
- (id)initWithCoder:(id)coder;	// 0x323940e1
- (void)configureTarget;	// 0x323945c9
- (id)copyWithZone:(NSZone *)zone;	// 0x32394371
- (void)dealloc;	// 0x323942ad
- (void)encodeWithCoder:(id)coder;	// 0x32394325
- (id)key;	// 0x323943e5
// converted property getter: - (id)parent;	// 0x32394431
- (id)parentDocument;	// 0x32394441
- (void)setAction:(id)action;	// 0x323946e9
// converted property setter: - (void)setParent:(id)parent;	// 0x32394569
// declared property setter: - (void)setTargetObject:(id)object;	// 0x32394255
// declared property getter: - (id)targetObject;	// 0x32394151
@end

