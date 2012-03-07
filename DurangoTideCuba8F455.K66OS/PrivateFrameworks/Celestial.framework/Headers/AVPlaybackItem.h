/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, AVItem;

@interface AVPlaybackItem : NSObject {
	id _delegate;	// 4 = 0x4
	AVItem *_avItem;	// 8 = 0x8
	OpaqueFigPlaybackItem *_fpItem;	// 12 = 0xc
	XXStruct_pwHToB _currentDuration;	// 16 = 0x10
	CGSize _currentSize;	// 40 = 0x28
	BOOL _currentSizeIsValid;	// 48 = 0x30
	BOOL _isPreparingForInspection;	// 49 = 0x31
	BOOL _isInPlayQueue;	// 50 = 0x32
	double _bookmarkTime;	// 52 = 0x34
	NSDictionary *_streamStateNotificationInfo;	// 60 = 0x3c
	NSDictionary *_lyricsNotificationInfo;	// 64 = 0x40
	NSDictionary *_inspectionNotificationInfo;	// 68 = 0x44
	NSDictionary *_playToEndNotificationInfo;	// 72 = 0x48
}
@property(readonly, retain) AVItem *avItem;	// G=0x32389795; converted property
@property(readonly, assign) OpaqueFigPlaybackItem *fpItem;	// G=0x32389eb1; converted property
@property(retain) NSDictionary *inspectionNotificationInfo;	// G=0x3238a2e5; S=0x3238d901; @synthesize=_inspectionNotificationInfo
@property(assign) BOOL isInPlayQueue;	// G=0x3238d505; S=0x3238d4f5; @synthesize=_isInPlayQueue
@property(assign) BOOL isPreparingForInspection;	// G=0x3238c539; S=0x3238c549; @synthesize=_isPreparingForInspection
@property(retain) NSDictionary *lyricsNotificationInfo;	// G=0x3238e11d; S=0x3238d8d5; @synthesize=_lyricsNotificationInfo
@property(retain) NSDictionary *playToEndNotificationInfo;	// G=0x3238b195; S=0x3238edbd; @synthesize=_playToEndNotificationInfo
@property(retain) NSDictionary *streamStateNotificationInfo;	// G=0x3238e135; S=0x3238e14d; @synthesize=_streamStateNotificationInfo
+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)key stringURLToNSURLWithKey:(id)key2 inArrayOfDictionaries:(id)dictionaries;	// 0x3239f579
- (id)initWithDelegate:(id)delegate item:(id)item;	// 0x32388f05
- (void)addFPListeners;	// 0x3238bb51
- (BOOL)addToPlayQueue:(OpaqueFigPlayer *)playQueue afterItem:(OpaqueFigPlaybackItem *)item;	// 0x3238d3cd
- (void)applyAttributesFromAVItemToFPItem:(id)fpitem;	// 0x3238be15
- (void)applyBookmarkTime;	// 0x3238c1f5
- (id)attributeForKey:(id)key;	// 0x3238d9b9
// converted property getter: - (id)avItem;	// 0x32389795
- (void)cacheCurrentDuration;	// 0x3238d215
- (void)cacheCurrentSize;	// 0x3238d1b5
- (id)chapterImageForImageID:(int)imageID;	// 0x3239ed99
- (void)dealloc;	// 0x3238eb2d
- (void)ensureFPItem;	// 0x3238b515
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)startTime toEndTime:(double)endTime maxCount:(int)count;	// 0x32394701
- (id)formatDetailsForTracks;	// 0x3239eea9
// converted property getter: - (OpaqueFigPlaybackItem *)fpItem;	// 0x32389eb1
- (void)fpItemNotificationInfo:(id)info;	// 0x3238ca1d
- (void)fpItemNotificationName:(id)name userInfo:(id)info;	// 0x3239ec75
- (id)fpNotificationNames;	// 0x3238bc1d
// declared property getter: - (id)inspectionNotificationInfo;	// 0x3238a2e5
// declared property getter: - (BOOL)isInPlayQueue;	// 0x3238d505
// declared property getter: - (BOOL)isPreparingForInspection;	// 0x3238c539
- (id)itemAttribute:(id)attribute forKey:(id)key;	// 0x3238d98d
// declared property getter: - (id)lyricsNotificationInfo;	// 0x3238e11d
- (void)makeReadyForInspection;	// 0x3238c3d9
- (id)nextThumbnailTimesStartingAt:(double)at minimumInterval:(double)interval forwards:(BOOL)forwards maxCount:(int)count;	// 0x3239f339
// declared property getter: - (id)playToEndNotificationInfo;	// 0x3238b195
- (id)propertiesNeededForInspection;	// 0x3238c559
- (void)release;	// 0x3239ecf9
- (void)removeFPListeners;	// 0x3238ecf5
- (void)removeFromPlayQueue:(OpaqueFigPlayer *)playQueue;	// 0x3238e8fd
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x3239efd1
- (void)setBookmarkTime:(double)time;	// 0x32389869
// declared property setter: - (void)setInspectionNotificationInfo:(id)info;	// 0x3238d901
// declared property setter: - (void)setIsInPlayQueue:(BOOL)playQueue;	// 0x3238d4f5
// declared property setter: - (void)setIsPreparingForInspection:(BOOL)inspection;	// 0x3238c549
- (void)setItemAttribute:(id)attribute value:(id)value forKey:(id)key error:(id *)error;	// 0x3239ecd1
// declared property setter: - (void)setLyricsNotificationInfo:(id)info;	// 0x3238d8d5
// declared property setter: - (void)setPlayToEndNotificationInfo:(id)endNotificationInfo;	// 0x3238edbd
// declared property setter: - (void)setStreamStateNotificationInfo:(id)info;	// 0x3238e14d
- (void)stealControlOfAVItem;	// 0x32389ec1
// declared property getter: - (id)streamStateNotificationInfo;	// 0x3238e135
@end
