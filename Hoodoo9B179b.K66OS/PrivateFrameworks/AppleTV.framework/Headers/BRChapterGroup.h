/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class ATVFeedDocument, NSString, ATVFeedEventGroupElement, NSDate, NSArray, NSDictionary;

@interface BRChapterGroup : NSObject {
@private
	ATVFeedDocument *_feedDocument;	// 4 = 0x4
	NSString *_groupName;	// 8 = 0x8
	NSArray *_chapters;	// 12 = 0xc
	NSString *_refreshURL;	// 16 = 0x10
	unsigned _refreshIntervalInSeconds;	// 20 = 0x14
	NSDate *_startDate;	// 24 = 0x18
	BOOL _showChapterMarkers;	// 28 = 0x1c
	BOOL _showDescriptionOnChapterSkip;	// 29 = 0x1d
	NSDictionary *_feedDictionary;	// 32 = 0x20
	ATVFeedEventGroupElement *_feedElement;	// 36 = 0x24
}
@property(readonly, assign) NSArray *chapters;	// G=0x303439d9; @synthesize=_chapters
@property(readonly, assign) NSDictionary *feedDictionary;	// G=0x30343a61; @synthesize=_feedDictionary
@property(readonly, assign) ATVFeedEventGroupElement *feedElement;	// G=0x30343a71; @synthesize=_feedElement
@property(readonly, assign) NSString *groupName;	// G=0x303439c9; @synthesize=_groupName
@property(readonly, assign) unsigned refreshIntervalInSeconds;	// G=0x30343a21; @synthesize=_refreshIntervalInSeconds
@property(retain) NSString *refreshURL;	// G=0x303439e9; S=0x303439fd; @synthesize=_refreshURL
@property(readonly, assign) BOOL showChapterMarkers;	// G=0x30343a41; @synthesize=_showChapterMarkers
@property(readonly, assign) BOOL showDescriptionOnChapterSkip;	// G=0x30343a51; @synthesize=_showDescriptionOnChapterSkip
@property(readonly, assign) NSDate *startDate;	// G=0x30343a31; @synthesize=_startDate
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x3034389d
- (id)initWithFeedElement:(id)feedElement;	// 0x30343595
- (id)initWithGroupName:(id)groupName feedDictionary:(id)dictionary;	// 0x303436f1
- (id)_chaptersFromFeedDictionary:(id)feedDictionary;	// 0x30343a81
- (id)_chaptersFromFeedElement:(id)feedElement;	// 0x30343d0d
- (unsigned)chapterCount;	// 0x303439a1
// declared property getter: - (id)chapters;	// 0x303439d9
- (void)dealloc;	// 0x303438dd
// declared property getter: - (id)feedDictionary;	// 0x30343a61
// declared property getter: - (id)feedElement;	// 0x30343a71
// declared property getter: - (id)groupName;	// 0x303439c9
// declared property getter: - (unsigned)refreshIntervalInSeconds;	// 0x30343a21
// declared property getter: - (id)refreshURL;	// 0x303439e9
// declared property setter: - (void)setRefreshURL:(id)url;	// 0x303439fd
// declared property getter: - (BOOL)showChapterMarkers;	// 0x30343a41
// declared property getter: - (BOOL)showDescriptionOnChapterSkip;	// 0x30343a51
// declared property getter: - (id)startDate;	// 0x30343a31
@end

