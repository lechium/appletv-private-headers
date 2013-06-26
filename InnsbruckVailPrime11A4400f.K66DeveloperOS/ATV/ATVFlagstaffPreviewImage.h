/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRReady.h"
#import "BRControl.h"

@class NSString, BRReflectionControl, ATVFlagstaffPreviewImageOverLay, BRAsyncImageControl, ATVImage;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPreviewImage : BRControl <BRReady> {
	BRAsyncImageControl *_imageControl;	// 84 = 0x54
	BRAsyncImageControl *_logoImageControl;	// 88 = 0x58
	BRReflectionControl *_reflectionControl;	// 92 = 0x5c
	ATVFlagstaffPreviewImageOverLay *_overLayControl;	// 96 = 0x60
	BOOL _isReady;	// 100 = 0x64
}
@property(retain, nonatomic) ATVImage *image;	// G=0x16e601; S=0x16e4e5; 
@property(retain, nonatomic) id<BRImageProxy> imageProxy;	// G=0x16e78d; S=0x16e621; 
@property(readonly, assign) BOOL isReady;	// G=0x16e4d5; converted property
@property(retain, nonatomic) ATVImage *logoImage;	// G=0x16e839; S=0x16e7ad; 
@property(retain, nonatomic) id<BRImageProxy> logoImageProxy;	// G=0x16e8e5; S=0x16e859; 
@property(copy, nonatomic) NSString *text1;	// G=0x16e925; S=0x16e905; 
@property(copy, nonatomic) NSString *text2;	// G=0x16e965; S=0x16e945; 
@property(copy, nonatomic) NSString *text3;	// G=0x16e9a5; S=0x16e985; 
- (id)init;	// 0x16e2ed
- (void)_imageReady:(id)ready;	// 0x16eaf5
- (void)dealloc;	// 0x16e3cd
- (void)getReady;	// 0x16e485
// declared property getter: - (id)image;	// 0x16e601
// declared property getter: - (id)imageProxy;	// 0x16e78d
// converted property getter: - (BOOL)isReady;	// 0x16e4d5
- (void)layoutSubcontrols;	// 0x16e9c5
// declared property getter: - (id)logoImage;	// 0x16e839
// declared property getter: - (id)logoImageProxy;	// 0x16e8e5
// declared property setter: - (void)setImage:(id)image;	// 0x16e4e5
// declared property setter: - (void)setImageProxy:(id)proxy;	// 0x16e621
// declared property setter: - (void)setLogoImage:(id)image;	// 0x16e7ad
// declared property setter: - (void)setLogoImageProxy:(id)proxy;	// 0x16e859
// declared property setter: - (void)setText1:(id)a1;	// 0x16e905
// declared property setter: - (void)setText2:(id)a2;	// 0x16e945
// declared property setter: - (void)setText3:(id)a3;	// 0x16e985
// declared property getter: - (id)text1;	// 0x16e925
// declared property getter: - (id)text2;	// 0x16e965
// declared property getter: - (id)text3;	// 0x16e9a5
@end
