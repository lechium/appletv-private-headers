/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIRotatingActionSheet.h"

@class UIWebDocumentView;

@interface UIWebRotatingSheet : _UIRotatingActionSheet {
	BOOL _wasDeferringCallbacks;	// 245 = 0xf5
	UIWebDocumentView *_webBrowserView;	// 248 = 0xf8
}
- (id)initWithUIWebDocumentView:(id)uiwebDocumentView;	// 0x3043b049
- (void)_disableWebView;	// 0x3043b08d
- (void)_enableWebView;	// 0x3043b13d
- (void)dealloc;	// 0x3043b1b5
- (void)doneWithSheet;	// 0x3043b1f5
- (BOOL)presentSheet;	// 0x3043b245
@end

