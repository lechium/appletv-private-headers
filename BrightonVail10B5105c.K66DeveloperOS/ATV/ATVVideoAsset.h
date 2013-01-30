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

@class ATVMerchant, NSDate, ATVInterstitialGroup, NSNumber, ATVFeedDocument, ATVFeedVideoAssetElement, NSMutableArray, NSDictionary, ATVVideoAssetUpdater;

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
@property(retain, nonatomic) NSNumber *bookmarkNetTime;	// G=0x2195b5; S=0x2195c5; @synthesize=_bookmarkNetTime
@property(readonly, retain) NSMutableArray *chapterGroups;	// G=0x219279; converted property
@property(retain, nonatomic) NSDate *eventStart;	// G=0x219585; S=0x219595; @synthesize=_eventStart
@property(retain, nonatomic) ATVFeedVideoAssetElement *feedElement;	// G=0x2195f5; S=0x219605; @synthesize=_feedElement
@property(readonly, assign, nonatomic) ATVInterstitialGroup *interstitials;	// G=0x2195a5; @synthesize=_interstitials
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x219565; S=0x219575; @synthesize=_merchant
@property(readonly, assign, nonatomic) NSDictionary *originalPlist;	// G=0x2189f9; 
@property(assign, nonatomic) BOOL startFromStartDate;	// G=0x2195d5; S=0x2195e5; @synthesize=_startFromStartDate
- (id)initWithDictionary:(id)dictionary;	// 0x2184e1
- (id)initWithFeedElement:(id)feedElement;	// 0x218099
- (id)_currentlyPlayingChapter;	// 0x219615
- (void)_fetchEventGroups:(id)groups ignoreErrors:(BOOL)errors completionHandler:(id)handler;	// 0x21968d
- (id)_processLoadedEventGroupDocument:(id)document;	// 0x219ab9
- (void)addOrReplaceChapterGroup:(id)group;	// 0x2190a9
// declared property getter: - (id)bookmarkNetTime;	// 0x2195b5
- (id)chapterGroupAtIndex:(unsigned)index;	// 0x219231
- (unsigned)chapterGroupCount;	// 0x2191f5
// converted property getter: - (id)chapterGroups;	// 0x219279
- (void)dealloc;	// 0x218a09
// declared property getter: - (id)eventStart;	// 0x219585
// declared property getter: - (id)feedElement;	// 0x2195f5
- (BOOL)hasChapterGroupAtIndex:(unsigned)index;	// 0x219215
- (id)imageProxy;	// 0x2192b1
- (id)infoOverlayDescriptionAttributes;	// 0x219525
// declared property getter: - (id)interstitials;	// 0x2195a5
- (BOOL)isScrubbable;	// 0x218af9
- (id)mediaDescription;	// 0x21940d
// declared property getter: - (id)merchant;	// 0x219565
// declared property getter: - (id)originalPlist;	// 0x2189f9
- (id)rating;	// 0x2194a9
- (void)resolveMediaURL:(id)url;	// 0x218b4d
// declared property setter: - (void)setBookmarkNetTime:(id)time;	// 0x2195c5
// declared property setter: - (void)setEventStart:(id)start;	// 0x219595
// declared property setter: - (void)setFeedElement:(id)element;	// 0x219605
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x219575
// declared property setter: - (void)setStartFromStartDate:(BOOL)startDate;	// 0x2195e5
- (id)startDate;	// 0x21903d
// declared property getter: - (BOOL)startFromStartDate;	// 0x2195d5
- (id)title;	// 0x219369
@end
