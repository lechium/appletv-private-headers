/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, ATVFeedEventGroupElement, ATVFeedDocument, NSDictionary, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface BRChapterGroup : XXUnknownSuperclass {
	ATVFeedDocument *_feedDocument;	// 4 = 0x4
	BOOL _showChapterMarkers;	// 8 = 0x8
	BOOL _showDescriptionOnChapterSkip;	// 9 = 0x9
	NSString *_groupName;	// 12 = 0xc
	NSArray *_chapters;	// 16 = 0x10
	NSString *_refreshURL;	// 20 = 0x14
	unsigned _refreshIntervalInSeconds;	// 24 = 0x18
	NSDate *_startDate;	// 28 = 0x1c
	NSDictionary *_feedDictionary;	// 32 = 0x20
	ATVFeedEventGroupElement *_feedElement;	// 36 = 0x24
}
@property(readonly, assign) NSArray *chapters;	// G=0x44e3a5; @synthesize=_chapters
@property(readonly, assign) NSDictionary *feedDictionary;	// G=0x44e435; @synthesize=_feedDictionary
@property(readonly, assign) ATVFeedEventGroupElement *feedElement;	// G=0x44e449; @synthesize=_feedElement
@property(readonly, assign) NSString *groupName;	// G=0x44e391; @synthesize=_groupName
@property(readonly, assign) unsigned refreshIntervalInSeconds;	// G=0x44e3dd; @synthesize=_refreshIntervalInSeconds
@property(retain) NSString *refreshURL;	// G=0x44e3b9; S=0x44e3cd; @synthesize=_refreshURL
@property(readonly, assign) BOOL showChapterMarkers;	// G=0x44e405; @synthesize=_showChapterMarkers
@property(readonly, assign) BOOL showDescriptionOnChapterSkip;	// G=0x44e41d; @synthesize=_showDescriptionOnChapterSkip
@property(readonly, assign) NSDate *startDate;	// G=0x44e3f1; @synthesize=_startDate
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x44e261
- (id)initWithFeedElement:(id)feedElement;	// 0x44df51
- (id)initWithGroupName:(id)groupName feedDictionary:(id)dictionary;	// 0x44e0b1
- (id)_chaptersFromFeedDictionary:(id)feedDictionary;	// 0x44e45d
- (id)_chaptersFromFeedElement:(id)feedElement;	// 0x44e6cd
- (unsigned)chapterCount;	// 0x44e369
// declared property getter: - (id)chapters;	// 0x44e3a5
- (void)dealloc;	// 0x44e2a1
// declared property getter: - (id)feedDictionary;	// 0x44e435
// declared property getter: - (id)feedElement;	// 0x44e449
// declared property getter: - (id)groupName;	// 0x44e391
// declared property getter: - (unsigned)refreshIntervalInSeconds;	// 0x44e3dd
// declared property getter: - (id)refreshURL;	// 0x44e3b9
// declared property setter: - (void)setRefreshURL:(id)url;	// 0x44e3cd
// declared property getter: - (BOOL)showChapterMarkers;	// 0x44e405
// declared property getter: - (BOOL)showDescriptionOnChapterSkip;	// 0x44e41d
// declared property getter: - (id)startDate;	// 0x44e3f1
@end

