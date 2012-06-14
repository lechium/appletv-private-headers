/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import <NSObject.h> // Unknown library
#import "CAAction.h"
#import "SkankKit-Structs.h"


@interface SKLayerModule : NSObject <CAAction> {
	id _layer;	// 4 = 0x4
	id _context;	// 8 = 0x8
	int _orientation;	// 12 = 0xc
}
@property(assign) CGRect bounds;	// G=0x3281e9b1; S=0x3281e9f1; converted property
@property(retain) id context;	// G=0x3281e799; S=0x3281e755; converted property
@property(readonly, retain) id layer;	// G=0x3281e7a9; converted property
+ (Class)layerClass;	// 0x3281e7f1
+ (id)sharedModule;	// 0x3281e541
- (void)initLayer:(id)layer;	// 0x3281e925
- (id)initWithFrame:(CGRect)frame;	// 0x3281e69d
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x3281eb79
- (id)addButtonWithFrame:(CGRect)frame text:(id)text target:(id)target action:(SEL)action;	// 0x3281eab9
- (void)addContentToLayer:(id)layer;	// 0x3281e929
// converted property getter: - (CGRect)bounds;	// 0x3281e9b1
// converted property getter: - (id)context;	// 0x3281e799
- (id)createLayer;	// 0x3281e80d
- (void)dealloc;	// 0x3281e6e1
- (BOOL)handleEvent:(GSEventRef)event inLayer:(id)layer;	// 0x3281eb75
- (void)hide;	// 0x3281ea3d
// converted property getter: - (id)layer;	// 0x3281e7a9
- (void)orderIn;	// 0x3281ebad
- (void)runActionForKey:(id)key object:(id)object arguments:(id)arguments;	// 0x3281ebb1
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x3281e9f1
// converted property setter: - (void)setContext:(id)context;	// 0x3281e755
- (void)setFrame:(CGRect)frame;	// 0x3281e92d
- (void)setOrientation:(int)orientation;	// 0x3281e9f5
- (BOOL)showing;	// 0x3281ea65
@end

