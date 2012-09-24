/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPSwipableView.h"

@class NSMutableString, UIScrollView, UIImage, UIImageView, NSString, UITextLabel, MPWebDocumentView, UIProgressIndicator, UIView;

@interface MPTextView : MPSwipableView {
	UIImage *_albumArtwork;	// 112 = 0x70
	NSString *_rawText;	// 116 = 0x74
	NSMutableString *_text;	// 120 = 0x78
	UIImageView *_background;	// 124 = 0x7c
	UIImageView *_faderView;	// 128 = 0x80
	MPWebDocumentView *_webView;	// 132 = 0x84
	UIView *_headerView;	// 136 = 0x88
	UIScrollView *_scrollView;	// 140 = 0x8c
	UITextLabel *_loadingLabel;	// 144 = 0x90
	UIProgressIndicator *_loadingIndicator;	// 148 = 0x94
	BOOL _scrollIndicatorFlashDisabled;	// 152 = 0x98
	BOOL _needsLayout;	// 153 = 0x99
}
@property(retain, nonatomic) UIImage *artwork;	// G=0x35ce8a99; S=0x35ce79d9; @synthesize=_albumArtwork
@property(retain, nonatomic) UIView *headerView;	// G=0x35ce8aa9; S=0x35ce7e01; @synthesize=_headerView
- (id)initWithFrame:(CGRect)frame;	// 0x35ce7309
- (void)_addLoadingUI;	// 0x35ce7edd
- (void)_addTextUI;	// 0x35ce8175
- (void)_createTextUIIfNeeded;	// 0x35ce83a1
- (CGImageRef)_newFaderImage:(BOOL)image;	// 0x35ce87fd
- (CGImageRef)_newFaderImageBackgroundWithSize:(CGSize)size;	// 0x35ce8541
- (void)_removeLoadingUI;	// 0x35ce8499
- (void)_removeTextUI;	// 0x35ce851d
- (void)_updateFaderImage:(BOOL)image;	// 0x35ce8985
- (void)_updateLoadingUIForWillLoad:(BOOL)_updateLoadingUIFor;	// 0x35ce7b2d
// declared property getter: - (id)artwork;	// 0x35ce8a99
- (void)dealloc;	// 0x35ce74b1
- (void)didMoveToSuperview;	// 0x35ce7895
- (BOOL)hasText;	// 0x35ce7959
// declared property getter: - (id)headerView;	// 0x35ce8aa9
- (void)layoutSubviews;	// 0x35ce7609
- (id)newWebView;	// 0x35ce820d
- (void)noteDidSnapshot;	// 0x35ce79a5
- (void)noteWillSnapshot;	// 0x35ce7971
// declared property setter: - (void)setArtwork:(id)artwork;	// 0x35ce79d9
// declared property setter: - (void)setHeaderView:(id)view;	// 0x35ce7e01
- (void)setNeedsLayout;	// 0x35ce75c9
- (void)setScrollIndicatorFlashDisabled:(BOOL)disabled;	// 0x35ce7949
- (void)setText:(id)text willLoad:(BOOL)load;	// 0x35ce7bf1
- (void)webViewDidFinishLoading:(id)webView;	// 0x35ce7e69
- (float)webViewWidth;	// 0x35ce7bb9
@end
