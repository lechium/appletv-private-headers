/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMNodeList, DOMHTMLFormElement, DOMValidityState;

@interface DOMHTMLKeygenElement : DOMHTMLElement {
}
@property(assign) BOOL autofocus;	// G=0x36ab4189; S=0x36ab4295; 
@property(copy) NSString *challenge;	// G=0x36ab43a9; S=0x36ab44cd; 
@property(assign) BOOL disabled;	// G=0x36ab4681; S=0x36ab478d; 
@property(readonly, assign) DOMHTMLFormElement *form;	// G=0x36ab48a1; 
@property(copy) NSString *keytype;	// G=0x36ab49a5; S=0x36ab4ac9; 
@property(readonly, assign) DOMNodeList *labels;	// G=0x36ab5429; 
@property(copy) NSString *name;	// G=0x36ab4c7d; S=0x36ab4d99; 
@property(readonly, assign) NSString *type;	// G=0x36ab4f41; 
@property(readonly, assign) NSString *validationMessage;	// G=0x36ab526d; 
@property(readonly, assign) DOMValidityState *validity;	// G=0x36ab5161; 
@property(readonly, assign) BOOL willValidate;	// G=0x36ab505d; 
// declared property getter: - (BOOL)autofocus;	// 0x36ab4189
// declared property getter: - (id)challenge;	// 0x36ab43a9
- (BOOL)checkValidity;	// 0x36ab5591
// declared property getter: - (BOOL)disabled;	// 0x36ab4681
// declared property getter: - (id)form;	// 0x36ab48a1
// declared property getter: - (id)keytype;	// 0x36ab49a5
// declared property getter: - (id)labels;	// 0x36ab5429
// declared property getter: - (id)name;	// 0x36ab4c7d
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x36ab4295
// declared property setter: - (void)setChallenge:(id)challenge;	// 0x36ab44cd
- (void)setCustomValidity:(id)validity;	// 0x36ab5695
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x36ab478d
// declared property setter: - (void)setKeytype:(id)keytype;	// 0x36ab4ac9
// declared property setter: - (void)setName:(id)name;	// 0x36ab4d99
// declared property getter: - (id)type;	// 0x36ab4f41
// declared property getter: - (id)validationMessage;	// 0x36ab526d
// declared property getter: - (id)validity;	// 0x36ab5161
// declared property getter: - (BOOL)willValidate;	// 0x36ab505d
@end

