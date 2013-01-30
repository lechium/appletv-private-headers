/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library

@class WebScriptObjectPrivate;

@interface WebScriptObject : NSObject {
	WebScriptObjectPrivate *_private;	// 4 = 0x4
}
+ (id)_convertValueToObjcValue:(JSValue)objcValue originRootObject:(RootObject *)object rootObject:(RootObject *)object3;	// 0x364a72e1
+ (void)initialize;	// 0x35c59655
+ (id)scriptObjectForJSObject:(OpaqueJSValue *)jsobject originRootObject:(RootObject *)object rootObject:(RootObject *)object3;	// 0x35d287b9
+ (BOOL)throwException:(id)exception;	// 0x364a52f5
- (OpaqueJSValue *)JSObject;	// 0x364a71d5
- (BOOL)_hasImp;	// 0x35d28fd1
- (JSObject *)_imp;	// 0x35d29a75
- (id)_init;	// 0x35ce1645
- (id)_initWithJSObject:(JSObject *)jsobject originRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object rootObject:(PassRefPtr<JSC::Bindings::RootObject>)object3;	// 0x364a4e81
- (void)_initializeScriptDOMNodeImp;	// 0x3600dc35
- (BOOL)_isSafeScript;	// 0x35d29851
- (RootObject *)_originRootObject;	// 0x364a504d
- (RootObject *)_rootObject;	// 0x35d298c1
- (void)_setImp:(JSObject *)imp originRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object rootObject:(PassRefPtr<JSC::Bindings::RootObject>)object3;	// 0x35d28ff5
- (void)_setOriginRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object andRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object2;	// 0x35d9b8c1
- (id)callWebScriptMethod:(id)method withArguments:(id)arguments;	// 0x364a5305
- (void)dealloc;	// 0x35cee651
- (id)evaluateWebScript:(id)script;	// 0x364a59ed
- (void)finalize;	// 0x364a5235
- (BOOL)hasWebScriptKey:(id)key;	// 0x364a6709
- (id)objectAtIndex:(unsigned)index;	// 0x364a7575
- (oneway void)release;	// 0x364a507d
- (void)removeWebScriptKey:(id)key;	// 0x364a62f5
- (void)setException:(id)exception;	// 0x364a7199
- (void)setValue:(id)value forKey:(id)key;	// 0x35d29405
- (void)setWebScriptValueAtIndex:(unsigned)index value:(id)value;	// 0x364a6f71
- (id)stringRepresentation;	// 0x364a6b11
- (id)valueForKey:(id)key;	// 0x364a5ded
- (id)webScriptValueAtIndex:(unsigned)index;	// 0x364a6cb9
@end
