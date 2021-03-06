/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLCollection, NSString;

@interface DOMHTMLFormElement : DOMHTMLElement {
}
@property(copy) NSString *acceptCharset;	// G=0x33f8d195; S=0x33f8d809; 
@property(copy) NSString *action;	// G=0x33f8d921; S=0x33f8da55; 
@property(assign) BOOL autocapitalize;	// G=0x33f8e141; S=0x33f8e15d; converted property
@property(assign) BOOL autocorrect;	// G=0x33f8e101; S=0x33f8e11d; converted property
@property(readonly, retain) DOMHTMLCollection *elements;	// G=0x33f8cf21; 
@property(copy) NSString *encoding;	// G=0x33f8d2e1; S=0x33f8db6d; 
@property(copy) NSString *enctype;	// G=0x33f8d42d; S=0x33f8dc85; 
@property(readonly, assign) int length;	// G=0x33f8d049; 
@property(copy) NSString *method;	// G=0x33f8dd9d; S=0x33f8ded1; 
@property(copy) NSString *name;	// G=0x33f8d061; S=0x33f8d6b1; 
@property(assign) BOOL noValidate;	// G=0x33f8d7c9; S=0x33f8d7e5; converted property
@property(copy) NSString *target;	// G=0x33f8d579; S=0x33f8dfe9; 
// declared property getter: - (id)acceptCharset;	// 0x33f8d195
// declared property getter: - (id)action;	// 0x33f8d921
// converted property getter: - (BOOL)autocapitalize;	// 0x33f8e141
// converted property getter: - (BOOL)autocorrect;	// 0x33f8e101
- (BOOL)checkValidity;	// 0x33f8e1b5
// declared property getter: - (id)elements;	// 0x33f8cf21
// declared property getter: - (id)encoding;	// 0x33f8d2e1
// declared property getter: - (id)enctype;	// 0x33f8d42d
// declared property getter: - (int)length;	// 0x33f8d049
// declared property getter: - (id)method;	// 0x33f8dd9d
// declared property getter: - (id)name;	// 0x33f8d061
// converted property getter: - (BOOL)noValidate;	// 0x33f8d7c9
- (void)reset;	// 0x33f8e19d
// declared property setter: - (void)setAcceptCharset:(id)charset;	// 0x33f8d809
// declared property setter: - (void)setAction:(id)action;	// 0x33f8da55
// converted property setter: - (void)setAutocapitalize:(BOOL)autocapitalize;	// 0x33f8e15d
// converted property setter: - (void)setAutocorrect:(BOOL)autocorrect;	// 0x33f8e11d
// declared property setter: - (void)setEncoding:(id)encoding;	// 0x33f8db6d
// declared property setter: - (void)setEnctype:(id)enctype;	// 0x33f8dc85
// declared property setter: - (void)setMethod:(id)method;	// 0x33f8ded1
// declared property setter: - (void)setName:(id)name;	// 0x33f8d6b1
// converted property setter: - (void)setNoValidate:(BOOL)validate;	// 0x33f8d7e5
// declared property setter: - (void)setTarget:(id)target;	// 0x33f8dfe9
- (int)structuralComplexityContribution;	// 0x33faf305
- (void)submit;	// 0x33f8e181
// declared property getter: - (id)target;	// 0x33f8d579
@end

