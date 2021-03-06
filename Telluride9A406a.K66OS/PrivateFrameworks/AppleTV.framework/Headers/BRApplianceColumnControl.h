/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@protocol BRAppliance;

__attribute__((visibility("hidden")))
@interface BRApplianceColumnControl : BRControl {
@private
	id<BRAppliance> _appliance;	// 48 = 0x30
	BRControl *_applianceLabel;	// 52 = 0x34
	float _headerWidth;	// 56 = 0x38
	float _maxCategoryWidth;	// 60 = 0x3c
}
@property(readonly, assign) float headerWidth;	// G=0x330863d5; converted property
@property(assign) float maxCategoryWidth;	// G=0x3308647d; S=0x3308646d; converted property
- (id)initWithAppliance:(id)appliance;	// 0x330860d9
- (id)accessibilityLabel;	// 0x330865e9
- (void)dealloc;	// 0x33086155
// converted property getter: - (float)headerWidth;	// 0x330863d5
- (void)layoutSubcontrols;	// 0x330864c1
// converted property getter: - (float)maxCategoryWidth;	// 0x3308647d
- (void)reload;	// 0x330861b5
- (void)resetMaxCategoryWidth;	// 0x330864ad
- (void)resetMetrics;	// 0x3308648d
// converted property setter: - (void)setMaxCategoryWidth:(float)width;	// 0x3308646d
@end

