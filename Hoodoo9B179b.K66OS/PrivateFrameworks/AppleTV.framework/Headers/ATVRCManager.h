/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class ATVRCCapture, ATVRemoteSet, NSMutableArray, NSTimer;

@interface ATVRCManager : NSObject {
@private
	int _runState;	// 4 = 0x4
	ATVRCCapture *_trpCapture;	// 8 = 0x8
	NSMutableArray *_remoteSets;	// 12 = 0xc
	ATVRemoteSet *_learningSet;	// 16 = 0x10
	ATVRemoteSet *_appleRemoteSet;	// 20 = 0x14
	ATVRemoteSet *_temporaryActiveSet;	// 24 = 0x18
	BOOL _appleRemoteInUse;	// 28 = 0x1c
	NSTimer *_discontinuityTrigger;	// 32 = 0x20
	NSTimer *_ledResetTimer;	// 36 = 0x24
	unsigned short _customPage;	// 40 = 0x28
	unsigned short _customUsage;	// 42 = 0x2a
	BOOL _a39LegacyDispatch;	// 44 = 0x2c
	unsigned long _pairingUID;	// 48 = 0x30
	opaque_pthread_mutex_t _mutex;	// 52 = 0x34
}
@property(readonly, assign) BOOL appleRemoteInUse;	// G=0x301aabbd; converted property
@property(readonly, retain) ATVRemoteSet *learningSet;	// G=0x301aa295; converted property
@property(readonly, retain) NSMutableArray *remoteSets;	// G=0x301aaaa1; converted property
@property(assign) int state;	// G=0x301aa261; S=0x301aa225; converted property
@property(readonly, retain) ATVRemoteSet *temporaryActiveSet;	// G=0x301aa6fd; converted property
+ (id)sharedManager;	// 0x301a9cd5
- (id)init;	// 0x301a9d1d
- (void)_addRemoteSet:(id)set;	// 0x301aac6d
- (void)_clearActiveRemoteSets;	// 0x301ab1c1
- (id)_defaultCustomName;	// 0x301ab7b5
- (void)_discontinuityTrigger:(id)trigger;	// 0x301aaea5
- (void)_doSystemActivityNotification;	// 0x301ab005
- (void)_enterLearningState;	// 0x301aad55
- (void)_eventRecognized:(BOOL)recognized;	// 0x301ab825
- (void)_exitLearningState;	// 0x301aadd1
- (id)_findIdenticalActiveRemoteSet:(id)set;	// 0x301aaced
- (BOOL)_isCustomEvent:(id)event;	// 0x301ab6e1
- (void)_ledReset:(id)reset;	// 0x301ab91d
- (BOOL)_loadActiveRemoteSets;	// 0x301ab219
- (id)_loadAppleRemoteSet;	// 0x301ab651
- (id)_loadRemoteSet:(id)set;	// 0x301ab5a9
- (id)_maskToggleBits:(id)bits;	// 0x301ab07d
- (BOOL)_nameInExistsInSets:(id)sets;	// 0x301ab739
- (void)_pairAppleRemote:(unsigned long)remote;	// 0x301aac01
- (BOOL)_processLearningEvent:(id)event;	// 0x301aaf41
- (void)_resetDiscontinuityTrigger;	// 0x301aae25
- (void)_resetLEDTimer;	// 0x301ab89d
- (BOOL)_saveActiveRemoteSets;	// 0x301ab391
- (void)_setState:(int)state;	// 0x301aabf1
- (id)_setTemporaryActiveSet:(id)set;	// 0x301aaca9
- (void)_unpairAppleRemote;	// 0x301aac49
- (void)addRemoteSet:(id)set;	// 0x301aaa29
// converted property getter: - (BOOL)appleRemoteInUse;	// 0x301aabbd
- (void)applyCaptureToButton:(int)button;	// 0x301aa3e1
- (void)applyCaptureToPlayButtonOnly;	// 0x301aa46d
- (void)applyLearnedButtonsToSet:(id)set buttons:(NSRange)buttons;	// 0x301aa5d1
- (id)applyLearningSet;	// 0x301aa521
- (double)captureProgress;	// 0x301aa349
- (id)capturedPatternSet;	// 0x301aa39d
- (void)dealloc;	// 0x301a9e45
- (void)endLearn;	// 0x301aa311
- (id)findIdenticalActiveRemoteSet:(id)set;	// 0x301aaa65
- (int)findPatternInActiveSets:(id)activeSets;	// 0x301aa8b1
- (int)findPatternInActiveSets:(id)activeSets includeLearningSet:(BOOL)set excludeExtendedRemoteSet:(id)set3 excludeRange:(NSRange)range;	// 0x301aa8d5
- (id)identifyCapture:(int)capture;	// 0x301aa779
// converted property getter: - (id)learningSet;	// 0x301aa295
- (void)pairAppleRemote:(unsigned long)remote;	// 0x301aab49
- (BOOL)processEvent:(id)event;	// 0x301a9f0d
// converted property getter: - (id)remoteSets;	// 0x301aaaa1
- (void)removeRemoteSet:(id)set;	// 0x301aa9d1
- (void)resetLearningSet;	// 0x301aaad5
- (void)setCustomPage:(unsigned short)page withUsage:(unsigned short)usage;	// 0x301aa1d5
- (void)setName:(id)name remoteSet:(id)set;	// 0x301aa67d
// converted property setter: - (void)setState:(int)state;	// 0x301aa225
- (id)setTemporaryActiveSet:(id)set;	// 0x301aa731
- (void)startLearn;	// 0x301aa2c9
// converted property getter: - (int)state;	// 0x301aa261
// converted property getter: - (id)temporaryActiveSet;	// 0x301aa6fd
- (void)unpairAppleRemote;	// 0x301aab85
@end

