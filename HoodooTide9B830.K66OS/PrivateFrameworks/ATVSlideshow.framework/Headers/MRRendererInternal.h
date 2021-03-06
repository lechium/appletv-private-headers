/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet, NSThread, NSConditionLock, MRLayerEffect, MRContext, NSString, NSRecursiveLock, NSArray, NSMutableDictionary, NSMutableArray, MRImage, NSDictionary;
@protocol MRLiveSlideshowDelegate, MRAsynchronousOperationsDelegate;

@interface MRRendererInternal : NSObject {
	MRContext *mContext;	// 4 = 0x4
	double mMasterStartTime;	// 8 = 0x8
	double mMasterDuration;	// 16 = 0x10
	int mMasterMode;	// 24 = 0x18
	NSThread *mRenderThread;	// 28 = 0x1c
	NSRecursiveLock *mRenderLock;	// 32 = 0x20
	NSConditionLock *mFrameLock;	// 36 = 0x24
	double mTimeOffset;	// 40 = 0x28
	double mUnalteredTimeOffset;	// 48 = 0x30
	double mMasterClock;	// 56 = 0x38
	double mTimeForResync;	// 64 = 0x40
	BOOL mRenderingRequested;	// 72 = 0x48
	BOOL mHasToRebuildAudio;	// 73 = 0x49
	BOOL mDontShowDRMUI;	// 74 = 0x4a
	BOOL mSlaveFrameMode;	// 75 = 0x4b
	CGPoint mContextOffset;	// 76 = 0x4c
	NSMutableDictionary *mArguments;	// 84 = 0x54
	CGImageRef mSnapshotAsCGImage;	// 88 = 0x58
	NSConditionLock *mSnapshotAsCGImageLock;	// 92 = 0x5c
	int mPreviousMode;	// 96 = 0x60
	double mModeChangeTime;	// 100 = 0x64
	NSMutableArray *mSelectedLayers;	// 108 = 0x6c
	NSMutableDictionary *mLayerHittings;	// 112 = 0x70
	NSMutableDictionary *mLayerTrackings;	// 116 = 0x74
	int mEventTracking;	// 120 = 0x78
	NSMutableSet *mLayersCurrentlyTrackedIn;	// 124 = 0x7c
	MRLayerEffect *mLayerCurrentlyTextEditing;	// 128 = 0x80
	NSString *mCurrentlyEditedTextElement;	// 132 = 0x84
	BOOL mNeedsToResize;	// 136 = 0x88
	BOOL mNeedsToTemporaryResize;	// 137 = 0x89
	BOOL mNeedsToResumeOrPauseLayers;	// 138 = 0x8a
	BOOL mNeedsToSynchronizeTimeInLayers;	// 139 = 0x8b
	BOOL mNeedsToSynchronizeTimeInAudioMovies;	// 140 = 0x8c
	CGSize mTemporarySize;	// 144 = 0x90
	double mMorphingStartTime;	// 152 = 0x98
	double mMorphingEndTime;	// 160 = 0xa0
	float mMorphingRotationAngle;	// 168 = 0xa8
	BOOL mMorphingHandlesRotation;	// 172 = 0xac
	MRImage *mSnapshotForMorphing;	// 176 = 0xb0
	NSMutableArray *mActions;	// 180 = 0xb4
	NSMutableDictionary *mAudioPlayerBuckets;	// 184 = 0xb8
	NSArray *mAudioPlayerSortedBuckets;	// 188 = 0xbc
	id<MRLiveSlideshowDelegate> mLiveSlideshowDelegate;	// 192 = 0xc0
	id<MRAsynchronousOperationsDelegate> mAsynchronousOperationsDelegate;	// 196 = 0xc4
	BOOL mScreenBurnTest;	// 200 = 0xc8
	unsigned long long mScreenBurnTestCurrentPass;	// 204 = 0xcc
	MRImage *mScreenBurnTestAccumulationImage1;	// 212 = 0xd4
	MRImage *mScreenBurnTestAccumulationImage2;	// 216 = 0xd8
	NSMutableArray *mNavigatorHistoryBack;	// 220 = 0xdc
	NSMutableArray *mNavigatorHistoryForth;	// 224 = 0xe0
	NSDictionary *mForcedState;	// 228 = 0xe4
	BOOL mHideTextWhileEditing;	// 232 = 0xe8
	double mFrameTime[64];	// 236 = 0xec
	unsigned long mFrameTimeIndex;	// 748 = 0x2ec
	FILE *mRenderingLogFile;	// 752 = 0x2f0
	double mPreviousStartTimeForLog;	// 756 = 0x2f4
	double mLastSaveTimeForLog;	// 764 = 0x2fc
}
@end

