/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIWebDocumentView, NSArray;
@protocol WebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebPaginationInfo : NSObject {
	NSObject<WebDocumentView> *_documentView;	// 4 = 0x4
	float _scaleFactor;	// 8 = 0x8
	CGSize _layoutSize;	// 12 = 0xc
	NSArray *_pageRects;	// 20 = 0x14
	UIWebDocumentView *_webDocumentView;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) float lastPageHeight;	// G=0x32ef31b1; 
@property(readonly, assign) CGSize layoutSize;	// G=0x32ef3319; converted property
@property(readonly, assign, nonatomic) unsigned pageCount;	// G=0x32ef3191; 
@property(readonly, retain) NSArray *pageRects;	// G=0x32ef3331; converted property
@property(readonly, assign) float scaleFactor;	// G=0x32ef3309; converted property
@property(retain, nonatomic) UIWebDocumentView *webDocumentView;	// G=0x32ef3351; S=0x32ef3361; @synthesize=_webDocumentView
- (id)initWithDocumentView:(id)documentView scaleFactor:(float)factor layoutSize:(CGSize)size pageRects:(id)rects;	// 0x32ef304d
- (void)dealloc;	// 0x32ef3109
- (id)documentView;	// 0x32ef3341
// declared property getter: - (float)lastPageHeight;	// 0x32ef31b1
// converted property getter: - (CGSize)layoutSize;	// 0x32ef3319
// declared property getter: - (unsigned)pageCount;	// 0x32ef3191
// converted property getter: - (id)pageRects;	// 0x32ef3331
// converted property getter: - (float)scaleFactor;	// 0x32ef3309
// declared property setter: - (void)setWebDocumentView:(id)view;	// 0x32ef3361
- (CGSize)sizeForPageAtIndex:(int)index;	// 0x32ef3249
// declared property getter: - (id)webDocumentView;	// 0x32ef3351
@end
