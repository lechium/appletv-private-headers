/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString, WebBookmarkCollection;

@interface WebBookmarkList : NSObject {
	NSMutableArray *_bookmarks;	// 4 = 0x4
	unsigned _bookmarkCount;	// 8 = 0x8
	unsigned _skipOffset;	// 12 = 0xc
	BOOL _customQuery;	// 16 = 0x10
	NSString *_query;	// 20 = 0x14
	unsigned _folderID;	// 24 = 0x18
	WebBookmarkCollection *_collection;	// 28 = 0x1c
}
@property(readonly, assign) unsigned bookmarkCount;	// G=0x35c31641; converted property
@property(readonly, assign, nonatomic) unsigned folderID;	// G=0x35c31759; @synthesize=_folderID
- (id)initWithBookmarksWhere:(id)bookmarksWhere collection:(id)collection bookmarkCount:(unsigned)count skipOffset:(unsigned)offset;	// 0x35c3f699
- (id)initWithFolderID:(unsigned)folderID inCollection:(id)collection bookmarkCount:(unsigned)count skipOffset:(unsigned)offset includeHidden:(BOOL)hidden;	// 0x35c3f5f1
- (void)_moveBookmarkAtIndex:(unsigned)index toIndex:(unsigned)index2;	// 0x35c3f7fd
- (unsigned)_reverseOrderIndex:(unsigned)index;	// 0x35c3f909
- (id)bookmarkArray;	// 0x35c31661
- (id)bookmarkArrayRequestingCount:(unsigned)count;	// 0x35c316d5
- (id)bookmarkAtIndex:(unsigned)index;	// 0x35c31565
// converted property getter: - (unsigned)bookmarkCount;	// 0x35c31641
- (void)dealloc;	// 0x35c3f781
// declared property getter: - (unsigned)folderID;	// 0x35c31759
- (BOOL)stepThroughIndex:(unsigned)index;	// 0x35c31561
@end
