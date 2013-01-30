/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SKApplication.h"
#import "SkankKit-Structs.h"

@class NSTimer, SKLayerModule, SKLayer, AVController;

@interface SKUIApplication : SKApplication {
	BOOL _eventsInitialized;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	SKLayer *_baseLayer;	// 16 = 0x10
	SKLayer *_topLayer;	// 20 = 0x14
	SKLayer *_mainLayer;	// 24 = 0x18
	SKLayerModule *_currentMainModule;	// 28 = 0x1c
	NSTimer *_rebootTimer;	// 32 = 0x20
	AVController *_avController;	// 36 = 0x24
	float _volume;	// 40 = 0x28
	bool _muted;	// 44 = 0x2c
}
@property(readonly, retain) SKLayer *baseLayer;	// G=0x35618c75; converted property
@property(assign) id delegate;	// G=0x35618b51; S=0x35618b61; converted property
@property(readonly, retain) SKLayer *mainLayer;	// G=0x35618d8d; converted property
@property(assign) bool muted;	// G=0x35619f55; S=0x35619f6d; @synthesize=_muted
@property(readonly, retain) SKLayer *topLayer;	// G=0x35618d7d; converted property
@property(assign) float volume;	// G=0x35619f29; S=0x35619f3d; @synthesize=_volume
+ (BOOL)bundleIsSwitchBoard:(id)board;	// 0x356198ad
+ (void)killBundle:(id)bundle;	// 0x356199d5
+ (void)launchBundle:(id)bundle;	// 0x35619a0d
+ (id)launchDForBundle:(id)bundle;	// 0x35619921
+ (void)loadLaunchD:(id)d;	// 0x35619639
+ (int)runApp:(id)app stdoutTo:(id)to;	// 0x35619a81
+ (void)startSwitchBoard;	// 0x35619bf9
+ (void)unloadLaunchD:(id)d;	// 0x356197fd
+ (BOOL)useSystemSwitchBoardLaunchD;	// 0x356198e1
- (id)init;	// 0x3561895d
- (void)SKSetMuted:(BOOL)muted;	// 0x35619491
- (void)SKSetVolume:(float)volume;	// 0x35619431
- (void)_startWindowServerIfNecessary;	// 0x35619ced
- (void)addLayer:(id)layer;	// 0x35618b71
// converted property getter: - (id)baseLayer;	// 0x35618c75
- (void)beginRebootCountdown;	// 0x35619115
- (void)buildWindow;	// 0x35618e5d
- (void)cancelReboot;	// 0x3561917d
- (CGPoint)convertPoint:(CGPoint)point toLayer:(id)layer;	// 0x356195ed
- (id)currentModule;	// 0x35619045
- (void)dealloc;	// 0x35618a81
- (float)defaultBrightness;	// 0x35619f21
// converted property getter: - (id)delegate;	// 0x35618b51
- (void)doScreenCapture;	// 0x35619e31
- (BOOL)handleEvent:(GSEventRef)event;	// 0x35619509
- (BOOL)handleMouseEvent:(GSEventRef)event;	// 0x356191b5
// converted property getter: - (id)mainLayer;	// 0x35618d8d
- (Class)mainModuleClass;	// 0x3561997d
// declared property getter: - (bool)muted;	// 0x35619f55
- (void)quit;	// 0x35619ca5
- (void)registerForSystemPowerNotifications;	// 0x35619dfd
- (void)run;	// 0x35619c59
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x35618b61
// declared property setter: - (void)setMuted:(bool)muted;	// 0x35619f6d
// declared property setter: - (void)setVolume:(float)volume;	// 0x35619f3d
- (void)showModule:(id)module;	// 0x35619055
- (void)showWindow;	// 0x35618fbd
- (void)timerReboot:(id)reboot;	// 0x356190f9
// converted property getter: - (id)topLayer;	// 0x35618d7d
// declared property getter: - (float)volume;	// 0x35619f29
@end
