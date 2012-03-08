/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableDictionary;

@interface ATVMultistateProgressIndicator : BRControl {
@private
	id _currentStateID;	// 48 = 0x30
	NSMutableDictionary *_states;	// 52 = 0x34
	float _value;	// 56 = 0x38
}
@property(retain) id state;	// G=0x3015649d; S=0x301563b1; converted property
@property(assign) float value;	// G=0x3015651d; S=0x301564d5; converted property
- (id)init;	// 0x3015621d
- (void)dealloc;	// 0x30156295
- (void)drawInContext:(CGContextRef)context;	// 0x3015652d
- (void)setProgressIndicatorImageBatch:(id)batch forState:(id)state;	// 0x301562f5
// converted property setter: - (void)setState:(id)state;	// 0x301563b1
// converted property setter: - (void)setValue:(float)value;	// 0x301564d5
// converted property getter: - (id)state;	// 0x3015649d
// converted property getter: - (float)value;	// 0x3015651d
@end

