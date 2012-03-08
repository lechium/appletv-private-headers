/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLButtonElement : DOMHTMLElement {
}
@property(copy) NSString *accessKey;	// G=0x337420c9; S=0x33741a5d; 
@property(assign) BOOL autofocus;	// G=0x337424f9; S=0x33742771; 
@property(assign) BOOL disabled;	// G=0x33742431; S=0x33742699; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x33741261; 
@property(retain) id formAction;	// G=0x337413f5; S=0x3374154d; converted property
@property(retain) id formEnctype;	// G=0x33741e29; S=0x33741691; converted property
@property(retain) id formMethod;	// G=0x33741f09; S=0x337417d5; converted property
@property(assign) BOOL formNoValidate;	// G=0x33742369; S=0x337425c1; converted property
@property(retain) id formTarget;	// G=0x33741fe9; S=0x33741919; converted property
@property(copy) NSString *name;	// G=0x337421a9; S=0x33741ba1; 
@property(readonly, copy) NSString *type;	// G=0x3374131d; 
@property(copy) NSString *value;	// G=0x33742289; S=0x33741ce5; 
@property(readonly, assign) BOOL willValidate;	// G=0x337411a1; 
// declared property getter: - (id)accessKey;	// 0x337420c9
// declared property getter: - (BOOL)autofocus;	// 0x337424f9
- (BOOL)checkValidity;	// 0x33742ba9
- (void)click;	// 0x33742da1
// declared property getter: - (BOOL)disabled;	// 0x33742431
// declared property getter: - (id)form;	// 0x33741261
// converted property getter: - (id)formAction;	// 0x337413f5
// converted property getter: - (id)formEnctype;	// 0x33741e29
// converted property getter: - (id)formMethod;	// 0x33741f09
// converted property getter: - (BOOL)formNoValidate;	// 0x33742369
// converted property getter: - (id)formTarget;	// 0x33741fe9
- (id)labels;	// 0x33742a61
// declared property getter: - (id)name;	// 0x337421a9
// declared property setter: - (void)setAccessKey:(id)key;	// 0x33741a5d
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x33742771
- (void)setCustomValidity:(id)validity;	// 0x33742c69
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x33742699
// converted property setter: - (void)setFormAction:(id)action;	// 0x3374154d
// converted property setter: - (void)setFormEnctype:(id)enctype;	// 0x33741691
// converted property setter: - (void)setFormMethod:(id)method;	// 0x337417d5
// converted property setter: - (void)setFormNoValidate:(BOOL)validate;	// 0x337425c1
// converted property setter: - (void)setFormTarget:(id)target;	// 0x33741919
// declared property setter: - (void)setName:(id)name;	// 0x33741ba1
// declared property setter: - (void)setValue:(id)value;	// 0x33741ce5
- (int)structuralComplexityContribution;	// 0x33780ff1
// declared property getter: - (id)type;	// 0x3374131d
- (id)validationMessage;	// 0x33742915
- (id)validity;	// 0x33742849
// declared property getter: - (id)value;	// 0x33742289
// declared property getter: - (BOOL)willValidate;	// 0x337411a1
@end

