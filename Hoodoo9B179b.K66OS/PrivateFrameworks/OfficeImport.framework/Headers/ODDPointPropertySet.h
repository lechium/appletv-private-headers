/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ODDPointPropertySet : NSObject {
@private
	NSString *mLayoutTypeId;	// 4 = 0x4
	NSString *mPresentationName;	// 8 = 0x8
	NSString *mPresentationStyleLabel;	// 12 = 0xc
	int mPresentationStyleIndex;	// 16 = 0x10
	int mPresentationStyleCount;	// 20 = 0x14
	NSObject *mPresentationAssociatedId;	// 24 = 0x18
	BOOL mCustomVerticalFlip;	// 28 = 0x1c
	double mCustomScaleX;	// 32 = 0x20
	double mCustomScaleY;	// 40 = 0x28
	double mCustomOffsetX;	// 48 = 0x30
	double mCustomOffsetY;	// 56 = 0x38
}
@property(assign) double customOffsetX;	// G=0x32901f0d; S=0x328fd739; converted property
@property(assign) double customOffsetY;	// G=0x32901f25; S=0x328fd725; converted property
@property(assign) double customScaleX;	// G=0x32901edd; S=0x328fd6fd; converted property
@property(assign) double customScaleY;	// G=0x32901ef5; S=0x328fd711; converted property
@property(assign) BOOL customVerticalFlip;	// G=0x329e39d1; S=0x3294500d; converted property
@property(retain) id layoutTypeId;	// G=0x328fea09; S=0x328fd451; converted property
@property(retain) id presentationAssociatedId;	// G=0x328fe53d; S=0x328fd6bd; converted property
@property(retain) id presentationName;	// G=0x32902791; S=0x328fd491; converted property
@property(assign) int presentationStyleCount;	// G=0x329e39c1; S=0x328fd871; converted property
@property(assign) int presentationStyleIndex;	// G=0x32902809; S=0x328fd881; converted property
@property(retain) id presentationStyleLabel;	// G=0x329027a1; S=0x328fd4d1; converted property
// converted property getter: - (double)customOffsetX;	// 0x32901f0d
// converted property getter: - (double)customOffsetY;	// 0x32901f25
// converted property getter: - (double)customScaleX;	// 0x32901edd
// converted property getter: - (double)customScaleY;	// 0x32901ef5
// converted property getter: - (BOOL)customVerticalFlip;	// 0x329e39d1
- (void)dealloc;	// 0x329045cd
// converted property getter: - (id)layoutTypeId;	// 0x328fea09
// converted property getter: - (id)presentationAssociatedId;	// 0x328fe53d
// converted property getter: - (id)presentationName;	// 0x32902791
// converted property getter: - (int)presentationStyleCount;	// 0x329e39c1
// converted property getter: - (int)presentationStyleIndex;	// 0x32902809
// converted property getter: - (id)presentationStyleLabel;	// 0x329027a1
// converted property setter: - (void)setCustomOffsetX:(double)x;	// 0x328fd739
// converted property setter: - (void)setCustomOffsetY:(double)y;	// 0x328fd725
// converted property setter: - (void)setCustomScaleX:(double)x;	// 0x328fd6fd
// converted property setter: - (void)setCustomScaleY:(double)y;	// 0x328fd711
// converted property setter: - (void)setCustomVerticalFlip:(BOOL)flip;	// 0x3294500d
// converted property setter: - (void)setLayoutTypeId:(id)anId;	// 0x328fd451
// converted property setter: - (void)setPresentationAssociatedId:(id)anId;	// 0x328fd6bd
// converted property setter: - (void)setPresentationName:(id)name;	// 0x328fd491
// converted property setter: - (void)setPresentationStyleCount:(int)count;	// 0x328fd871
// converted property setter: - (void)setPresentationStyleIndex:(int)index;	// 0x328fd881
// converted property setter: - (void)setPresentationStyleLabel:(id)label;	// 0x328fd4d1
@end
