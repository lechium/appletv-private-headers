/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMStyleSheet.h"

@class DOMCSSRuleList, DOMCSSRule;

__attribute__((visibility("hidden")))
@interface DOMCSSStyleSheet : DOMStyleSheet {
}
@property(readonly, assign) DOMCSSRuleList *cssRules;	// G=0x3539e641; 
@property(readonly, assign) DOMCSSRule *ownerRule;	// G=0x3539e535; 
@property(readonly, assign) DOMCSSRuleList *rules;	// G=0x3539e785; 
- (int)addRule:(id)rule style:(id)style index:(unsigned)index;	// 0x3539ed5d
// declared property getter: - (id)cssRules;	// 0x3539e641
- (void)deleteRule:(unsigned)rule;	// 0x3539ec49
- (unsigned)insertRule:(id)rule :(unsigned)arg2;	// 0x3539ea89
- (unsigned)insertRule:(id)rule index:(unsigned)index;	// 0x3539e8c9
// declared property getter: - (id)ownerRule;	// 0x3539e535
- (void)removeRule:(unsigned)rule;	// 0x3539efb5
// declared property getter: - (id)rules;	// 0x3539e785
@end

