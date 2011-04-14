/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <NSObject.h> // Unknown library

@class WebBookmarkCollection, WebBookmark;

@interface BAChangeRecord : NSObject {
	WebBookmarkCollection *_collection;	// 4 = 0x4
	WebBookmark *_bookmark;	// 8 = 0x8
	int _changeType;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) WebBookmark *bookmark;	// G=0x325d539d; @synthesize=_bookmark
@property(readonly, assign, nonatomic) int changeType;	// G=0x325d538d; @synthesize=_changeType
@property(readonly, assign, nonatomic) WebBookmarkCollection *collection;	// G=0x325d53ad; @synthesize=_collection
- (id)initWithBookmarkCollection:(id)bookmarkCollection bookmark:(id)bookmark changeType:(int)type;	// 0x325d5479
// declared property getter: - (id)bookmark;	// 0x325d539d
// declared property getter: - (int)changeType;	// 0x325d538d
- (id)changeTypeDescription;	// 0x325d5355
// declared property getter: - (id)collection;	// 0x325d53ad
- (void)dealloc;	// 0x325d541d
- (id)description;	// 0x325d53bd
@end

