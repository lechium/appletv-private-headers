/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRBackgroundTask.h> // Unknown library

@class NSArray, NSMutableDictionary, NSMutableArray, NSTimer;

@interface ATVScreenSaverPrefetchTask : BRBackgroundTask {
@private
	int _index;	// 44 = 0x2c
	NSArray *_assets;	// 48 = 0x30
	NSMutableArray *_loadingIDs;	// 52 = 0x34
	NSMutableDictionary *_faces;	// 56 = 0x38
	NSTimer *_timer;	// 60 = 0x3c
	BOOL _waitingForScreenSaverData;	// 64 = 0x40
	int _loadAttemptCount;	// 68 = 0x44
}
- (void)_imageLoadFailed:(id)failed;	// 0x336ef6ed
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x336ef759
- (void)_prefetch;	// 0x336ef87d
- (void)_reset;	// 0x336efd55
- (void)_screenSaverDataReady:(id)ready;	// 0x336efc25
- (void)_startPrefetchForItems:(id)items;	// 0x336efab9
- (void)_updateFacesCacheWithFaces:(id)faces;	// 0x336ef6b9
- (void)dealloc;	// 0x336ef7e9
- (BOOL)isActive;	// 0x336ef7c5
- (BOOL)perform:(id)perform;	// 0x336efea5
- (void)stop;	// 0x336efe55
@end

