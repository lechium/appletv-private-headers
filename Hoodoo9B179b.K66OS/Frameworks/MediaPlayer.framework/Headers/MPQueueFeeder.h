/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "AVPlaylistFeeder.h"

@class NSDictionary, MPAVController;

@interface MPQueueFeeder : NSObject <AVPlaylistFeeder> {
	MPAVController *_avController;	// 4 = 0x4
	CFSetRef _itemsWithReferencesToClear;	// 8 = 0x8
	unsigned _repeatType;	// 12 = 0xc
	unsigned _shuffleType;	// 16 = 0x10
	CFDictionaryRef _nextStartTimes;	// 20 = 0x14
	id _representedObject;	// 24 = 0x18
	BOOL _fullScreenPlaybackQueue;	// 28 = 0x1c
	BOOL _isSourceChangeInProgress;	// 29 = 0x1d
	BOOL _deallocating;	// 30 = 0x1e
}
@property(assign, nonatomic) MPAVController *AVController;	// G=0x30943cd1; S=0x30943ce1; @synthesize=_avController
@property(assign, nonatomic) BOOL fullScreenPlaybackQueue;	// G=0x30943d65; S=0x30943d75; @synthesize=_fullScreenPlaybackQueue
@property(assign, nonatomic) BOOL isSourceChangeInProgress;	// G=0x30943d85; S=0x309435d5; @synthesize=_isSourceChangeInProgress
@property(readonly, assign, nonatomic) Class itemClass;	// G=0x3094373d; 
@property(readonly, assign, nonatomic) NSDictionary *preferredLanguages;	// G=0x3094375d; 
@property(readonly, assign, nonatomic) unsigned realRepeatType;	// G=0x3094382d; 
@property(readonly, assign, nonatomic) unsigned realShuffleType;	// G=0x3094383d; 
@property(assign, nonatomic) unsigned repeatType;	// G=0x30943cf1; S=0x30943d01; @synthesize=_repeatType
@property(retain, nonatomic) id<NSObject> representedObject;	// G=0x30943d31; S=0x30943d41; @synthesize=_representedObject
@property(assign, nonatomic) unsigned shuffleType;	// G=0x30943d11; S=0x30943d21; @synthesize=_shuffleType
@property(readonly, assign, nonatomic) BOOL trackChangesCanEndPlayback;	// G=0x30943761; 
+ (void)restoreAVControllerPlaybackQueue:(id)queue fromUnarchiver:(id)unarchiver feederClass:(Class)aClass;	// 0x30943b31
// declared property getter: - (id)AVController;	// 0x30943cd1
- (BOOL)_canPurgeNextStartTimes;	// 0x30943a19
- (void)_fixNextStartTimesByInsertingRange:(NSRange)range;	// 0x309433ad
- (void)_fixNextStartTimesByRemovingRange:(NSRange)range;	// 0x30943469
- (void)addReferenceToItem:(id)item;	// 0x30943765
- (void)archiveAVControllerPlaybackQueue:(id)queue toArchiver:(id)archiver;	// 0x30943bad
- (void)assumeOwnershipOfItems:(id)items;	// 0x3094384d
- (void)beginSourceChange;	// 0x30943635
- (void)clearReferencesToItem:(id)item;	// 0x309437f1
- (void)commitSourceChangeWithStartQueueIndex:(unsigned)startQueueIndex;	// 0x309436a1
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x309439ad
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x30943945
- (id)copyRawItemAtIndex:(unsigned)index;	// 0x30943ab1
- (void)dealloc;	// 0x309432f5
- (id)errorResolverForItem:(id)item;	// 0x3094372d
// declared property getter: - (BOOL)fullScreenPlaybackQueue;	// 0x30943d65
- (void)invalidateQueueCaches;	// 0x3094358d
// declared property getter: - (BOOL)isSourceChangeInProgress;	// 0x30943d85
// declared property getter: - (Class)itemClass;	// 0x3094373d
- (unsigned)itemCount;	// 0x309438cd
- (id)itemForIndex:(unsigned)index;	// 0x309438dd
- (unsigned)itemTypeForIndex:(unsigned)index;	// 0x30943759
- (id)localizedPositionInPlaylistString:(id)playlistString;	// 0x30943bd9
- (unsigned)numberOfPaths;	// 0x30943ccd
- (id)pathAtIndex:(unsigned)index;	// 0x30943cad
- (id)playbackInfoAtIndex:(unsigned)index;	// 0x30943a1d
// declared property getter: - (id)preferredLanguages;	// 0x3094375d
// declared property getter: - (unsigned)realRepeatType;	// 0x3094382d
// declared property getter: - (unsigned)realShuffleType;	// 0x3094383d
- (BOOL)reloadWithDataSource:(id)dataSource;	// 0x309435b9
- (BOOL)reloadWithDataSource:(id)dataSource keepPlayingCurrentItemIfPossible:(BOOL)possible;	// 0x309435d1
// declared property getter: - (unsigned)repeatType;	// 0x30943cf1
// declared property getter: - (id)representedObject;	// 0x30943d31
- (void)restoreAVControllerPlaybackQueue:(id)queue fromUnarchiver:(id)unarchiver;	// 0x30943b79
// declared property setter: - (void)setAVController:(id)controller;	// 0x30943ce1
// declared property setter: - (void)setFullScreenPlaybackQueue:(BOOL)queue;	// 0x30943d75
// declared property setter: - (void)setIsSourceChangeInProgress:(BOOL)progress;	// 0x309435d5
- (void)setNextStartTime:(double)time forIndex:(unsigned)index;	// 0x309434d1
// declared property setter: - (void)setRepeatType:(unsigned)type;	// 0x30943d01
// declared property setter: - (void)setRepresentedObject:(id)object;	// 0x30943d41
// declared property setter: - (void)setShuffleType:(unsigned)type;	// 0x30943d21
- (BOOL)shouldBeginPlaybackOfItem:(id)item error:(id *)error;	// 0x30943731
- (BOOL)shouldReloadForChangeFromNetworkType:(int)networkType toNetworkType:(int)networkType2;	// 0x30943941
- (void)shuffleItemsWithAnchor:(unsigned *)anchor;	// 0x309435b5
// declared property getter: - (unsigned)shuffleType;	// 0x30943d11
// declared property getter: - (BOOL)trackChangesCanEndPlayback;	// 0x30943761
@end

