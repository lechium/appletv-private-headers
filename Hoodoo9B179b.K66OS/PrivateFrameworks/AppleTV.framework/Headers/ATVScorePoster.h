/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRMediaShelfViewCell.h"

@class NSString, BRImage, ATVScorePosterReflectionControl;
@protocol BRImageProxy;

@interface ATVScorePoster : BRControl <BRMediaShelfViewCell> {
@private
	ATVScorePosterReflectionControl *_reflectionControl;	// 48 = 0x30
	BOOL _waitingForImages;	// 52 = 0x34
	BRImage *_backgroundImage;	// 56 = 0x38
	NSString *_upperLeftLabel1;	// 60 = 0x3c
	NSString *_upperLeftLabel2;	// 64 = 0x40
	NSString *_upperRightLabel;	// 68 = 0x44
	BRImage *_upperImage;	// 72 = 0x48
	id<BRImageProxy> _upperImageProxy;	// 76 = 0x4c
	NSString *_lowerLeftLabel1;	// 80 = 0x50
	NSString *_lowerLeftLabel2;	// 84 = 0x54
	NSString *_lowerRightLabel;	// 88 = 0x58
	BRImage *_lowerImage;	// 92 = 0x5c
	id<BRImageProxy> _lowerImageProxy;	// 96 = 0x60
	NSString *_centerLabel1;	// 100 = 0x64
	NSString *_centerLabel2;	// 104 = 0x68
}
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0x301f9e19; S=0x301f9e29; @synthesize=_backgroundImage
@property(retain, nonatomic) NSString *centerLabel1;	// G=0x301fa055; S=0x301fa065; @synthesize=_centerLabel1
@property(retain, nonatomic) NSString *centerLabel2;	// G=0x301fa089; S=0x301fa099; @synthesize=_centerLabel2
@property(retain, nonatomic) BRImage *lowerImage;	// G=0x301f9fed; S=0x301f9ffd; @synthesize=_lowerImage
@property(retain, nonatomic) id<BRImageProxy> lowerImageProxy;	// G=0x301fa021; S=0x301fa031; @synthesize=_lowerImageProxy
@property(retain, nonatomic) NSString *lowerLeftLabel1;	// G=0x301f9f51; S=0x301f9f61; @synthesize=_lowerLeftLabel1
@property(retain, nonatomic) NSString *lowerLeftLabel2;	// G=0x301f9f85; S=0x301f9f95; @synthesize=_lowerLeftLabel2
@property(retain, nonatomic) NSString *lowerRightLabel;	// G=0x301f9fb9; S=0x301f9fc9; @synthesize=_lowerRightLabel
@property(retain, nonatomic) BRImage *reflectionBackgroundImage;	// G=0x301f915d; S=0x301f913d; 
@property(retain, nonatomic) BRImage *upperImage;	// G=0x301f9ee9; S=0x301f9ef9; @synthesize=_upperImage
@property(retain, nonatomic) id<BRImageProxy> upperImageProxy;	// G=0x301f9f1d; S=0x301f9f2d; @synthesize=_upperImageProxy
@property(retain, nonatomic) NSString *upperLeftLabel1;	// G=0x301f9e4d; S=0x301f9e5d; @synthesize=_upperLeftLabel1
@property(retain, nonatomic) NSString *upperLeftLabel2;	// G=0x301f9e81; S=0x301f9e91; @synthesize=_upperLeftLabel2
@property(retain, nonatomic) NSString *upperRightLabel;	// G=0x301f9eb5; S=0x301f9ec5; @synthesize=_upperRightLabel
- (id)init;	// 0x301f8f09
- (CGRect)_contentFrame;	// 0x301fa0bd
- (void)_imageLoadFailed:(id)failed;	// 0x301fa275
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x301fa159
- (void)_setWaitingForImages:(BOOL)images;	// 0x301fa33d
- (id)accessibilityLabel;	// 0x301fa455
// declared property getter: - (id)backgroundImage;	// 0x301f9e19
// declared property getter: - (id)centerLabel1;	// 0x301fa055
// declared property getter: - (id)centerLabel2;	// 0x301fa089
- (void)dealloc;	// 0x301f8fbd
- (void)drawInContext:(CGContextRef)context;	// 0x301f9215
- (CGRect)focusCursorFrame;	// 0x301f917d
- (void)hideTextLayers;	// 0x301f9de1
- (BOOL)isAccessibilityElement;	// 0x301fa451
// declared property getter: - (id)lowerImage;	// 0x301f9fed
// declared property getter: - (id)lowerImageProxy;	// 0x301fa021
// declared property getter: - (id)lowerLeftLabel1;	// 0x301f9f51
// declared property getter: - (id)lowerLeftLabel2;	// 0x301f9f85
// declared property getter: - (id)lowerRightLabel;	// 0x301f9fb9
// declared property getter: - (id)reflectionBackgroundImage;	// 0x301f915d
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x301f9e29
// declared property setter: - (void)setCenterLabel1:(id)a1;	// 0x301fa065
// declared property setter: - (void)setCenterLabel2:(id)a2;	// 0x301fa099
- (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x301f9de5
// declared property setter: - (void)setLowerImage:(id)image;	// 0x301f9ffd
// declared property setter: - (void)setLowerImageProxy:(id)proxy;	// 0x301fa031
// declared property setter: - (void)setLowerLeftLabel1:(id)a1;	// 0x301f9f61
// declared property setter: - (void)setLowerLeftLabel2:(id)a2;	// 0x301f9f95
// declared property setter: - (void)setLowerRightLabel:(id)label;	// 0x301f9fc9
// declared property setter: - (void)setReflectionBackgroundImage:(id)image;	// 0x301f913d
// declared property setter: - (void)setUpperImage:(id)image;	// 0x301f9ef9
// declared property setter: - (void)setUpperImageProxy:(id)proxy;	// 0x301f9f2d
// declared property setter: - (void)setUpperLeftLabel1:(id)a1;	// 0x301f9e5d
// declared property setter: - (void)setUpperLeftLabel2:(id)a2;	// 0x301f9e91
// declared property setter: - (void)setUpperRightLabel:(id)label;	// 0x301f9ec5
// declared property getter: - (id)upperImage;	// 0x301f9ee9
// declared property getter: - (id)upperImageProxy;	// 0x301f9f1d
// declared property getter: - (id)upperLeftLabel1;	// 0x301f9e4d
// declared property getter: - (id)upperLeftLabel2;	// 0x301f9e81
// declared property getter: - (id)upperRightLabel;	// 0x301f9eb5
@end

