/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLFormElement, DOMValidityState, DOMNodeList, NSString;

__attribute__((visibility("hidden")))
@interface DOMHTMLKeygenElement : DOMHTMLElement {
}
@property(assign) BOOL autofocus;	// G=0x36a52b85; S=0x36a52d15; 
@property(copy) NSString *challenge;	// G=0x36a52ec5; S=0x36a53231; 
@property(assign) BOOL disabled;	// G=0x36a52c4d; S=0x36a52ded; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x36a534b9; 
@property(copy) NSString *keytype;	// G=0x36a52fa5; S=0x36a53375; 
@property(readonly, retain) DOMNodeList *labels;	// G=0x36a538c5; 
@property(copy) NSString *name;	// G=0x36a53085; S=0x36a53575; 
@property(readonly, copy) NSString *type;	// G=0x36a53159; 
@property(readonly, copy) NSString *validationMessage;	// G=0x36a53779; 
@property(readonly, retain) DOMValidityState *validity;	// G=0x36a536ad; 
@property(readonly, assign) BOOL willValidate;	// G=0x36a52ac5; 
// declared property getter: - (BOOL)autofocus;	// 0x36a52b85
// declared property getter: - (id)challenge;	// 0x36a52ec5
- (BOOL)checkValidity;	// 0x36a53a0d
// declared property getter: - (BOOL)disabled;	// 0x36a52c4d
// declared property getter: - (id)form;	// 0x36a534b9
// declared property getter: - (id)keytype;	// 0x36a52fa5
// declared property getter: - (id)labels;	// 0x36a538c5
// declared property getter: - (id)name;	// 0x36a53085
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x36a52d15
// declared property setter: - (void)setChallenge:(id)challenge;	// 0x36a53231
- (void)setCustomValidity:(id)validity;	// 0x36a53acd
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x36a52ded
// declared property setter: - (void)setKeytype:(id)keytype;	// 0x36a53375
// declared property setter: - (void)setName:(id)name;	// 0x36a53575
// declared property getter: - (id)type;	// 0x36a53159
// declared property getter: - (id)validationMessage;	// 0x36a53779
// declared property getter: - (id)validity;	// 0x36a536ad
// declared property getter: - (BOOL)willValidate;	// 0x36a52ac5
@end

