/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMElement.h"

@class NSString, DOMHTMLCollection;

@interface DOMHTMLElement : DOMElement {
}
@property(copy) NSString *accessKey;	// G=0x35fd6ae1; S=0x35fd6c05; 
@property(readonly, assign) DOMHTMLCollection *children;	// G=0x35fd7659; 
@property(copy) NSString *className;	// G=0x35fd5df5; S=0x35fd5f19; 
@property(copy) NSString *contentEditable;	// G=0x35fd7765; S=0x35ebedd9; 
@property(copy) NSString *dir;	// G=0x35fd5b1d; S=0x35fd5c41; 
@property(assign) BOOL draggable;	// G=0x35fd63dd; S=0x35fd64e1; converted property
@property(assign) BOOL hidden;	// G=0x35fd68c1; S=0x35fd69cd; converted property
@property(copy) NSString *idName;	// G=0x35fd51b1; S=0x35fd52d5; 
@property(copy) NSString *innerHTML;	// G=0x35ec641d; S=0x35ed5239; 
@property(copy) NSString *innerText;	// G=0x35eb07c9; S=0x35fd6db9; 
@property(readonly, assign) BOOL isContentEditable;	// G=0x35ee7b0d; 
@property(copy) NSString *lang;	// G=0x35fd563d; S=0x35fd5761; 
@property(copy) NSString *outerHTML;	// G=0x35fd6f71; S=0x35fd712d; 
@property(copy) NSString *outerText;	// G=0x35fd72e5; S=0x35fd74a1; 
@property(assign) BOOL spellcheck;	// G=0x35fd7921; S=0x35fd7a21; converted property
@property(assign) int tabIndex;	// G=0x35fd61d9; S=0x35fd62dd; 
@property(copy) NSString *title;	// G=0x35eed0b9; S=0x35fd5489; 
@property(readonly, assign) NSString *titleDisplayString;	// G=0x35fd7b29; 
@property(assign) BOOL translate;	// G=0x35fd5915; S=0x35fd5a15; converted property
@property(retain) id webkitdropzone;	// G=0x35fd65e9; S=0x35fd670d; converted property
- (void)absolutePosition:(int *)position :(int *)arg2 :(int *)arg3 :(int *)arg4;	// 0x35fc4cd5
// declared property getter: - (id)accessKey;	// 0x35fd6ae1
// declared property getter: - (id)children;	// 0x35fd7659
- (id)classList;	// 0x35fd60cd
// declared property getter: - (id)className;	// 0x35fd5df5
- (void)click;	// 0x35fd83fd
// declared property getter: - (id)contentEditable;	// 0x35fd7765
// declared property getter: - (id)dir;	// 0x35fd5b1d
// converted property getter: - (BOOL)draggable;	// 0x35fd63dd
// converted property getter: - (BOOL)hidden;	// 0x35fd68c1
// declared property getter: - (id)idName;	// 0x35fd51b1
// declared property getter: - (id)innerHTML;	// 0x35ec641d
// declared property getter: - (id)innerText;	// 0x35eb07c9
- (id)insertAdjacentElement:(id)element element:(id)element2;	// 0x35fd7d89
- (void)insertAdjacentHTML:(id)html html:(id)html2;	// 0x35fd7f5d
- (void)insertAdjacentText:(id)text text:(id)text2;	// 0x35fd81ad
// declared property getter: - (BOOL)isContentEditable;	// 0x35ee7b0d
// declared property getter: - (id)lang;	// 0x35fd563d
// declared property getter: - (id)outerHTML;	// 0x35fd6f71
// declared property getter: - (id)outerText;	// 0x35fd72e5
- (int)scrollXOffset;	// 0x35eb3c89
- (int)scrollYOffset;	// 0x35eb3cc5
// declared property setter: - (void)setAccessKey:(id)key;	// 0x35fd6c05
// declared property setter: - (void)setClassName:(id)name;	// 0x35fd5f19
// declared property setter: - (void)setContentEditable:(id)editable;	// 0x35ebedd9
// declared property setter: - (void)setDir:(id)dir;	// 0x35fd5c41
// converted property setter: - (void)setDraggable:(BOOL)draggable;	// 0x35fd64e1
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x35fd69cd
// declared property setter: - (void)setIdName:(id)name;	// 0x35fd52d5
// declared property setter: - (void)setInnerHTML:(id)html;	// 0x35ed5239
// declared property setter: - (void)setInnerText:(id)text;	// 0x35fd6db9
// declared property setter: - (void)setLang:(id)lang;	// 0x35fd5761
// declared property setter: - (void)setOuterHTML:(id)html;	// 0x35fd712d
// declared property setter: - (void)setOuterText:(id)text;	// 0x35fd74a1
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2;	// 0x35fc4cb1
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2 adjustForPurpleCaret:(BOOL)purpleCaret;	// 0x35e89251
// converted property setter: - (void)setSpellcheck:(BOOL)spellcheck;	// 0x35fd7a21
// declared property setter: - (void)setTabIndex:(int)index;	// 0x35fd62dd
// declared property setter: - (void)setTitle:(id)title;	// 0x35fd5489
// converted property setter: - (void)setTranslate:(BOOL)translate;	// 0x35fd5a15
// converted property setter: - (void)setWebkitdropzone:(id)webkitdropzone;	// 0x35fd670d
// converted property getter: - (BOOL)spellcheck;	// 0x35fd7921
- (int)structuralComplexityContribution;	// 0x36027b89
// declared property getter: - (int)tabIndex;	// 0x35fd61d9
// declared property getter: - (id)title;	// 0x35eed0b9
// declared property getter: - (id)titleDisplayString;	// 0x35fd7b29
// converted property getter: - (BOOL)translate;	// 0x35fd5915
// converted property getter: - (id)webkitdropzone;	// 0x35fd65e9
@end
