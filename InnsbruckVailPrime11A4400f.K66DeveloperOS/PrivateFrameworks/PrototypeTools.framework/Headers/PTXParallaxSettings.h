/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <UIKit/_UISettings.h>


@interface PTXParallaxSettings : _UISettings {
	BOOL _slideEnabled;	// 32 = 0x20
	BOOL _tiltEnabled;	// 33 = 0x21
	BOOL _increaseEnabled;	// 34 = 0x22
	BOOL _alphaEnabled;	// 35 = 0x23
	int _slideDirectionX;	// 36 = 0x24
	int _slideDirectionY;	// 40 = 0x28
	float _slidePixelsX;	// 44 = 0x2c
	float _slidePixelsY;	// 48 = 0x30
	int _tiltDirectionX;	// 52 = 0x34
	int _tiltDirectionY;	// 56 = 0x38
	float _tiltDegreesX;	// 60 = 0x3c
	float _tiltDegreesY;	// 64 = 0x40
	int _distanceFromScreen;	// 68 = 0x44
	float _perspectiveTransform;	// 72 = 0x48
	float _slideIncreaseX;	// 76 = 0x4c
	float _slideIncreaseY;	// 80 = 0x50
	float _tiltIncreaseX;	// 84 = 0x54
	float _tiltIncreaseY;	// 88 = 0x58
	float _minAlpha;	// 92 = 0x5c
	float _maxAlpha;	// 96 = 0x60
}
@property(assign) BOOL alphaEnabled;	// G=0x325a6919; S=0x325a6931; @synthesize=_alphaEnabled
@property(assign) int distanceFromScreen;	// G=0x325a67e1; S=0x325a67f5; @synthesize=_distanceFromScreen
@property(assign) BOOL increaseEnabled;	// G=0x325a6839; S=0x325a6851; @synthesize=_increaseEnabled
@property(assign) float maxAlpha;	// G=0x325a6975; S=0x325a6989; @synthesize=_maxAlpha
@property(assign) float minAlpha;	// G=0x325a6949; S=0x325a695d; @synthesize=_minAlpha
@property(assign) float perspectiveTransform;	// G=0x325a680d; S=0x325a6821; @synthesize=_perspectiveTransform
@property(assign) int slideDirectionX;	// G=0x325a6651; S=0x325a6665; @synthesize=_slideDirectionX
@property(assign) int slideDirectionY;	// G=0x325a667d; S=0x325a6691; @synthesize=_slideDirectionY
@property(assign) BOOL slideEnabled;	// G=0x325a6621; S=0x325a6639; @synthesize=_slideEnabled
@property(assign) float slideIncreaseX;	// G=0x325a6869; S=0x325a687d; @synthesize=_slideIncreaseX
@property(assign) float slideIncreaseY;	// G=0x325a6895; S=0x325a68a9; @synthesize=_slideIncreaseY
@property(assign) float slidePixelsX;	// G=0x325a66a9; S=0x325a66bd; @synthesize=_slidePixelsX
@property(assign) float slidePixelsY;	// G=0x325a66d5; S=0x325a66e9; @synthesize=_slidePixelsY
@property(assign) float tiltDegreesX;	// G=0x325a6789; S=0x325a679d; @synthesize=_tiltDegreesX
@property(assign) float tiltDegreesY;	// G=0x325a67b5; S=0x325a67c9; @synthesize=_tiltDegreesY
@property(assign) int tiltDirectionX;	// G=0x325a6731; S=0x325a6745; @synthesize=_tiltDirectionX
@property(assign) int tiltDirectionY;	// G=0x325a675d; S=0x325a6771; @synthesize=_tiltDirectionY
@property(assign) BOOL tiltEnabled;	// G=0x325a6701; S=0x325a6719; @synthesize=_tiltEnabled
@property(assign) float tiltIncreaseX;	// G=0x325a68c1; S=0x325a68d5; @synthesize=_tiltIncreaseX
@property(assign) float tiltIncreaseY;	// G=0x325a68ed; S=0x325a6901; @synthesize=_tiltIncreaseY
+ (id)settingsControllerModule;	// 0x325a59e5
// declared property getter: - (BOOL)alphaEnabled;	// 0x325a6919
// declared property getter: - (int)distanceFromScreen;	// 0x325a67e1
// declared property getter: - (BOOL)increaseEnabled;	// 0x325a6839
// declared property getter: - (float)maxAlpha;	// 0x325a6975
// declared property getter: - (float)minAlpha;	// 0x325a6949
// declared property getter: - (float)perspectiveTransform;	// 0x325a680d
// declared property setter: - (void)setAlphaEnabled:(BOOL)enabled;	// 0x325a6931
- (void)setDefaultValues;	// 0x325a5815
// declared property setter: - (void)setDistanceFromScreen:(int)screen;	// 0x325a67f5
// declared property setter: - (void)setIncreaseEnabled:(BOOL)enabled;	// 0x325a6851
// declared property setter: - (void)setMaxAlpha:(float)alpha;	// 0x325a6989
// declared property setter: - (void)setMinAlpha:(float)alpha;	// 0x325a695d
// declared property setter: - (void)setPerspectiveTransform:(float)transform;	// 0x325a6821
// declared property setter: - (void)setSlideDirectionX:(int)x;	// 0x325a6665
// declared property setter: - (void)setSlideDirectionY:(int)y;	// 0x325a6691
// declared property setter: - (void)setSlideEnabled:(BOOL)enabled;	// 0x325a6639
// declared property setter: - (void)setSlideIncreaseX:(float)x;	// 0x325a687d
// declared property setter: - (void)setSlideIncreaseY:(float)y;	// 0x325a68a9
// declared property setter: - (void)setSlidePixelsX:(float)x;	// 0x325a66bd
// declared property setter: - (void)setSlidePixelsY:(float)y;	// 0x325a66e9
// declared property setter: - (void)setTiltDegreesX:(float)x;	// 0x325a679d
// declared property setter: - (void)setTiltDegreesY:(float)y;	// 0x325a67c9
// declared property setter: - (void)setTiltDirectionX:(int)x;	// 0x325a6745
// declared property setter: - (void)setTiltDirectionY:(int)y;	// 0x325a6771
// declared property setter: - (void)setTiltEnabled:(BOOL)enabled;	// 0x325a6719
// declared property setter: - (void)setTiltIncreaseX:(float)x;	// 0x325a68d5
// declared property setter: - (void)setTiltIncreaseY:(float)y;	// 0x325a6901
// declared property getter: - (int)slideDirectionX;	// 0x325a6651
// declared property getter: - (int)slideDirectionY;	// 0x325a667d
// declared property getter: - (BOOL)slideEnabled;	// 0x325a6621
// declared property getter: - (float)slideIncreaseX;	// 0x325a6869
// declared property getter: - (float)slideIncreaseY;	// 0x325a6895
// declared property getter: - (float)slidePixelsX;	// 0x325a66a9
// declared property getter: - (float)slidePixelsY;	// 0x325a66d5
// declared property getter: - (float)tiltDegreesX;	// 0x325a6789
// declared property getter: - (float)tiltDegreesY;	// 0x325a67b5
// declared property getter: - (int)tiltDirectionX;	// 0x325a6731
// declared property getter: - (int)tiltDirectionY;	// 0x325a675d
// declared property getter: - (BOOL)tiltEnabled;	// 0x325a6701
// declared property getter: - (float)tiltIncreaseX;	// 0x325a68c1
// declared property getter: - (float)tiltIncreaseY;	// 0x325a68ed
@end

