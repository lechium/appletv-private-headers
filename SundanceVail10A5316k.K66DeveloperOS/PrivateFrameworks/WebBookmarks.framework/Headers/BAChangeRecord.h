/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <NSObject.h> // Unknown library

@class WebBookmarkCollection, WebBookmark;

__attribute__((visibility("hidden")))
@interface BAChangeRecord : NSObject {
@private
	WebBookmarkCollection *_collection;	// 4 = 0x4
	WebBookmark *_bookmark;	// 8 = 0x8
	int _changeType;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) WebBookmark *bookmark;	// G=0x350f92d9; @synthesize=_bookmark
@property(readonly, assign, nonatomic) int changeType;	// G=0x350f92e9; @synthesize=_changeType
@property(readonly, assign, nonatomic) WebBookmarkCollection *collection;	// G=0x350f92c9; @synthesize=_collection
- (id)initWithBookmarkCollection:(id)bookmarkCollection bookmark:(id)bookmark changeType:(int)type;	// 0x350f913d
// declared property getter: - (id)bookmark;	// 0x350f92d9
// declared property getter: - (int)changeType;	// 0x350f92e9
- (id)changeTypeDescription;	// 0x350f922d
// declared property getter: - (id)collection;	// 0x350f92c9
- (void)dealloc;	// 0x350f91c9
- (id)description;	// 0x350f9271
@end

