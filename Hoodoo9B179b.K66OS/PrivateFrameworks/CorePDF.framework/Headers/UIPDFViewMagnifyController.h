/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class UIPDFMagnifiedView, UIWindow, UIPDFPageView;

@interface UIPDFViewMagnifyController : NSObject {
	CGPoint _magnifierPoint;	// 4 = 0x4
	CGPoint _touchPoint;	// 12 = 0xc
	float _loupeRadius;	// 20 = 0x14
	float _power;	// 24 = 0x18
	CGSize _magnifierSize;	// 28 = 0x1c
	BOOL _showingLoupe;	// 36 = 0x24
	UIPDFMagnifiedView *_magnifiedView;	// 40 = 0x28
	UIWindow *_textEffectsWindow;	// 44 = 0x2c
	UIPDFPageView *_pageView;	// 48 = 0x30
	float _magnification;	// 52 = 0x34
}
@property(assign, nonatomic) float magnification;	// G=0x34887aa5; S=0x34887ab5; @synthesize=_magnification
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x34887ac5; S=0x34887ad5; @synthesize=_pageView
- (id)init;	// 0x34887ae5
- (CGImageRef)createBackingImage;	// 0x34888581
- (CGImageRef)createBitMap:(CGRect)map source:(CGRect)source;	// 0x348887a9
- (void)hide;	// 0x34887b9d
// declared property getter: - (float)magnification;	// 0x34887aa5
- (void)move;	// 0x34887be5
// declared property getter: - (id)pageView;	// 0x34887ac5
- (void)selectPower;	// 0x34887fb1
// declared property setter: - (void)setMagnification:(float)magnification;	// 0x34887ab5
// declared property setter: - (void)setPageView:(id)view;	// 0x34887ad5
- (void)setPosition:(CGPoint)position viewPoint:(CGPoint)point loupe:(BOOL)loupe;	// 0x348889dd
- (void)setSelectionPath;	// 0x348880b1
- (void)showGlass:(BOOL)glass size:(CGSize)size;	// 0x34887d8d
- (void)showLoupe;	// 0x34887d41
- (void)showMagnifier;	// 0x34887cf9
- (CGPoint)transformPointToTSpace:(CGPoint)tspace transform:(CGAffineTransform *)transform;	// 0x34888479
@end

