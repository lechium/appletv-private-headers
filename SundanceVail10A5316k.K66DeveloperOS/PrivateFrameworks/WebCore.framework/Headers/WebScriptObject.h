/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h> // Unknown library
#import "WebCore-Structs.h"

@class WebScriptObjectPrivate;

@interface WebScriptObject : NSObject {
@private
	WebScriptObjectPrivate *_private;	// 4 = 0x4
}
+ (id)_convertValueToObjcValue:(JSValue)objcValue originRootObject:(RootObject *)object rootObject:(RootObject *)object3;	// 0x3597eb85
+ (void)initialize;	// 0x351557a1
+ (id)scriptObjectForJSObject:(OpaqueJSValue *)jsobject originRootObject:(RootObject *)object rootObject:(RootObject *)object3;	// 0x351ce511
+ (BOOL)throwException:(id)exception;	// 0x3597cfad
- (OpaqueJSValue *)JSObject;	// 0x3597eb4d
- (BOOL)_hasImp;	// 0x351ced29
- (JSObject *)_imp;	// 0x351cf525
- (id)_init;	// 0x351557a5
- (id)_initWithJSObject:(JSObject *)jsobject originRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object rootObject:(PassRefPtr<JSC::Bindings::RootObject>)object3;	// 0x3597ccf1
- (void)_initializeScriptDOMNodeImp;	// 0x353fe825
- (BOOL)_isSafeScript;	// 0x351cf301
- (RootObject *)_originRootObject;	// 0x3597cebd
- (RootObject *)_rootObject;	// 0x351cf371
- (void)_setImp:(JSObject *)imp originRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object rootObject:(PassRefPtr<JSC::Bindings::RootObject>)object3;	// 0x351ced4d
- (void)_setOriginRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object andRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object2;	// 0x3524ee69
- (id)callWebScriptMethod:(id)method withArguments:(id)arguments;	// 0x3597cfbd
- (void)dealloc;	// 0x3516ec6d
- (id)evaluateWebScript:(id)script;	// 0x3597d685
- (void)finalize;	// 0x3597ceed
- (BOOL)hasWebScriptKey:(id)key;	// 0x3597e385
- (id)objectAtIndex:(unsigned)index;	// 0x3597ed25
- (void)removeWebScriptKey:(id)key;	// 0x3597df91
- (void)setException:(id)exception;	// 0x3597eb11
- (void)setValue:(id)value forKey:(id)key;	// 0x351ceed5
- (void)setWebScriptValueAtIndex:(unsigned)index value:(id)value;	// 0x3597e9ed
- (id)stringRepresentation;	// 0x3597e76d
- (id)valueForKey:(id)key;	// 0x3597dacd
- (id)webScriptValueAtIndex:(unsigned)index;	// 0x3597e831
@end

