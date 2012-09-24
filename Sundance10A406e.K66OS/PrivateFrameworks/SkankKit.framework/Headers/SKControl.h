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
@property(assign) SEL action;	// G=0x3026af25; S=0x3026af35; converted property
@property(assign) BOOL enabled;	// G=0x3026af79; S=0x3026af89; converted property
@property(retain) id target;	// G=0x3026af05; S=0x3026af15; converted property
- (id)init;	// 0x3026aea9
// converted property getter: - (SEL)action;	// 0x3026af25
// converted property getter: - (BOOL)enabled;	// 0x3026af79
- (BOOL)handleEvent:(GSEventRef)event inLayer:(id)layer;	// 0x3026b005
- (void)performAction;	// 0x3026afc1
// converted property setter: - (void)setAction:(SEL)action;	// 0x3026af35
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x3026af89
// converted property setter: - (void)setTarget:(id)target;	// 0x3026af15
- (void)setTarget:(id)target andAction:(SEL)action;	// 0x3026af45
// converted property getter: - (id)target;	// 0x3026af05
@end
