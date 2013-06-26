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
@property(assign) BOOL autofocus;	// G=0x35ff06d9; S=0x35ff07e5; 
@property(copy) NSString *challenge;	// G=0x35ff08f9; S=0x35ff0a1d; 
@property(assign) BOOL disabled;	// G=0x35ff0bd1; S=0x35ff0cdd; 
@property(readonly, assign) DOMHTMLFormElement *form;	// G=0x35ff0df1; 
@property(copy) NSString *keytype;	// G=0x35ff0ef5; S=0x35ff1019; 
@property(readonly, assign) DOMNodeList *labels;	// G=0x35ff1979; 
@property(copy) NSString *name;	// G=0x35ff11cd; S=0x35ff12e9; 
@property(readonly, assign) NSString *type;	// G=0x35ff1491; 
@property(readonly, assign) NSString *validationMessage;	// G=0x35ff17bd; 
@property(readonly, assign) DOMValidityState *validity;	// G=0x35ff16b1; 
@property(readonly, assign) BOOL willValidate;	// G=0x35ff15ad; 
// declared property getter: - (BOOL)autofocus;	// 0x35ff06d9
// declared property getter: - (id)challenge;	// 0x35ff08f9
- (BOOL)checkValidity;	// 0x35ff1ae1
// declared property getter: - (BOOL)disabled;	// 0x35ff0bd1
// declared property getter: - (id)form;	// 0x35ff0df1
// declared property getter: - (id)keytype;	// 0x35ff0ef5
// declared property getter: - (id)labels;	// 0x35ff1979
// declared property getter: - (id)name;	// 0x35ff11cd
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x35ff07e5
// declared property setter: - (void)setChallenge:(id)challenge;	// 0x35ff0a1d
- (void)setCustomValidity:(id)validity;	// 0x35ff1be5
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x35ff0cdd
// declared property setter: - (void)setKeytype:(id)keytype;	// 0x35ff1019
// declared property setter: - (void)setName:(id)name;	// 0x35ff12e9
// declared property getter: - (id)type;	// 0x35ff1491
// declared property getter: - (id)validationMessage;	// 0x35ff17bd
// declared property getter: - (id)validity;	// 0x35ff16b1
// declared property getter: - (BOOL)willValidate;	// 0x35ff15ad
@end
