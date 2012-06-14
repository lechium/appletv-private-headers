/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, WebBookmarkCollection, NSString;

@interface WebBookmarkList : NSObject {
	NSMutableArray *_bookmarks;	// 4 = 0x4
	unsigned _bookmarkCount;	// 8 = 0x8
	unsigned _skipOffset;	// 12 = 0xc
	BOOL _customQuery;	// 16 = 0x10
	NSString *_query;	// 20 = 0x14
	unsigned _folderID;	// 24 = 0x18
	WebBookmarkCollection *_collection;	// 28 = 0x1c
}
@property(readonly, assign) unsigned bookmarkCount;	// G=0x350ea12d; converted property
@property(readonly, assign, nonatomic) unsigned folderID;	// G=0x350ea1a9; @synthesize=_folderID
- (id)initWithBookmarksWhere:(id)bookmarksWhere collection:(id)collection bookmarkCount:(unsigned)count skipOffset:(unsigned)offset;	// 0x350f67bd
- (id)initWithFolderID:(unsigned)folderID inCollection:(id)collection bookmarkCount:(unsigned)count skipOffset:(unsigned)offset includeHidden:(BOOL)hidden;	// 0x350f6715
- (void)_moveBookmarkAtIndex:(unsigned)index toIndex:(unsigned)index2;	// 0x350f6921
- (unsigned)_reverseOrderIndex:(unsigned)index;	// 0x350f6a2d
- (id)bookmarkArray;	// 0x350ea14d
- (id)bookmarkAtIndex:(unsigned)index;	// 0x350ea051
// converted property getter: - (unsigned)bookmarkCount;	// 0x350ea12d
- (void)dealloc;	// 0x350f68a5
// declared property getter: - (unsigned)folderID;	// 0x350ea1a9
- (BOOL)stepThroughIndex:(unsigned)index;	// 0x350ea04d
@end

