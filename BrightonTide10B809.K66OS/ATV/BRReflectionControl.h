/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRReflectionControl : BRControl {
	float _reflectionAmount;	// 84 = 0x54
	float _reflectionOffset;	// 88 = 0x58
	BOOL _flipped;	// 92 = 0x5c
}
@property(assign) BOOL flipped;	// G=0x307c9d; S=0x307b21; converted property
@property(assign) float reflectionAmount;	// G=0x307af1; S=0x307a8d; converted property
@property(assign) float reflectionOffset;	// G=0x307b11; S=0x307b01; converted property
- (id)init;	// 0x3079d5
- (id)_generateFiltersFrom:(float)from to:(float)to;	// 0x307cad
- (id)_reflectionFilters;	// 0x307dd9
- (id)_unflippedReflectionFilters;	// 0x307e19
// converted property getter: - (BOOL)flipped;	// 0x307c9d
// converted property getter: - (float)reflectionAmount;	// 0x307af1
// converted property getter: - (float)reflectionOffset;	// 0x307b11
// converted property setter: - (void)setFlipped:(BOOL)flipped;	// 0x307b21
- (void)setImage:(id)image;	// 0x307a49
// converted property setter: - (void)setReflectionAmount:(float)amount;	// 0x307a8d
// converted property setter: - (void)setReflectionOffset:(float)offset;	// 0x307b01
@end
