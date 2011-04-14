/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSMutableDictionary;

@interface ATVMultistateProgressIndicator : BRControl {
@private
	id _currentStateID;	// 44 = 0x2c
	NSMutableDictionary *_states;	// 48 = 0x30
	float _value;	// 52 = 0x34
}
@property(retain) id state;	// G=0x3368421d; S=0x33684315; converted property
@property(assign) float value;	// G=0x336841bd; S=0x336841cd; converted property
- (id)init;	// 0x336842a9
- (void)dealloc;	// 0x3368424d
- (void)drawInContext:(CGContextRef)context;	// 0x3368449d
- (void)setProgressIndicatorImageBatch:(id)batch forState:(id)state;	// 0x336843f1
// converted property setter: - (void)setState:(id)state;	// 0x33684315
// converted property setter: - (void)setValue:(float)value;	// 0x336841cd
// converted property getter: - (id)state;	// 0x3368421d
// converted property getter: - (float)value;	// 0x336841bd
@end

