/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "MPAVPlaylistFeeder.h"

@class MPAVController, NSDictionary;

@interface MPQueueFeeder : NSObject <MPAVPlaylistFeeder> {
	MPAVController *_avController;	// 4 = 0x4
	CFSetRef _itemsWithReferencesToClear;	// 8 = 0x8
	unsigned _repeatType;	// 12 = 0xc
	unsigned _shuffleType;	// 16 = 0x10
	CFDictionaryRef _nextStartTimes;	// 20 = 0x14
	id _representedObject;	// 24 = 0x18
	BOOL _fullScreenPlaybackQueue;	// 28 = 0x1c
	BOOL _isSourceChangeInProgress;	// 29 = 0x1d
	BOOL _deallocating;	// 30 = 0x1e
@private
	unsigned _activeShuffleType;	// 32 = 0x20
}
@property(assign, nonatomic) MPAVController *AVController;	// G=0x348290b5; S=0x348290c5; @synthesize=_avController
@property(assign, nonatomic) unsigned activeShuffleType;	// G=0x34829115; S=0x34829125; @synthesize=_activeShuffleType
@property(assign, nonatomic) BOOL fullScreenPlaybackQueue;	// G=0x34829155; S=0x34829165; @synthesize=_fullScreenPlaybackQueue
@property(readonly, assign, nonatomic) unsigned initialPlaybackQueueDepth;	// G=0x34828cb9; 
@property(assign, nonatomic) BOOL isSourceChangeInProgress;	// G=0x34829175; S=0x348289cd; @synthesize=_isSourceChangeInProgress
@property(readonly, assign, nonatomic) Class itemClass;	// G=0x34828b21; 
@property(readonly, assign, nonatomic) unsigned itemCount;	// G=0x34828cbd; 
@property(readonly, assign, nonatomic) unsigned nonRepeatingItemCount;	// G=0x348290a5; 
@property(readonly, assign, nonatomic) NSDictionary *preferredLanguages;	// G=0x34828b41; 
@property(readonly, assign, nonatomic) unsigned realRepeatType;	// G=0x34828c19; 
@property(readonly, assign, nonatomic) unsigned realShuffleType;	// G=0x34828c29; 
@property(assign, nonatomic) unsigned repeatType;	// G=0x348290d5; S=0x348290e5; @synthesize=_repeatType
@property(retain, nonatomic) id<NSObject> representedObject;	// G=0x34829135; S=0x34829145; @synthesize=_representedObject
@property(assign, nonatomic) unsigned shuffleType;	// G=0x348290f5; S=0x34829105; @synthesize=_shuffleType
@property(readonly, assign, nonatomic) BOOL trackChangesCanEndPlayback;	// G=0x34828b45; 
+ (void)restoreAVControllerPlaybackQueue:(id)queue fromUnarchiver:(id)unarchiver feederClass:(Class)aClass;	// 0x34828f05
// declared property getter: - (id)AVController;	// 0x348290b5
- (BOOL)_canPurgeNextStartTimes;	// 0x34828df5
- (void)_fixNextStartTimesByInsertingRange:(NSRange)range;	// 0x348287c9
- (void)_fixNextStartTimesByRemovingRange:(NSRange)range;	// 0x3482886d
// declared property getter: - (unsigned)activeShuffleType;	// 0x34829115
- (void)addReferenceToItem:(id)item;	// 0x34828b49
- (void)archiveAVControllerPlaybackQueue:(id)queue toArchiver:(id)archiver;	// 0x34828f81
- (void)assumeOwnershipOfItems:(id)items;	// 0x34828c39
- (void)beginSourceChange;	// 0x34828a19
- (BOOL)canSkipItem:(id)item;	// 0x34828b1d
- (void)clearReferencesToItem:(id)item;	// 0x34828be5
- (void)commitSourceChangeWithStartQueueIndex:(unsigned)startQueueIndex;	// 0x34828a81
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x34828d89
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x34828d25
- (id)copyRawItemAtIndex:(unsigned)index;	// 0x34828e85
- (void)dealloc;	// 0x34828715
- (id)errorResolverForItem:(id)item;	// 0x34828b0d
// declared property getter: - (BOOL)fullScreenPlaybackQueue;	// 0x34829155
// declared property getter: - (unsigned)initialPlaybackQueueDepth;	// 0x34828cb9
- (void)invalidateQueueCaches;	// 0x34828985
// declared property getter: - (BOOL)isSourceChangeInProgress;	// 0x34829175
// declared property getter: - (Class)itemClass;	// 0x34828b21
// declared property getter: - (unsigned)itemCount;	// 0x34828cbd
- (id)itemForIndex:(unsigned)index;	// 0x34828cc1
- (unsigned)itemTypeForIndex:(unsigned)index;	// 0x34828b3d
- (id)localizedPositionInPlaylistString:(id)playlistString;	// 0x34828fad
// declared property getter: - (unsigned)nonRepeatingItemCount;	// 0x348290a5
- (id)pathAtIndex:(unsigned)index;	// 0x34829085
- (id)playbackInfoAtIndex:(unsigned)index;	// 0x34828df9
// declared property getter: - (id)preferredLanguages;	// 0x34828b41
// declared property getter: - (unsigned)realRepeatType;	// 0x34828c19
// declared property getter: - (unsigned)realShuffleType;	// 0x34828c29
- (BOOL)reloadWithDataSource:(id)dataSource;	// 0x348289b1
- (BOOL)reloadWithDataSource:(id)dataSource keepPlayingCurrentItemIfPossible:(BOOL)possible;	// 0x348289c9
// declared property getter: - (unsigned)repeatType;	// 0x348290d5
// declared property getter: - (id)representedObject;	// 0x34829135
- (void)restoreAVControllerPlaybackQueue:(id)queue fromUnarchiver:(id)unarchiver;	// 0x34828f4d
// declared property setter: - (void)setAVController:(id)controller;	// 0x348290c5
// declared property setter: - (void)setActiveShuffleType:(unsigned)type;	// 0x34829125
// declared property setter: - (void)setFullScreenPlaybackQueue:(BOOL)queue;	// 0x34829165
// declared property setter: - (void)setIsSourceChangeInProgress:(BOOL)progress;	// 0x348289cd
- (void)setNextStartTime:(double)time forIndex:(unsigned)index;	// 0x348288cd
// declared property setter: - (void)setRepeatType:(unsigned)type;	// 0x348290e5
// declared property setter: - (void)setRepresentedObject:(id)object;	// 0x34829145
// declared property setter: - (void)setShuffleType:(unsigned)type;	// 0x34829105
- (void)setSubsequenceFocused:(BOOL)focused currentItemIndex:(unsigned)index;	// 0x348289a9
- (BOOL)shouldBeginPlaybackOfItem:(id)item error:(id *)error;	// 0x34828b11
- (BOOL)shouldReloadForChangeFromNetworkType:(int)networkType toNetworkType:(int)networkType2;	// 0x34828d21
- (void)shuffleItemsWithAnchor:(unsigned *)anchor;	// 0x348289ad
// declared property getter: - (unsigned)shuffleType;	// 0x348290f5
// declared property getter: - (BOOL)trackChangesCanEndPlayback;	// 0x34828b45
@end

