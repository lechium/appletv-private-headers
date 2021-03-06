/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVMultistateProgressIndicator : BRControl {
	id _currentStateID;	// 84 = 0x54
	NSMutableDictionary *_states;	// 88 = 0x58
	float _value;	// 92 = 0x5c
}
@property(retain) id state;	// G=0x146a3d; S=0x14693d; converted property
@property(assign) float value;	// G=0x146ab9; S=0x146a75; converted property
- (id)init;	// 0x146791
- (void)dealloc;	// 0x14680d
- (void)drawRect:(CGRect)rect;	// 0x146ac9
- (void)setProgressIndicatorImageBatch:(id)batch forState:(id)state;	// 0x146871
// converted property setter: - (void)setState:(id)state;	// 0x14693d
// converted property setter: - (void)setValue:(float)value;	// 0x146a75
// converted property getter: - (id)state;	// 0x146a3d
// converted property getter: - (float)value;	// 0x146ab9
@end

