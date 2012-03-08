/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSDictionary.h> // Unknown library

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface WebElementDictionary : NSDictionary {
@private
	HitTestResult *_result;	// 4 = 0x4
	NSMutableDictionary *_cache;	// 8 = 0x8
	NSMutableSet *_nilValues;	// 12 = 0xc
	BOOL _cacheComplete;	// 16 = 0x10
}
+ (void)initialize;	// 0x302c3049
+ (void)initializeLookupTable;	// 0x302c3171
- (id)initWithHitTestResult:(const HitTestResult *)hitTestResult;	// 0x302c304d
- (id)_absoluteImageURL;	// 0x302e0855
- (id)_absoluteLinkURL;	// 0x302e051d
- (id)_absoluteMediaURL;	// 0x302e0765
- (id)_altDisplayString;	// 0x302e0a89
- (id)_domNode;	// 0x302e0ba5
- (void)_fillCache;	// 0x302e0da9
- (id)_image;	// 0x302e0945
- (id)_imageRect;	// 0x302e0129
- (id)_isContentEditable;	// 0x302e024d
- (id)_isInScrollBar;	// 0x302e0215
- (id)_isLiveLink;	// 0x302e0289
- (id)_isSelected;	// 0x302e0729
- (id)_spellingToolTip;	// 0x302e096d
- (id)_targetWebFrame;	// 0x302e04fd
- (id)_textContent;	// 0x302e02c5
- (id)_title;	// 0x302e060d
- (id)_titleDisplayString;	// 0x302e03e1
- (id)_webFrame;	// 0x302e01dd
- (unsigned)count;	// 0x302e0145
- (void)dealloc;	// 0x302c3641
- (void)finalize;	// 0x302e0ddd
- (id)keyEnumerator;	// 0x302e0191
- (id)objectForKey:(id)key;	// 0x302e0bb9
@end

