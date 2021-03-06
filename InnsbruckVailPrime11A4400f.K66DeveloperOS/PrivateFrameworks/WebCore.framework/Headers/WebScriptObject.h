/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import </libobjc.A.h>
#import "WebCore-Structs.h"

@class WebScriptObjectPrivate;

@interface WebScriptObject : NSObject {
	WebScriptObjectPrivate *_private;	// 4 = 0x4
}
+ (id)_convertValueToObjcValue:(JSValue)objcValue originRootObject:(RootObject *)object rootObject:(RootObject *)object3;	// 0x33807b3d
+ (void)initialize;	// 0x32e7a495
+ (id)scriptObjectForJSObject:(OpaqueJSValue *)jsobject originRootObject:(RootObject *)object rootObject:(RootObject *)object3;	// 0x32f0ffcd
+ (BOOL)throwException:(id)exception;	// 0x338064ed
- (OpaqueJSValue *)JSObject;	// 0x33807a45
- (id)JSValue;	// 0x33807df5
- (OpaqueJSContext *)_globalContextRef;	// 0x33806281
- (BOOL)_hasImp;	// 0x32f108a5
- (JSObject *)_imp;	// 0x32f10ef1
- (id)_init;	// 0x32ee2e8d
- (id)_initWithJSObject:(JSObject *)jsobject originRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object rootObject:(PassRefPtr<JSC::Bindings::RootObject>)object3;	// 0x338060d5
- (void)_initializeScriptDOMNodeImp;	// 0x331b626d
- (BOOL)_isSafeScript;	// 0x32f10e3d
- (RootObject *)_originRootObject;	// 0x33806251
- (RootObject *)_rootObject;	// 0x32f10ea9
- (void)_setImp:(JSObject *)imp originRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object rootObject:(PassRefPtr<JSC::Bindings::RootObject>)object3;	// 0x32f108c9
- (void)_setOriginRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object andRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object2;	// 0x32f58add
- (id)callWebScriptMethod:(id)method withArguments:(id)arguments;	// 0x338064fd
- (void)dealloc;	// 0x32ee9281
- (id)evaluateWebScript:(id)script;	// 0x33806941
- (void)finalize;	// 0x33806435
- (BOOL)hasWebScriptKey:(id)key;	// 0x33807199
- (id)objectAtIndex:(unsigned)index;	// 0x33807e91
- (oneway void)release;	// 0x338062c1
- (void)removeWebScriptKey:(id)key;	// 0x33806f09
- (void)setException:(id)exception;	// 0x33807a09
- (void)setValue:(id)value forKey:(id)key;	// 0x32f10b75
- (void)setWebScriptValueAtIndex:(unsigned)index value:(id)value;	// 0x338077dd
- (id)stringRepresentation;	// 0x338073e9
- (id)valueForKey:(id)key;	// 0x33806be5
- (id)webScriptValueAtIndex:(unsigned)index;	// 0x33807521
@end

