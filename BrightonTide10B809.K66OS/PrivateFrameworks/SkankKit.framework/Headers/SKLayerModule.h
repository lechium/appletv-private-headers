/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "CAAction.h"
#import <NSObject.h> // Unknown library


@interface SKLayerModule : NSObject <CAAction> {
	id _layer;	// 4 = 0x4
	id _context;	// 8 = 0x8
	int _orientation;	// 12 = 0xc
}
@property(assign) CGRect bounds;	// G=0x354373d9; S=0x35437419; converted property
@property(retain) id context;	// G=0x354371c1; S=0x3543717d; converted property
@property(readonly, retain) id layer;	// G=0x354371d1; converted property
+ (Class)layerClass;	// 0x35437219
+ (id)sharedModule;	// 0x35436f69
- (void)initLayer:(id)layer;	// 0x3543734d
- (id)initWithFrame:(CGRect)frame;	// 0x354370c5
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x354375a1
- (id)addButtonWithFrame:(CGRect)frame text:(id)text target:(id)target action:(SEL)action;	// 0x354374e1
- (void)addContentToLayer:(id)layer;	// 0x35437351
// converted property getter: - (CGRect)bounds;	// 0x354373d9
// converted property getter: - (id)context;	// 0x354371c1
- (id)createLayer;	// 0x35437235
- (void)dealloc;	// 0x35437109
- (BOOL)handleEvent:(GSEventRef)event inLayer:(id)layer;	// 0x3543759d
- (void)hide;	// 0x35437465
// converted property getter: - (id)layer;	// 0x354371d1
- (void)orderIn;	// 0x354375d5
- (void)runActionForKey:(id)key object:(id)object arguments:(id)arguments;	// 0x354375d9
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x35437419
// converted property setter: - (void)setContext:(id)context;	// 0x3543717d
- (void)setFrame:(CGRect)frame;	// 0x35437355
- (void)setOrientation:(int)orientation;	// 0x3543741d
- (BOOL)showing;	// 0x3543748d
@end
