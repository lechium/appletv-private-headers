/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, ATVRCCapture, NSTimer, ATVRemoteSet;

__attribute__((visibility("hidden")))
@interface ATVRCManager : XXUnknownSuperclass {
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
@property(readonly, assign) BOOL appleRemoteInUse;	// G=0x234925; converted property
@property(readonly, retain) ATVRemoteSet *learningSet;	// G=0x234011; converted property
@property(readonly, retain) NSMutableArray *remoteSets;	// G=0x23480d; converted property
@property(assign) int state;	// G=0x233fdd; S=0x233fa1; converted property
@property(readonly, retain) ATVRemoteSet *temporaryActiveSet;	// G=0x234459; converted property
+ (id)sharedManager;	// 0x233a49
- (id)init;	// 0x233a91
- (void)_addRemoteSet:(id)set;	// 0x2349d5
- (void)_clearActiveRemoteSets;	// 0x234f2d
- (id)_defaultCustomName;	// 0x235569
- (void)_discontinuityTrigger:(id)trigger;	// 0x234c11
- (void)_doSystemActivityNotification;	// 0x234d71
- (void)_enterLearningState;	// 0x234ab9
- (void)_eventRecognized:(BOOL)recognized;	// 0x2355dd
- (void)_exitLearningState;	// 0x234b39
- (id)_findIdenticalActiveRemoteSet:(id)set;	// 0x234a51
- (BOOL)_isCustomEvent:(id)event;	// 0x235495
- (void)_ledReset:(id)reset;	// 0x2356c1
- (BOOL)_loadActiveRemoteSets;	// 0x234f81
- (id)_loadAppleRemoteSet;	// 0x2353f1
- (id)_loadRemoteSet:(id)set;	// 0x235349
- (id)_maskToggleBits:(id)bits;	// 0x234de9
- (BOOL)_nameInExistsInSets:(id)sets;	// 0x2354ed
- (void)_pairAppleRemote:(unsigned long)remote;	// 0x234969
- (BOOL)_processLearningEvent:(id)event;	// 0x234cad
- (void)_resetDiscontinuityTrigger;	// 0x234b91
- (void)_resetLEDTimer;	// 0x235649
- (BOOL)_saveActiveRemoteSets;	// 0x235129
- (void)_setState:(int)state;	// 0x234959
- (id)_setTemporaryActiveSet:(id)set;	// 0x234a11
- (void)_unpairAppleRemote;	// 0x2349b1
- (void)addRemoteSet:(id)set;	// 0x234795
// converted property getter: - (BOOL)appleRemoteInUse;	// 0x234925
- (void)applyCaptureToButton:(int)button;	// 0x234151
- (void)applyCaptureToPlayButtonOnly;	// 0x2341dd
- (void)applyLearnedButtonsToSet:(id)set buttons:(NSRange)buttons;	// 0x234331
- (id)applyLearningSet;	// 0x23428d
- (double)captureProgress;	// 0x2340c5
- (id)capturedPatternSet;	// 0x23410d
- (void)dealloc;	// 0x233bbd
- (void)endLearn;	// 0x23408d
- (id)findIdenticalActiveRemoteSet:(id)set;	// 0x2347d1
- (int)findPatternInActiveSets:(id)activeSets;	// 0x23462d
- (int)findPatternInActiveSets:(id)activeSets includeLearningSet:(BOOL)set excludeExtendedRemoteSet:(id)set3 excludeRange:(NSRange)range;	// 0x234651
- (id)identifyCapture:(int)capture;	// 0x2344d5
// converted property getter: - (id)learningSet;	// 0x234011
- (void)pairAppleRemote:(unsigned long)remote;	// 0x2348b1
- (BOOL)processEvent:(id)event;	// 0x233c85
// converted property getter: - (id)remoteSets;	// 0x23480d
- (void)removeRemoteSet:(id)set;	// 0x23473d
- (void)resetLearningSet;	// 0x234841
- (void)setCustomPage:(unsigned short)page withUsage:(unsigned short)usage;	// 0x233f51
- (void)setName:(id)name remoteSet:(id)set;	// 0x2343d9
// converted property setter: - (void)setState:(int)state;	// 0x233fa1
- (id)setTemporaryActiveSet:(id)set;	// 0x23448d
- (void)startLearn;	// 0x234045
// converted property getter: - (int)state;	// 0x233fdd
// converted property getter: - (id)temporaryActiveSet;	// 0x234459
- (void)unpairAppleRemote;	// 0x2348ed
@end

