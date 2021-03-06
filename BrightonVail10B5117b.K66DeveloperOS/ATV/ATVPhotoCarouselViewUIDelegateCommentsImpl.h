/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVCarouselViewUIDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVPhotoCarouselViewUIDelegateCommentsImpl : XXUnknownSuperclass <ATVCarouselViewUIDelegate> {
	double _eventAnimationDuration;	// 4 = 0x4
	float _reflectionAmount;	// 12 = 0xc
	XXStruct_40SSZC _preferredImageSize;	// 16 = 0x10
	double _retriggerEventAnimationDuration;	// 24 = 0x18
}
@property(assign, nonatomic) double eventAnimationDuration;	// G=0x125501; S=0x125519; @synthesize=_eventAnimationDuration
@property(assign, nonatomic) XXStruct_40SSZC preferredImageSize;	// G=0x12554d; S=0x125565; @synthesize=_preferredImageSize
@property(assign, nonatomic) float reflectionAmount;	// G=0x12552d; S=0x12553d; @synthesize=_reflectionAmount
@property(assign, nonatomic) double retriggerEventAnimationDuration;	// G=0x125579; S=0x125591; @synthesize=_retriggerEventAnimationDuration
- (id)carouselView:(id)view configurePerspectiveForContext:(id)context;	// 0x124461
- (ATVCarouselViewItemsConfig)carouselView:(id)view itemsConfigForContext:(id)context;	// 0x1243b9
- (id)carouselView:(id)view setPositionOfItem:(id)item toPositionAtIndex:(unsigned)index context:(id)context;	// 0x124559
// declared property getter: - (double)eventAnimationDuration;	// 0x125501
// declared property getter: - (XXStruct_40SSZC)preferredImageSize;	// 0x12554d
// declared property getter: - (float)reflectionAmount;	// 0x12552d
// declared property getter: - (double)retriggerEventAnimationDuration;	// 0x125579
// declared property setter: - (void)setEventAnimationDuration:(double)duration;	// 0x125519
// declared property setter: - (void)setPreferredImageSize:(XXStruct_40SSZC)size;	// 0x125565
// declared property setter: - (void)setReflectionAmount:(float)amount;	// 0x12553d
// declared property setter: - (void)setRetriggerEventAnimationDuration:(double)duration;	// 0x125591
@end

