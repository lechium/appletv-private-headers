/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKLayer.h"


@interface SKControl : SKLayer {
	id _target;	// 56 = 0x38
	SEL _action;	// 60 = 0x3c
	BOOL _enabled;	// 64 = 0x40
}
@property(assign) SEL action;	// G=0x30c3cf05; S=0x30c3cf15; converted property
@property(assign) BOOL enabled;	// G=0x30c3cf59; S=0x30c3cf69; converted property
@property(retain) id target;	// G=0x30c3cee5; S=0x30c3cef5; converted property
- (id)init;	// 0x30c3ce89
// converted property getter: - (SEL)action;	// 0x30c3cf05
// converted property getter: - (BOOL)enabled;	// 0x30c3cf59
- (BOOL)handleEvent:(GSEventRef)event inLayer:(id)layer;	// 0x30c3cfe5
- (void)performAction;	// 0x30c3cfa1
// converted property setter: - (void)setAction:(SEL)action;	// 0x30c3cf15
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x30c3cf69
// converted property setter: - (void)setTarget:(id)target;	// 0x30c3cef5
- (void)setTarget:(id)target andAction:(SEL)action;	// 0x30c3cf25
// converted property getter: - (id)target;	// 0x30c3cee5
@end
