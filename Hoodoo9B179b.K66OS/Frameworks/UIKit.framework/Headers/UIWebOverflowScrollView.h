/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollView.h"

@class DOMNode, UIWebDocumentView, UIWebOverflowContentView, UIWebOverflowScrollListener;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollView : UIScrollView {
@private
	UIWebDocumentView *_webDocumentView;	// 408 = 0x198
	UIWebOverflowScrollListener *_scrollListener;	// 412 = 0x19c
	UIWebOverflowContentView *_overflowContentView;	// 416 = 0x1a0
	DOMNode *_node;	// 420 = 0x1a4
	BOOL _beingRemoved;	// 424 = 0x1a8
}
@property(assign, nonatomic, getter=isBeingRemoved) BOOL beingRemoved;	// G=0x3327ba09; S=0x3327ba19; @synthesize=_beingRemoved
@property(retain, nonatomic) DOMNode *node;	// G=0x3327b9d5; S=0x3327b9e5; @synthesize=_node
@property(retain, nonatomic) UIWebOverflowContentView *overflowContentView;	// G=0x3327b9a1; S=0x3327b9b1; @synthesize=_overflowContentView
@property(retain, nonatomic) UIWebOverflowScrollListener *scrollListener;	// G=0x3327b96d; S=0x3327b97d; @synthesize=_scrollListener
@property(assign, nonatomic) UIWebDocumentView *webDocumentView;	// G=0x3327b94d; S=0x3327b95d; @synthesize=_webDocumentView
- (id)initWithLayer:(id)layer node:(id)node webDocumentView:(id)view;	// 0x3327b4f5
- (void)_replaceLayer:(id)layer;	// 0x3327b811
- (void)dealloc;	// 0x3327b605
- (void)fixUpViewAfterInsertion;	// 0x3327b759
// declared property getter: - (BOOL)isBeingRemoved;	// 0x3327ba09
// declared property getter: - (id)node;	// 0x3327b9d5
// declared property getter: - (id)overflowContentView;	// 0x3327b9a1
- (void)prepareForRemoval;	// 0x3327b7cd
// declared property getter: - (id)scrollListener;	// 0x3327b96d
// declared property setter: - (void)setBeingRemoved:(BOOL)removed;	// 0x3327ba19
- (void)setContentOffset:(CGPoint)offset;	// 0x3327b885
// declared property setter: - (void)setNode:(id)node;	// 0x3327b9e5
// declared property setter: - (void)setOverflowContentView:(id)view;	// 0x3327b9b1
// declared property setter: - (void)setScrollListener:(id)listener;	// 0x3327b97d
// declared property setter: - (void)setWebDocumentView:(id)view;	// 0x3327b95d
- (id)superview;	// 0x3327b689
// declared property getter: - (id)webDocumentView;	// 0x3327b94d
@end
