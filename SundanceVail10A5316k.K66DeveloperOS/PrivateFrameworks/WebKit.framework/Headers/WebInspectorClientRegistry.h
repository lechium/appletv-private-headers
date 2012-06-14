/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@protocol WebInspectorClientRegistryDelegate;

__attribute__((visibility("hidden")))
@interface WebInspectorClientRegistry : NSObject {
@private
	unsigned _nextAvailablePageId;	// 4 = 0x4
	HashMap<unsigned int, WebInspectorClient *, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WebInspectorClient *> > _pageClientMap;	// 8 = 0x8
	id<WebInspectorClientRegistryDelegate> _delegate;	// 28 = 0x1c
}
@property(assign, nonatomic) id<WebInspectorClientRegistryDelegate> delegate;	// G=0x35066175; S=0x3500aa11; @synthesize=_delegate
+ (id)sharedRegistry;	// 0x35003539
- (id)init;	// 0x350035b5
- (id).cxx_construct;	// 0x35003599
- (void).cxx_destruct;	// 0x35066185
- (unsigned)_getNextAvailablePageId;	// 0x35003669
- (WebInspectorClient *)clientForPageId:(unsigned)pageId;	// 0x35066019
// declared property getter: - (id)delegate;	// 0x35066175
- (id)inspectableWebViews;	// 0x350660a5
- (void)registerClient:(WebInspectorClient *)client;	// 0x350035f9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3500aa11
- (void)unregisterClient:(WebInspectorClient *)client;	// 0x35065fd1
@end

