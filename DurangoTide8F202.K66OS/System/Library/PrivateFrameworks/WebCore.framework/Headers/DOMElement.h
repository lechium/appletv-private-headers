/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMNode.h"

@class DOMCSSStyleDeclaration, NSString;

@interface DOMElement : DOMNode {
}
@property(readonly, assign) unsigned childElementCount;	// G=0x33f7ec65; 
@property(readonly, assign) int clientHeight;	// G=0x33f7ec4d; 
@property(readonly, assign) int clientLeft;	// G=0x33f7ec05; 
@property(readonly, assign) int clientTop;	// G=0x33f7ec1d; 
@property(readonly, assign) int clientWidth;	// G=0x33f7ec35; 
@property(readonly, retain) DOMElement *firstElementChild;	// G=0x33f81555; 
@property(readonly, copy) NSString *innerText;	// G=0x33f7ec7d; 
@property(readonly, retain) DOMElement *lastElementChild;	// G=0x33f81571; 
@property(readonly, retain) DOMElement *nextElementSibling;	// G=0x33f815a9; 
@property(readonly, assign) int offsetHeight;	// G=0x33f7ebed; 
@property(readonly, assign) int offsetLeft;	// G=0x33f7eba5; 
@property(readonly, retain) DOMElement *offsetParent;	// G=0x33f81539; 
@property(readonly, assign) int offsetTop;	// G=0x33f7ebbd; 
@property(readonly, assign) int offsetWidth;	// G=0x33f7ebd5; 
@property(readonly, retain) DOMElement *previousElementSibling;	// G=0x33f8158d; 
@property(readonly, assign) int scrollHeight;	// G=0x33ef3829; 
@property(assign) int scrollLeft;	// G=0x33f7eb0d; S=0x33f7eb29; 
@property(assign) int scrollTop;	// G=0x33f7eb49; S=0x33f7eb65; 
@property(readonly, assign) int scrollWidth;	// G=0x33ef36e1; 
@property(readonly, retain) DOMCSSStyleDeclaration *style;	// G=0x33d70269; 
@property(readonly, copy) NSString *tagName;	// G=0x33e3be69; 
- (GSFontRef)_font;	// 0x33f6eaed
- (id)_getURLAttribute:(id)attribute;	// 0x33ec8f51
- (void)blur;	// 0x33f80fe1
// declared property getter: - (unsigned)childElementCount;	// 0x33f7ec65
// declared property getter: - (int)clientHeight;	// 0x33f7ec4d
// declared property getter: - (int)clientLeft;	// 0x33f7ec05
// declared property getter: - (int)clientTop;	// 0x33f7ec1d
// declared property getter: - (int)clientWidth;	// 0x33f7ec35
- (BOOL)contains:(id)contains;	// 0x33f8101d
// declared property getter: - (id)firstElementChild;	// 0x33f81555
- (void)focus;	// 0x33f7eb85
- (id)getAttribute:(id)attribute;	// 0x33f7edb1
- (id)getAttributeNS:(id)ns :(id)arg2;	// 0x33f7f811
- (id)getAttributeNS:(id)ns localName:(id)name;	// 0x33f7f651
- (id)getAttributeNode:(id)node;	// 0x33f7f0a1
- (id)getAttributeNodeNS:(id)ns :(id)arg2;	// 0x33f80829
- (id)getAttributeNodeNS:(id)ns localName:(id)name;	// 0x33f80611
- (id)getElementsByClassName:(id)name;	// 0x33f8109d
- (id)getElementsByTagName:(id)name;	// 0x33f7f4ad
- (id)getElementsByTagNameNS:(id)ns :(id)arg2;	// 0x33f803e9
- (id)getElementsByTagNameNS:(id)ns localName:(id)name;	// 0x33f801c1
- (BOOL)hasAttribute:(id)attribute;	// 0x33f80b7d
- (BOOL)hasAttributeNS:(id)ns :(id)arg2;	// 0x33f80e3d
- (BOOL)hasAttributeNS:(id)ns localName:(id)name;	// 0x33f80c99
// declared property getter: - (id)innerText;	// 0x33f7ec7d
- (BOOL)isFocused;	// 0x33f6ead1
// declared property getter: - (id)lastElementChild;	// 0x33f81571
// declared property getter: - (id)nextElementSibling;	// 0x33f815a9
// declared property getter: - (int)offsetHeight;	// 0x33f7ebed
// declared property getter: - (int)offsetLeft;	// 0x33f7eba5
// declared property getter: - (id)offsetParent;	// 0x33f81539
// declared property getter: - (int)offsetTop;	// 0x33f7ebbd
// declared property getter: - (int)offsetWidth;	// 0x33f7ebd5
// declared property getter: - (id)previousElementSibling;	// 0x33f8158d
- (id)querySelector:(id)selector;	// 0x33f815c5
- (id)querySelectorAll:(id)all;	// 0x33f81241
- (void)removeAttribute:(id)attribute;	// 0x33ed1425
- (void)removeAttributeNS:(id)ns :(id)arg2;	// 0x33f80005
- (void)removeAttributeNS:(id)ns localName:(id)name;	// 0x33f7fe49
- (id)removeAttributeNode:(id)node;	// 0x33f7f371
- (void)scrollByLines:(int)lines;	// 0x33f81065
- (void)scrollByPages:(int)pages;	// 0x33f81081
// declared property getter: - (int)scrollHeight;	// 0x33ef3829
- (void)scrollIntoView:(BOOL)view;	// 0x33f80ff9
- (void)scrollIntoViewIfNeeded:(BOOL)needed;	// 0x33f81041
// declared property getter: - (int)scrollLeft;	// 0x33f7eb0d
// declared property getter: - (int)scrollTop;	// 0x33f7eb49
// declared property getter: - (int)scrollWidth;	// 0x33ef36e1
- (void)setAttribute:(id)attribute :(id)arg2;	// 0x33f7eee5
- (void)setAttribute:(id)attribute value:(id)value;	// 0x33d6ccbd
- (void)setAttributeNS:(id)ns :(id)arg2 :(id)arg3;	// 0x33f7fc0d
- (void)setAttributeNS:(id)ns qualifiedName:(id)name value:(id)value;	// 0x33f7f9d1
- (id)setAttributeNode:(id)node;	// 0x33f7f235
- (id)setAttributeNodeNS:(id)ns;	// 0x33f80a41
// declared property setter: - (void)setScrollLeft:(int)left;	// 0x33f7eb29
// declared property setter: - (void)setScrollTop:(int)top;	// 0x33f7eb65
- (int)structuralComplexityContribution;	// 0x33faf2fd
// declared property getter: - (id)style;	// 0x33d70269
// declared property getter: - (id)tagName;	// 0x33e3be69
- (BOOL)webkitMatchesSelector:(id)selector;	// 0x33f81401
@end

