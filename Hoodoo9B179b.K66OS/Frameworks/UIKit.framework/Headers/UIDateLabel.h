/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILabel.h"


@interface UIDateLabel : UILabel {
@private
	BOOL _forceTimeOnly;	// 111 = 0x6f
	double _date;	// 112 = 0x70
	CFDateRef _dateKey;	// 120 = 0x78
	BOOL _boldForAllLocales;	// 124 = 0x7c
}
@property(assign, nonatomic) BOOL boldForAllLocales;	// G=0x32f1df21; S=0x330d0565; @synthesize=_boldForAllLocales
@property(retain) id font;	// G=0x32f22579; S=0x32f1d065; converted property
@property(assign, nonatomic) BOOL forceTimeOnly;	// G=0x330d0555; S=0x330d0525; @synthesize=_forceTimeOnly
@property(assign) double timeInterval;	// G=0x32f9b3d5; S=0x32f1d591; converted property
+ (id)defaultFont;	// 0x32f1d041
- (id)initWithFrame:(CGRect)frame;	// 0x32f1cf05
- (CFDateRef)_dateKey;	// 0x32f1d7b5
- (id)_dateLabelCache;	// 0x32f9b365
- (void)_didUpdateDate;	// 0x32f1e225
- (void)_invalidateDateKey;	// 0x32f1d5e5
- (void)_updateDateStrings;	// 0x32f1d61d
// declared property getter: - (BOOL)boldForAllLocales;	// 0x32f1df21
- (void)dealloc;	// 0x330226e5
- (void)drawRect:(CGRect)rect;	// 0x32f28549
- (void)drawTextInRect:(CGRect)rect;	// 0x32f28595
// converted property getter: - (id)font;	// 0x32f22579
// declared property getter: - (BOOL)forceTimeOnly;	// 0x330d0555
// declared property setter: - (void)setBoldForAllLocales:(BOOL)allLocales;	// 0x330d0565
- (void)setDate:(id)date;	// 0x32f1d55d
// converted property setter: - (void)setFont:(id)font;	// 0x32f1d065
- (void)setFontWithoutInvalidation:(id)invalidation;	// 0x330d04f9
// declared property setter: - (void)setForceTimeOnly:(BOOL)only;	// 0x330d0525
// converted property setter: - (void)setTimeInterval:(double)interval;	// 0x32f1d591
- (void)sizeToFit;	// 0x32f22291
- (id)text;	// 0x32f2248d
- (id)timeDesignator;	// 0x32f1df31
- (id)timeDesignatorFont;	// 0x32f226d9
// converted property getter: - (double)timeInterval;	// 0x32f9b3d5
@end

