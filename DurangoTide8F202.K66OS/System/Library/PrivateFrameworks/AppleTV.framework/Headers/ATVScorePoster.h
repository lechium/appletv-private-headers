/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMediaShelfViewCell.h"
#import <BRControl.h> // Unknown library

@class BRImage, NSString, ATVScorePosterReflectionControl;
@protocol BRImageProxy;

@interface ATVScorePoster : BRControl <BRMediaShelfViewCell> {
@private
	ATVScorePosterReflectionControl *_reflectionControl;	// 44 = 0x2c
	BOOL _waitingForImages;	// 48 = 0x30
	BOOL _imageEdgeAntialiasingEnabled;	// 49 = 0x31
	BRImage *_backgroundImage;	// 52 = 0x34
	NSString *_upperLeftLabel1;	// 56 = 0x38
	NSString *_upperLeftLabel2;	// 60 = 0x3c
	NSString *_upperRightLabel;	// 64 = 0x40
	BRImage *_upperImage;	// 68 = 0x44
	id<BRImageProxy> _upperImageProxy;	// 72 = 0x48
	NSString *_lowerLeftLabel1;	// 76 = 0x4c
	NSString *_lowerLeftLabel2;	// 80 = 0x50
	NSString *_lowerRightLabel;	// 84 = 0x54
	BRImage *_lowerImage;	// 88 = 0x58
	id<BRImageProxy> _lowerImageProxy;	// 92 = 0x5c
	NSString *_centerLabel1;	// 96 = 0x60
	NSString *_centerLabel2;	// 100 = 0x64
}
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0x3371f299; S=0x3371f9c1; @synthesize=_backgroundImage
@property(retain, nonatomic) NSString *centerLabel1;	// G=0x3371f1e9; S=0x3371fb79; @synthesize=_centerLabel1
@property(retain, nonatomic) NSString *centerLabel2;	// G=0x3371f1d9; S=0x3371fba1; @synthesize=_centerLabel2
@property(retain, nonatomic) BRImage *lowerImage;	// G=0x3371f209; S=0x3371fb29; @synthesize=_lowerImage
@property(retain, nonatomic) id<BRImageProxy> lowerImageProxy;	// G=0x3371f1f9; S=0x3371fb51; @synthesize=_lowerImageProxy
@property(retain, nonatomic) NSString *lowerLeftLabel1;	// G=0x3371f239; S=0x3371fab1; @synthesize=_lowerLeftLabel1
@property(retain, nonatomic) NSString *lowerLeftLabel2;	// G=0x3371f229; S=0x3371fad9; @synthesize=_lowerLeftLabel2
@property(retain, nonatomic) NSString *lowerRightLabel;	// G=0x3371f219; S=0x3371fb01; @synthesize=_lowerRightLabel
@property(retain, nonatomic) BRImage *reflectionBackgroundImage;	// G=0x3371f70d; S=0x3371f72d; 
@property(retain, nonatomic) BRImage *upperImage;	// G=0x3371f259; S=0x3371fa61; @synthesize=_upperImage
@property(retain, nonatomic) id<BRImageProxy> upperImageProxy;	// G=0x3371f249; S=0x3371fa89; @synthesize=_upperImageProxy
@property(retain, nonatomic) NSString *upperLeftLabel1;	// G=0x3371f289; S=0x3371f9e9; @synthesize=_upperLeftLabel1
@property(retain, nonatomic) NSString *upperLeftLabel2;	// G=0x3371f279; S=0x3371fa11; @synthesize=_upperLeftLabel2
@property(retain, nonatomic) NSString *upperRightLabel;	// G=0x3371f269; S=0x3371fa39; @synthesize=_upperRightLabel
- (id)init;	// 0x3371f8a9
- (CGRect)_contentFrame;	// 0x3371fecd
- (void)_imageLoadFailed:(id)failed;	// 0x3371f521
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x3371f5d5
- (void)_setWaitingForImages:(BOOL)images;	// 0x3371f429
- (id)accessibilityLabel;	// 0x3371fbc9
// declared property getter: - (id)backgroundImage;	// 0x3371f299
// declared property getter: - (id)centerLabel1;	// 0x3371f1e9
// declared property getter: - (id)centerLabel2;	// 0x3371f1d9
- (void)dealloc;	// 0x3371f74d
- (void)drawInContext:(CGContextRef)context;	// 0x3371ff55
- (CGRect)focusCursorFrame;	// 0x3371f959
- (void)hideTextLayers;	// 0x3371f1d5
- (BOOL)isAccessibilityElement;	// 0x3371f2a9
// declared property getter: - (id)lowerImage;	// 0x3371f209
// declared property getter: - (id)lowerImageProxy;	// 0x3371f1f9
// declared property getter: - (id)lowerLeftLabel1;	// 0x3371f239
// declared property getter: - (id)lowerLeftLabel2;	// 0x3371f229
// declared property getter: - (id)lowerRightLabel;	// 0x3371f219
// declared property getter: - (id)reflectionBackgroundImage;	// 0x3371f70d
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x3371f9c1
// declared property setter: - (void)setCenterLabel1:(id)a1;	// 0x3371fb79
// declared property setter: - (void)setCenterLabel2:(id)a2;	// 0x3371fba1
- (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x3371f6d1
// declared property setter: - (void)setLowerImage:(id)image;	// 0x3371fb29
// declared property setter: - (void)setLowerImageProxy:(id)proxy;	// 0x3371fb51
// declared property setter: - (void)setLowerLeftLabel1:(id)a1;	// 0x3371fab1
// declared property setter: - (void)setLowerLeftLabel2:(id)a2;	// 0x3371fad9
// declared property setter: - (void)setLowerRightLabel:(id)label;	// 0x3371fb01
// declared property setter: - (void)setReflectionBackgroundImage:(id)image;	// 0x3371f72d
// declared property setter: - (void)setUpperImage:(id)image;	// 0x3371fa61
// declared property setter: - (void)setUpperImageProxy:(id)proxy;	// 0x3371fa89
// declared property setter: - (void)setUpperLeftLabel1:(id)a1;	// 0x3371f9e9
// declared property setter: - (void)setUpperLeftLabel2:(id)a2;	// 0x3371fa11
// declared property setter: - (void)setUpperRightLabel:(id)label;	// 0x3371fa39
// declared property getter: - (id)upperImage;	// 0x3371f259
// declared property getter: - (id)upperImageProxy;	// 0x3371f249
// declared property getter: - (id)upperLeftLabel1;	// 0x3371f289
// declared property getter: - (id)upperLeftLabel2;	// 0x3371f279
// declared property getter: - (id)upperRightLabel;	// 0x3371f269
@end

