/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebBackForwardListPrivate;

@interface WebBackForwardList : NSObject {
@private
	WebBackForwardListPrivate *_private;	// 4 = 0x4
}
@property(assign) int capacity;	// G=0x302d08a5; S=0x302d0889; converted property
@property(assign) unsigned pageCacheSize;	// G=0x302d066d; S=0x302d06ad; converted property
+ (void)initialize;	// 0x302a83d5
- (id)init;	// 0x302d110d
- (id)initWithBackForwardList:(PassRefPtr<WebCore::BackForwardListImpl>)backForwardList;	// 0x302a83d9
- (void)_close;	// 0x302d05d1
- (void)addItem:(id)item;	// 0x302d0f35
- (id)backItem;	// 0x302c1fb9
- (int)backListCount;	// 0x302d05ed
- (id)backListWithLimit:(int)limit;	// 0x302d0a11
// converted property getter: - (int)capacity;	// 0x302d08a5
- (BOOL)containsItem:(id)item;	// 0x302d0c0d
- (id)currentItem;	// 0x302a8701
- (void)dealloc;	// 0x302aa4e1
- (id)description;	// 0x302d06e9
- (id)dictionaryRepresentation;	// 0x302c0485
- (void)finalize;	// 0x302d1075
- (id)forwardItem;	// 0x302d0b65
- (int)forwardListCount;	// 0x302d0609
- (id)forwardListWithLimit:(int)limit;	// 0x302d08bd
- (void)goBack;	// 0x302d0bf5
- (void)goForward;	// 0x302d0bdd
- (void)goToItem:(id)item;	// 0x302d0ba9
- (id)itemAtIndex:(int)index;	// 0x302d0625
// converted property getter: - (unsigned)pageCacheSize;	// 0x302d066d
- (void)removeItem:(id)item;	// 0x302d0f0d
// converted property setter: - (void)setCapacity:(int)capacity;	// 0x302d0889
// converted property setter: - (void)setPageCacheSize:(unsigned)size;	// 0x302d06ad
- (void)setToMatchDictionaryRepresentation:(id)matchDictionaryRepresentation;	// 0x302d0c35
@end

