/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBackgroundTask.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVRedDotCachingTask : BRBackgroundTask {
	NSMutableArray *_fetchKeys;	// 44 = 0x2c
	NSMutableArray *_favorites;	// 48 = 0x30
	BOOL _isCancelled;	// 52 = 0x34
	BOOL _isRunning;	// 53 = 0x35
}
@property(retain) NSMutableArray *favorites;	// G=0x3aa51d; S=0x3aa531; @synthesize=_favorites
@property(retain) NSMutableArray *fetchKeys;	// G=0x3aa4f9; S=0x3aa50d; @synthesize=_fetchKeys
@property(assign) BOOL isCancelled;	// G=0x3aa541; S=0x3aa559; @synthesize=_isCancelled
@property(assign) BOOL isRunning;	// G=0x3aa571; S=0x3aa589; @synthesize=_isRunning
+ (void)startPeriodicUpdateTaskIfNeeded;	// 0x3aa43d
- (id)initWithInterval:(double)interval delay:(double)delay userInfo:(id)info taskType:(int)type;	// 0x3a9e29
- (void).cxx_destruct;	// 0x3aa5a1
- (void)_fetchStoreFavorites;	// 0x3a9f41
- (void)_finish;	// 0x3aa3bd
- (void)_processFavorites;	// 0x3aa0e9
// declared property getter: - (id)favorites;	// 0x3aa51d
// declared property getter: - (id)fetchKeys;	// 0x3aa4f9
// declared property getter: - (BOOL)isCancelled;	// 0x3aa541
// declared property getter: - (BOOL)isRunning;	// 0x3aa571
- (BOOL)perform:(id)perform;	// 0x3a9ead
// declared property setter: - (void)setFavorites:(id)favorites;	// 0x3aa531
// declared property setter: - (void)setFetchKeys:(id)keys;	// 0x3aa50d
// declared property setter: - (void)setIsCancelled:(BOOL)cancelled;	// 0x3aa559
// declared property setter: - (void)setIsRunning:(BOOL)running;	// 0x3aa589
- (void)stop;	// 0x3a9f09
@end

