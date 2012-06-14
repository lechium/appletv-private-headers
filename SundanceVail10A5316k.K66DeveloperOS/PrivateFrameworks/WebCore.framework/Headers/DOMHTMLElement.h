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
@property(copy) NSString *accessKey;	// G=0x353c6cb5; S=0x353c6dd9; 
@property(readonly, assign) DOMHTMLCollection *children;	// G=0x353c782d; 
@property(copy) NSString *className;	// G=0x353c5fc9; S=0x353c60ed; 
@property(copy) NSString *contentEditable;	// G=0x353c7939; S=0x352a5309; 
@property(copy) NSString *dir;	// G=0x353c5cf1; S=0x353c5e15; 
@property(assign) BOOL draggable;	// G=0x353c65b1; S=0x353c66b5; converted property
@property(assign) BOOL hidden;	// G=0x353c6a95; S=0x353c6ba1; converted property
@property(copy) NSString *idName;	// G=0x353c5261; S=0x353c5385; 
@property(copy) NSString *innerHTML;	// G=0x352ad885; S=0x352b1885; 
@property(copy) NSString *innerText;	// G=0x35295b65; S=0x353c6f8d; 
@property(readonly, assign) BOOL isContentEditable;	// G=0x353c7af5; 
@property(copy) NSString *lang;	// G=0x353c5811; S=0x353c5935; 
@property(copy) NSString *outerHTML;	// G=0x353c7145; S=0x353c7301; 
@property(copy) NSString *outerText;	// G=0x353c74b9; S=0x353c7675; 
@property(assign) BOOL spellcheck;	// G=0x353c7bf5; S=0x353c7cf5; converted property
@property(assign) int tabIndex;	// G=0x353c63ad; S=0x353c64b1; 
@property(copy) NSString *title;	// G=0x353c5539; S=0x353c565d; 
@property(readonly, assign) NSString *titleDisplayString;	// G=0x353c7dfd; 
@property(assign) BOOL translate;	// G=0x353c5ae9; S=0x353c5be9; converted property
@property(retain) id webkitdropzone;	// G=0x353c67bd; S=0x353c68e1; converted property
- (void)absolutePosition:(int *)position :(int *)arg2 :(int *)arg3 :(int *)arg4;	// 0x353b4a01
// declared property getter: - (id)accessKey;	// 0x353c6cb5
// declared property getter: - (id)children;	// 0x353c782d
- (id)classList;	// 0x353c62a1
// declared property getter: - (id)className;	// 0x353c5fc9
- (void)click;	// 0x353c86d1
// declared property getter: - (id)contentEditable;	// 0x353c7939
// declared property getter: - (id)dir;	// 0x353c5cf1
// converted property getter: - (BOOL)draggable;	// 0x353c65b1
// converted property getter: - (BOOL)hidden;	// 0x353c6a95
// declared property getter: - (id)idName;	// 0x353c5261
// declared property getter: - (id)innerHTML;	// 0x352ad885
// declared property getter: - (id)innerText;	// 0x35295b65
- (id)insertAdjacentElement:(id)element element:(id)element2;	// 0x353c805d
- (void)insertAdjacentHTML:(id)html html:(id)html2;	// 0x353c8231
- (void)insertAdjacentText:(id)text text:(id)text2;	// 0x353c8481
// declared property getter: - (BOOL)isContentEditable;	// 0x353c7af5
// declared property getter: - (id)lang;	// 0x353c5811
// declared property getter: - (id)outerHTML;	// 0x353c7145
// declared property getter: - (id)outerText;	// 0x353c74b9
- (int)scrollXOffset;	// 0x3528ec59
- (int)scrollYOffset;	// 0x3528ecad
// declared property setter: - (void)setAccessKey:(id)key;	// 0x353c6dd9
// declared property setter: - (void)setClassName:(id)name;	// 0x353c60ed
// declared property setter: - (void)setContentEditable:(id)editable;	// 0x352a5309
// declared property setter: - (void)setDir:(id)dir;	// 0x353c5e15
// converted property setter: - (void)setDraggable:(BOOL)draggable;	// 0x353c66b5
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x353c6ba1
// declared property setter: - (void)setIdName:(id)name;	// 0x353c5385
// declared property setter: - (void)setInnerHTML:(id)html;	// 0x352b1885
// declared property setter: - (void)setInnerText:(id)text;	// 0x353c6f8d
// declared property setter: - (void)setLang:(id)lang;	// 0x353c5935
// declared property setter: - (void)setOuterHTML:(id)html;	// 0x353c7301
// declared property setter: - (void)setOuterText:(id)text;	// 0x353c7675
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2;	// 0x353b49dd
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2 adjustForPurpleCaret:(BOOL)purpleCaret;	// 0x352a0721
// converted property setter: - (void)setSpellcheck:(BOOL)spellcheck;	// 0x353c7cf5
// declared property setter: - (void)setTabIndex:(int)index;	// 0x353c64b1
// declared property setter: - (void)setTitle:(id)title;	// 0x353c565d
// converted property setter: - (void)setTranslate:(BOOL)translate;	// 0x353c5be9
// converted property setter: - (void)setWebkitdropzone:(id)webkitdropzone;	// 0x353c68e1
// converted property getter: - (BOOL)spellcheck;	// 0x353c7bf5
- (int)structuralComplexityContribution;	// 0x35419db5
// declared property getter: - (int)tabIndex;	// 0x353c63ad
// declared property getter: - (id)title;	// 0x353c5539
// declared property getter: - (id)titleDisplayString;	// 0x353c7dfd
// converted property getter: - (BOOL)translate;	// 0x353c5ae9
// converted property getter: - (id)webkitdropzone;	// 0x353c67bd
@end

