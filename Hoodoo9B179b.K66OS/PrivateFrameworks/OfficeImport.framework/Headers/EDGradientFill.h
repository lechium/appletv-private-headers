/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDFill.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EDGradientFill : EDFill {
@private
	int mType;	// 8 = 0x8
	NSMutableDictionary *mStops;	// 12 = 0xc
	double mDegree;	// 16 = 0x10
	CGRect mFocusRect;	// 24 = 0x18
}
@property(assign) double degree;	// G=0x32983b05; S=0x32981a31; converted property
@property(assign) CGRect focusRect;	// G=0x32983b2d; S=0x32981a49; converted property
@property(retain) id stops;	// G=0x32983b1d; S=0x32981a71; converted property
@property(assign) int type;	// G=0x32983af5; S=0x32981a1d; converted property
+ (id)gradientWithType:(int)type degree:(double)degree focusRect:(CGRect)rect stops:(id)stops resources:(id)resources;	// 0x32983f95
+ (id)gradientWithType:(int)type degree:(double)degree top:(double)top bottom:(double)bottom right:(double)right left:(double)left stops:(id)stops resources:(id)resources;	// 0x32983f21
- (id)initWithResources:(id)resources;	// 0x32983d55
- (id)initWithType:(int)type degree:(double)degree focusRect:(CGRect)rect stops:(id)stops resources:(id)resources;	// 0x32983ea5
- (id)initWithType:(int)type degree:(double)degree top:(double)top bottom:(double)bottom right:(double)right left:(double)left stops:(id)stops resources:(id)resources;	// 0x32983dd9
- (id)colorForStopAtPosition:(id)position;	// 0x32983b7d
- (id)copyWithZone:(NSZone *)zone;	// 0x32983cb5
- (void)dealloc;	// 0x32983d09
// converted property getter: - (double)degree;	// 0x32983b05
// converted property getter: - (CGRect)focusRect;	// 0x32983b2d
- (unsigned)hash;	// 0x32983b51
- (bool)isEmpty;	// 0x32983af1
- (BOOL)isEqual:(id)equal;	// 0x32983ba1
- (BOOL)isEqualToGradientFill:(id)gradientFill;	// 0x32983bfd
// converted property setter: - (void)setDegree:(double)degree;	// 0x32981a31
// converted property setter: - (void)setFocusRect:(CGRect)rect;	// 0x32981a49
- (void)setStopColor:(id)color atPosition:(id)position;	// 0x32981ab9
// converted property setter: - (void)setStops:(id)stops;	// 0x32981a71
// converted property setter: - (void)setType:(int)type;	// 0x32981a1d
// converted property getter: - (id)stops;	// 0x32983b1d
// converted property getter: - (int)type;	// 0x32983af5
@end

