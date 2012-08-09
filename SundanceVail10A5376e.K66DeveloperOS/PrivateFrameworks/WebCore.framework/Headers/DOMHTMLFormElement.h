/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMHTMLCollection;

@interface DOMHTMLFormElement : DOMHTMLElement {
}
@property(copy) NSString *acceptCharset;	// G=0x31af011d; S=0x31af0241; 
@property(copy) NSString *action;	// G=0x31a02c0d; S=0x31af03f5; 
@property(retain) id autocapitalize;	// G=0x31af1e79; S=0x31af1f91; converted property
@property(retain) id autocomplete;	// G=0x31af05a9; S=0x31af06cd; converted property
@property(assign) BOOL autocorrect;	// G=0x31af1c71; S=0x31af1d71; converted property
@property(readonly, assign) DOMHTMLCollection *elements;	// G=0x31af1a65; 
@property(copy) NSString *encoding;	// G=0x31af0bd9; S=0x31af0d89; 
@property(copy) NSString *enctype;	// G=0x31af0881; S=0x31af0a31; 
@property(readonly, assign) int length;	// G=0x31af1b71; 
@property(copy) NSString *method;	// G=0x31af0f31; S=0x31af10ed; 
@property(copy) NSString *name;	// G=0x31af1295; S=0x31af13b9; 
@property(assign) BOOL noValidate;	// G=0x31af156d; S=0x31af1679; converted property
@property(copy) NSString *target;	// G=0x31af178d; S=0x31af18b1; 
// declared property getter: - (id)acceptCharset;	// 0x31af011d
// declared property getter: - (id)action;	// 0x31a02c0d
// converted property getter: - (id)autocapitalize;	// 0x31af1e79
// converted property getter: - (id)autocomplete;	// 0x31af05a9
// converted property getter: - (BOOL)autocorrect;	// 0x31af1c71
- (BOOL)checkValidity;	// 0x31af2331
// declared property getter: - (id)elements;	// 0x31af1a65
// declared property getter: - (id)encoding;	// 0x31af0bd9
// declared property getter: - (id)enctype;	// 0x31af0881
// declared property getter: - (int)length;	// 0x31af1b71
// declared property getter: - (id)method;	// 0x31af0f31
// declared property getter: - (id)name;	// 0x31af1295
// converted property getter: - (BOOL)noValidate;	// 0x31af156d
- (void)reset;	// 0x31af2235
// declared property setter: - (void)setAcceptCharset:(id)charset;	// 0x31af0241
// declared property setter: - (void)setAction:(id)action;	// 0x31af03f5
// converted property setter: - (void)setAutocapitalize:(id)autocapitalize;	// 0x31af1f91
// converted property setter: - (void)setAutocomplete:(id)autocomplete;	// 0x31af06cd
// converted property setter: - (void)setAutocorrect:(BOOL)autocorrect;	// 0x31af1d71
// declared property setter: - (void)setEncoding:(id)encoding;	// 0x31af0d89
// declared property setter: - (void)setEnctype:(id)enctype;	// 0x31af0a31
// declared property setter: - (void)setMethod:(id)method;	// 0x31af10ed
// declared property setter: - (void)setName:(id)name;	// 0x31af13b9
// converted property setter: - (void)setNoValidate:(BOOL)validate;	// 0x31af1679
// declared property setter: - (void)setTarget:(id)target;	// 0x31af18b1
- (int)structuralComplexityContribution;	// 0x31b3d20d
- (void)submit;	// 0x31af2139
// declared property getter: - (id)target;	// 0x31af178d
@end
