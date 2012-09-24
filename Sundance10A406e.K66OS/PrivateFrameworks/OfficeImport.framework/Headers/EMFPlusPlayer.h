/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EMFPlayer, MFPEffect, NSMutableData, MFPGraphics;

@interface EMFPlusPlayer : NSObject {
	MFPGraphics *mGraphics;	// 4 = 0x4
	EMFPlayer *mOwner;	// 8 = 0x8
	int mLargeType;	// 12 = 0xc
	unsigned short mLargeFlags;	// 16 = 0x10
	unsigned long mLargeSize;	// 20 = 0x14
	NSMutableData *mLargeData;	// 24 = 0x18
	MFPEffect *mEffect;	// 28 = 0x1c
}
@property(retain) id effect;	// G=0x3514eb85; S=0x3514eb95; converted property
+ (float)firstTabPosPastPos:(float)pos stringFormat:(id)format isExplicit:(BOOL *)anExplicit;	// 0x35151af9
+ (int)serializableObjectTypeForGUID:(id)guid;	// 0x3514e91d
- (id)initWithOwner:(id)owner canvas:(CGRect)canvas;	// 0x34f238d9
- (CGPathRef)canvasInWorldCoordinates;	// 0x35150659
- (void)dealloc;	// 0x34f27205
// converted property getter: - (id)effect;	// 0x3514eb85
- (int)play:(const char *)play :(unsigned long)arg2;	// 0x34fe5189
- (int)playBeginContainer:(const char *)container :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35153201
- (int)playBeginContainerNoParams:(const char *)params :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35153295
- (int)playBlurEffectWithData:(const char *)data size:(unsigned long)size;	// 0x35153909
- (int)playBrightnessContrastEffectWithData:(const char *)data size:(unsigned long)size;	// 0x35153b71
- (int)playBrush:(const char *)brush :(unsigned long)arg2 :(unsigned char)arg3;	// 0x3514fae1
- (int)playClear:(const char *)clear :(unsigned long)arg2 :(unsigned short)arg3;	// 0x3515081d
- (int)playColorBalanceEffectWithData:(const char *)data size:(unsigned long)size;	// 0x35153e51
- (int)playColorCurveEffectWithData:(const char *)data size:(unsigned long)size;	// 0x351540c5
- (int)playColorLUTEffectWithData:(const char *)data size:(unsigned long)size;	// 0x35153b01
- (int)playColorMatrixEffectWithData:(const char *)data size:(unsigned long)size;	// 0x35153a29
- (int)playCustomLineCap:(const char *)cap :(unsigned long)arg2 :(unsigned char)arg3;	// 0x3515059d
- (int)playDrawArc:(const char *)arc :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35150cd5
- (int)playDrawBeziers:(const char *)beziers :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35150f2d
- (int)playDrawClosedCurve:(const char *)curve :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351512a5
- (int)playDrawCurve:(const char *)curve :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351514b9
- (int)playDrawDriverString:(const char *)string :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35152b39
- (int)playDrawEllipse:(const char *)ellipse :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351509c9
- (int)playDrawImage:(const char *)image :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35151801
- (int)playDrawImagePoints:(const char *)points :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351518c5
- (int)playDrawLines:(const char *)lines :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35150c25
- (int)playDrawPath:(const char *)path :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351516f9
- (int)playDrawPie:(const char *)pie :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35150e51
- (int)playDrawRects:(const char *)rects :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35150acd
- (int)playDrawString:(const char *)string :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35151be1
- (int)playEndContainer:(const char *)container :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351532d5
- (int)playFillClosedCurve:(const char *)curve :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35151091
- (int)playFillEllipse:(const char *)ellipse :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351508e1
- (int)playFillPath:(const char *)path :(unsigned long)arg2 :(unsigned short)arg3;	// 0x3515178d
- (int)playFillPath:(CGPathRef)path :(const char *)arg2 :(unsigned long)arg3 :(unsigned short)arg4;	// 0x351506dd
- (int)playFillPie:(const char *)pie :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35150d75
- (int)playFillPolygon:(const char *)polygon :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35150b6d
- (int)playFillRects:(const char *)rects :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35150a2d
- (int)playFont:(const char *)font :(unsigned long)arg2 :(unsigned char)arg3;	// 0x3515015d
- (int)playGetDC:(const char *)dc :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35153159
- (int)playGraphics:(const char *)graphics :(unsigned long)arg2 :(unsigned char)arg3;	// 0x351505a1
- (int)playHeader:(const char *)header :(unsigned long)arg2 :(unsigned short)arg3;	// 0x34fe579d
- (int)playHueSaturationLightnessEffectWithData:(const char *)data size:(unsigned long)size;	// 0x35153c15
- (int)playImage:(const char *)image :(unsigned long)arg2 :(unsigned char)arg3;	// 0x351500e9
- (int)playImageAttributes:(const char *)attributes :(unsigned long)arg2 :(unsigned char)arg3;	// 0x35150599
- (int)playLevelsEffectWithData:(const char *)data size:(unsigned long)size;	// 0x35153ce1
- (int)playMultiplyWorldTransform:(const char *)transform :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351533cd
- (int)playObject:(const char *)object :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351505a5
- (int)playOffsetClip:(const char *)clip :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35153855
- (int)playPath:(const char *)path :(unsigned long)arg2 :(unsigned char)arg3;	// 0x35150031
- (int)playPen:(const char *)pen :(unsigned long)arg2 :(unsigned char)arg3;	// 0x3514fb55
- (int)playRecord:(int)record :(const char *)arg2 :(unsigned long)arg3 :(unsigned short)arg4;	// 0x34fe5461
- (int)playRedEyeCorrectionEffectWithData:(const char *)data size:(unsigned long)size;	// 0x35153f1d
- (int)playRegion:(const char *)region :(unsigned long)arg2 :(unsigned char)arg3;	// 0x351500e5
- (int)playResetClip:(const char *)clip :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351536e5
- (int)playResetWorldTransform:(const char *)transform :(unsigned long)arg2 :(unsigned short)arg3;	// 0x3515336d
- (int)playRestore:(const char *)restore :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351531c1
- (int)playRotateWorldTransform:(const char *)transform :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35153589
- (int)playSave:(const char *)save :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35153181
- (int)playScaleWorldTransform:(const char *)transform :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351534e1
- (int)playSerializableObject:(const char *)object :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35154191
- (int)playSetAntiAliasMode:(const char *)mode :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351538b1
- (int)playSetClipPath:(const char *)path :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351537b5
- (int)playSetClipRect:(const char *)rect :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35153765
- (int)playSetClipRegion:(const char *)region :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35153851
- (int)playSetCompositingMode:(const char *)mode :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35153901
- (int)playSetCompositingQuality:(const char *)quality :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35153905
- (int)playSetInterpolationMode:(const char *)mode :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351538d5
- (int)playSetPageTransform:(const char *)transform :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35153639
- (int)playSetPixelOffsetMode:(const char *)mode :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351538fd
- (int)playSetRenderingOrigin:(const char *)origin :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35153859
- (int)playSetTextContrast:(const char *)contrast :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351538d1
- (int)playSetTextRenderingHint:(const char *)hint :(unsigned long)arg2 :(unsigned short)arg3;	// 0x351538cd
- (int)playSetWorldTransform:(const char *)transform :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35153315
- (int)playSharpenEffectWithData:(const char *)data size:(unsigned long)size;	// 0x35153991
- (int)playStringFormat:(const char *)format :(unsigned long)arg2 :(unsigned char)arg3;	// 0x35150305
- (int)playStrokePath:(CGPathRef)path :(const char *)arg2 :(unsigned long)arg3 :(unsigned short)arg4;	// 0x351507c9
- (int)playTintEffectWithData:(const char *)data size:(unsigned long)size;	// 0x35153dad
- (int)playTranslateWorldTransform:(const char *)transform :(unsigned long)arg2 :(unsigned short)arg3;	// 0x35153439
- (int)playUnknown:(const char *)unknown :(unsigned long)arg2 :(int)arg3 :(unsigned short)arg4;	// 0x3514ebd1
- (int)readBrush:(const char *)brush :(unsigned long)arg2 returnBrush:(id *)brush3;	// 0x3514f39d
- (int)readGradientBrush:(id)brush from:(const char **)from brushFlags:(unsigned long)flags;	// 0x3514efe5
- (int)readImage:(const char *)image :(unsigned long)arg2 :(id *)arg3;	// 0x3514ebd9
- (int)readPath:(const char *)path :(unsigned long)arg2 returnPath:(CGPathRef *)path3;	// 0x3514ede1
- (void)resetLargeRecord;	// 0x35154351
- (int)setClipPath:(CGPathRef)path flags:(unsigned short)flags;	// 0x3515370d
// converted property setter: - (void)setEffect:(id)effect;	// 0x3514eb95
@end
