/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface CMDrawingAction : NSObject {
	int _type;	// 4 = 0x4
	id _value;	// 8 = 0x8
	float _floatValue;	// 12 = 0xc
}
@property(readonly, assign) float floatValue;	// G=0x34888745; converted property
@property(readonly, assign) int type;	// G=0x34884d55; converted property
@property(readonly, retain) id value;	// G=0x34884d65; converted property
- (id)initWithType:(int)type andFloatValue:(float)value;	// 0x34888229
- (id)initWithType:(int)type andValue:(id)value;	// 0x34881f45
- (void)dealloc;	// 0x34884e85
- (id)description;	// 0x349df139
// converted property getter: - (float)floatValue;	// 0x34888745
// converted property getter: - (int)type;	// 0x34884d55
// converted property getter: - (id)value;	// 0x34884d65
@end
