/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRXMLMediaAsset.h"
#import "BRChapterGroupProvider.h"
#import "ATVInterstitialGroupProvider.h"
#import "BRMediaAssetDerivesMediaURL.h"
#import "BRMercantile.h"

@class ATVVideoAssetUpdater, NSDictionary, ATVMerchant, ATVInterstitialGroup, NSDate, NSNumber, ATVFeedDocument, ATVFeedVideoAssetElement, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVVideoAsset : BRXMLMediaAsset <BRMediaAssetDerivesMediaURL, BRChapterGroupProvider, ATVInterstitialGroupProvider, BRMercantile> {
	NSDictionary *_data;	// 12 = 0xc
	ATVMerchant *_merchant;	// 16 = 0x10
	NSDate *_eventStart;	// 20 = 0x14
	NSMutableArray *_chapterGroups;	// 24 = 0x18
	ATVVideoAssetUpdater *_updater;	// 28 = 0x1c
	ATVFeedDocument *_feedDocument;	// 32 = 0x20
	ATVInterstitialGroup *_interstitials;	// 36 = 0x24
	NSNumber *_bookmarkNetTime;	// 40 = 0x28
	BOOL _startFromStartDate;	// 44 = 0x2c
	ATVFeedVideoAssetElement *_feedElement;	// 48 = 0x30
}
@property(retain, nonatomic) NSNumber *bookmarkNetTime;	// G=0x21f0dd; S=0x21f0ed; @synthesize=_bookmarkNetTime
@property(readonly, retain) NSMutableArray *chapterGroups;	// G=0x21eda1; converted property
@property(retain, nonatomic) NSDate *eventStart;	// G=0x21f0ad; S=0x21f0bd; @synthesize=_eventStart
@property(retain, nonatomic) ATVFeedVideoAssetElement *feedElement;	// G=0x21f11d; S=0x21f12d; @synthesize=_feedElement
@property(readonly, assign, nonatomic) ATVInterstitialGroup *interstitials;	// G=0x21f0cd; @synthesize=_interstitials
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x21f08d; S=0x21f09d; @synthesize=_merchant
@property(readonly, assign, nonatomic) NSDictionary *originalPlist;	// G=0x21e521; 
@property(assign, nonatomic) BOOL startFromStartDate;	// G=0x21f0fd; S=0x21f10d; @synthesize=_startFromStartDate
- (id)initWithDictionary:(id)dictionary;	// 0x21e009
- (id)initWithFeedElement:(id)feedElement;	// 0x21dbc1
- (id)_currentlyPlayingChapter;	// 0x21f13d
- (void)_fetchEventGroups:(id)groups ignoreErrors:(BOOL)errors completionHandler:(id)handler;	// 0x21f1b5
- (id)_processLoadedEventGroupDocument:(id)document;	// 0x21f5e1
- (void)addOrReplaceChapterGroup:(id)group;	// 0x21ebd1
// declared property getter: - (id)bookmarkNetTime;	// 0x21f0dd
- (id)chapterGroupAtIndex:(unsigned)index;	// 0x21ed59
- (unsigned)chapterGroupCount;	// 0x21ed1d
// converted property getter: - (id)chapterGroups;	// 0x21eda1
- (void)dealloc;	// 0x21e531
// declared property getter: - (id)eventStart;	// 0x21f0ad
// declared property getter: - (id)feedElement;	// 0x21f11d
- (BOOL)hasChapterGroupAtIndex:(unsigned)index;	// 0x21ed3d
- (id)imageProxy;	// 0x21edd9
- (id)infoOverlayDescriptionAttributes;	// 0x21f04d
// declared property getter: - (id)interstitials;	// 0x21f0cd
- (BOOL)isScrubbable;	// 0x21e621
- (id)mediaDescription;	// 0x21ef35
// declared property getter: - (id)merchant;	// 0x21f08d
// declared property getter: - (id)originalPlist;	// 0x21e521
- (id)rating;	// 0x21efd1
- (void)resolveMediaURL:(id)url;	// 0x21e675
// declared property setter: - (void)setBookmarkNetTime:(id)time;	// 0x21f0ed
// declared property setter: - (void)setEventStart:(id)start;	// 0x21f0bd
// declared property setter: - (void)setFeedElement:(id)element;	// 0x21f12d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x21f09d
// declared property setter: - (void)setStartFromStartDate:(BOOL)startDate;	// 0x21f10d
- (id)startDate;	// 0x21eb65
// declared property getter: - (BOOL)startFromStartDate;	// 0x21f0fd
- (id)title;	// 0x21ee91
@end

