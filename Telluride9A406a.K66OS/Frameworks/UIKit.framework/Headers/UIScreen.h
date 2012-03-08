/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UISoftwareDimmingWindow, UIScreenMode, NSArray;

@interface UIScreen : NSObject {
@private
	id _display;	// 4 = 0x4
	CGRect _bounds;	// 8 = 0x8
	float _scale;	// 24 = 0x18
	float _horizontalScale;	// 28 = 0x1c
	struct {
		unsigned bitsPerComponent : 4;
		unsigned initialized : 1;
		unsigned connected : 1;
		unsigned overscanCompensation : 2;
	} _screenFlags;	// 32 = 0x20
	BOOL _wantsSoftwareDimming;	// 33 = 0x21
	UISoftwareDimmingWindow *_softwareDimmingWindow;	// 36 = 0x24
	int _ignoreBacklightLevelDidChangeNotificationsCount;	// 40 = 0x28
}
@property(assign, nonatomic, setter=_setIgnoreBacklightLevelDidChangeNotificationsCount:) int _ignoreBacklightLevelDidChangeNotificationsCount;	// G=0x358cf981; S=0x358cf991; @synthesize
@property(retain, nonatomic, setter=_setSoftwareDimmingWindow:) UISoftwareDimmingWindow *_softwareDimmingWindow;	// G=0x358cf94d; S=0x358cf95d; @synthesize
@property(readonly, assign, nonatomic) CGRect applicationFrame;	// G=0x356b5905; 
@property(readonly, assign, nonatomic) NSArray *availableModes;	// G=0x357506b5; 
@property(assign) int bitsPerComponent;	// G=0x356a7309; S=0x358cef19; converted property
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x35677c31; @synthesize=_bounds
@property(assign, nonatomic) float brightness;	// G=0x358cf595; S=0x358cf399; 
@property(retain, nonatomic) UIScreenMode *currentMode;	// G=0x356a47d1; S=0x358cef35; 
@property(readonly, assign, nonatomic) UIScreen *mirroredScreen;	// G=0x358cee61; 
@property(assign, nonatomic) int overscanCompensation;	// G=0x358cefc1; S=0x358cefd5; 
@property(readonly, assign, nonatomic) UIScreenMode *preferredMode;	// G=0x358ceecd; 
@property(readonly, assign, nonatomic) float scale;	// G=0x356741fd; @synthesize=_scale
@property(assign, nonatomic) BOOL wantsSoftwareDimming;	// G=0x358cf92d; S=0x358cf93d; @synthesize=_wantsSoftwareDimming
+ (void)_prepareScreensForAppResume;	// 0x357504d9
+ (id)_screenWithDisplayName:(id)displayName;	// 0x358ce56d
+ (void)_videoOutSettingsChanged;	// 0x358ce1c9
+ (CGPoint)convertPoint:(CGPoint)point fromView:(id)view;	// 0x358cf865
+ (CGPoint)convertPoint:(CGPoint)point toView:(id)view;	// 0x358cf79d
+ (CGRect)convertRect:(CGRect)rect fromView:(id)view;	// 0x356f71c1
+ (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x356f72b5
+ (void)initialize;	// 0x356a4141
+ (id)mainScreen;	// 0x356741dd
+ (id)screens;	// 0x35750599
+ (CGAffineTransform)transformForScreenOriginRotation:(float)screenOriginRotation;	// 0x358ce3b1
+ (CGAffineTransform)transformToRotateScreen:(float)rotateScreen;	// 0x358ce48d
- (id)initWithDisplay:(id)display;	// 0x356a439d
- (CGRect)_applicationFrameForInterfaceOrientation:(int)interfaceOrientation;	// 0x356b5961
- (void)_beginObservingBacklightLevelNotifications;	// 0x356a4d09
- (CGRect)_boundsInPixels;	// 0x3568b861
- (void)_computeMetrics;	// 0x356a450d
- (void)_decrementIgnoreBacklightLevelDidChangeNotificationsCount;	// 0x358cf21d
- (void)_endObservingBacklightLevelNotifications;	// 0x358cf329
- (BOOL)_hasStatusBar;	// 0x356b5b31
- (BOOL)_hasWindows;	// 0x358cec75
- (float)_horizontalPixelScale;	// 0x356a7869
// declared property getter: - (int)_ignoreBacklightLevelDidChangeNotificationsCount;	// 0x358cf981
- (int)_imageOrientation;	// 0x358ced39
- (void)_incrementIgnoreBacklightLevelDidChangeNotificationsCount;	// 0x358cf1ed
- (BOOL)_isMainScreen;	// 0x3568b811
- (BOOL)_isOverscanned;	// 0x356a4c8d
- (id)_lazySoftwareDimmingWindow;	// 0x358cf0d5
- (id)_name;	// 0x358cf00d
- (BOOL)_overscanAdjustmentNeedsUpdate;	// 0x356a4bbd
- (void)_postBrightnessDidChangeNotificationIfAppropriate;	// 0x358cf27d
- (void)_prepareForWindow;	// 0x358cf049
- (CGRect)_realDisplayBounds;	// 0x356a7879
- (double)_refreshRate;	// 0x358cee41
- (float)_rotation;	// 0x3568b7dd
// declared property setter: - (void)_setIgnoreBacklightLevelDidChangeNotificationsCount:(int)_setIgnoreBacklightLevel;	// 0x358cf991
- (void)_setScale:(float)scale;	// 0x358cf0c5
// declared property setter: - (void)_setSoftwareDimmingWindow:(id)window;	// 0x358cf95d
- (BOOL)_shouldRepostBacklightLevelChangedNotification;	// 0x358cf25d
// declared property getter: - (id)_softwareDimmingWindow;	// 0x358cf94d
- (BOOL)_supportsBrightness;	// 0x358cf381
- (void)_updateOverscanCompensationAllowingBackgroundUpdate:(BOOL)update;	// 0x356a4931
// declared property getter: - (CGRect)applicationFrame;	// 0x356b5905
// declared property getter: - (id)availableModes;	// 0x357506b5
// converted property getter: - (int)bitsPerComponent;	// 0x356a7309
// declared property getter: - (CGRect)bounds;	// 0x35677c31
// declared property getter: - (float)brightness;	// 0x358cf595
// declared property getter: - (id)currentMode;	// 0x356a47d1
- (void)dealloc;	// 0x358ce63d
- (id)description;	// 0x358cf66d
- (id)displayLinkWithTarget:(id)target selector:(SEL)selector;	// 0x35799fe5
// declared property getter: - (id)mirroredScreen;	// 0x358cee61
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x358ce735
// declared property getter: - (int)overscanCompensation;	// 0x358cefc1
// declared property getter: - (id)preferredMode;	// 0x358ceecd
- (float)rawBrightnessForBacklightLevel:(float)backlightLevel;	// 0x358cf1b5
// declared property getter: - (float)scale;	// 0x356741fd
- (int)screenType;	// 0x358cef89
// converted property setter: - (void)setBitsPerComponent:(int)component;	// 0x358cef19
// declared property setter: - (void)setBrightness:(float)brightness;	// 0x358cf399
// declared property setter: - (void)setCurrentMode:(id)mode;	// 0x358cef35
// declared property setter: - (void)setOverscanCompensation:(int)compensation;	// 0x358cefd5
// declared property setter: - (void)setWantsSoftwareDimming:(BOOL)dimming;	// 0x358cf93d
// declared property getter: - (BOOL)wantsSoftwareDimming;	// 0x358cf92d
@end

