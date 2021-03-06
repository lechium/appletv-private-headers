/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class ATVFeedDocument, NSDate, NSArray, NSDictionary, ATVFeedEventGroupElement, NSString;

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
@property(readonly, assign) NSArray *chapters;	// G=0x35ea3fd1; @synthesize=_chapters
@property(readonly, assign) NSDictionary *feedDictionary;	// G=0x35ea4059; @synthesize=_feedDictionary
@property(readonly, assign) ATVFeedEventGroupElement *feedElement;	// G=0x35ea4069; @synthesize=_feedElement
@property(readonly, assign) NSString *groupName;	// G=0x35ea3fc1; @synthesize=_groupName
@property(readonly, assign) unsigned refreshIntervalInSeconds;	// G=0x35ea4019; @synthesize=_refreshIntervalInSeconds
@property(retain) NSString *refreshURL;	// G=0x35ea3fe1; S=0x35ea3ff5; @synthesize=_refreshURL
@property(readonly, assign) BOOL showChapterMarkers;	// G=0x35ea4039; @synthesize=_showChapterMarkers
@property(readonly, assign) BOOL showDescriptionOnChapterSkip;	// G=0x35ea4049; @synthesize=_showDescriptionOnChapterSkip
@property(readonly, assign) NSDate *startDate;	// G=0x35ea4029; @synthesize=_startDate
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x35ea3e95
- (id)initWithFeedElement:(id)feedElement;	// 0x35ea3b8d
- (id)initWithGroupName:(id)groupName feedDictionary:(id)dictionary;	// 0x35ea3ce9
- (id)_chaptersFromFeedDictionary:(id)feedDictionary;	// 0x35ea4079
- (id)_chaptersFromFeedElement:(id)feedElement;	// 0x35ea4305
- (unsigned)chapterCount;	// 0x35ea3f99
// declared property getter: - (id)chapters;	// 0x35ea3fd1
- (void)dealloc;	// 0x35ea3ed5
// declared property getter: - (id)feedDictionary;	// 0x35ea4059
// declared property getter: - (id)feedElement;	// 0x35ea4069
// declared property getter: - (id)groupName;	// 0x35ea3fc1
// declared property getter: - (unsigned)refreshIntervalInSeconds;	// 0x35ea4019
// declared property getter: - (id)refreshURL;	// 0x35ea3fe1
// declared property setter: - (void)setRefreshURL:(id)url;	// 0x35ea3ff5
// declared property getter: - (BOOL)showChapterMarkers;	// 0x35ea4039
// declared property getter: - (BOOL)showDescriptionOnChapterSkip;	// 0x35ea4049
// declared property getter: - (id)startDate;	// 0x35ea4029
@end

