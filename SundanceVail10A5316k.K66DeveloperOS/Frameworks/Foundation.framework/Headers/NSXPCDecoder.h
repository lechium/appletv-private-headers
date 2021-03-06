/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSXPCCoder.h"
#import "Foundation-Structs.h"

@class NSMutableArray, NSXPCInterface, NSString, NSXPCConnection;
@protocol OS_xpc_object;

@interface NSXPCDecoder : NSXPCCoder {
	NSMutableArray *_containers;	// 12 = 0xc
	NSObject<OS_xpc_object> *_oolObjects;	// 16 = 0x10
	NSXPCInterface *_interface;	// 20 = 0x14
	NSString *_replyToSelector;	// 24 = 0x18
	unsigned _genericIndex;	// 28 = 0x1c
	NSMutableArray *_allowedClasses;	// 32 = 0x20
	NSXPCConnection *_connection;	// 36 = 0x24
}
@property(assign) NSXPCConnection *_connection;	// G=0x31b3cca5; S=0x31b3ccb9; @synthesize
@property(readonly, retain) NSMutableArray *allowedClasses;	// G=0x31b3c405; converted property
@property(retain) NSXPCInterface *interface;	// G=0x31b3cc5d; S=0x31b3cc71; @synthesize=_interface
@property(copy) NSString *replyToSelector;	// G=0x31b3cc81; S=0x31b3cc95; @synthesize=_replyToSelector
- (id)__objectStuff:(id)stuff;	// 0x31b3bd19
// declared property getter: - (id)_connection;	// 0x31b3cca5
- (id)_decodeArrayOfObjectsForKey:(id)key;	// 0x31b3c425
- (id)_decodeXPCObjectAtIndex:(id)index;	// 0x31b3b2e5
- (id)_initWithRootXPCObject:(id)rootXPCObject;	// 0x31b3b32d
- (void)_popContainer;	// 0x31b3b261
- (void)_pushContainer:(id)container;	// 0x31b3b281
- (id)_topContainer;	// 0x31b3b2a1
// converted property getter: - (id)allowedClasses;	// 0x31b3c405
- (BOOL)allowsKeyedCoding;	// 0x31b3b721
- (BOOL)containsValueForKey:(id)key;	// 0x31b3bcd5
- (void)dealloc;	// 0x31b3b57d
- (id)debugDescription;	// 0x31b3b661
- (BOOL)decodeBoolForKey:(id)key;	// 0x31b3c7b5
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x31b3cb69
- (double)decodeDoubleForKey:(id)key;	// 0x31b3ca69
- (float)decodeFloatForKey:(id)key;	// 0x31b3c9c9
- (int)decodeInt32ForKey:(id)key;	// 0x31b3c899
- (long long)decodeInt64ForKey:(id)key;	// 0x31b3c929
- (int)decodeIntForKey:(id)key;	// 0x31b3c809
- (int)decodeIntegerForKey:(id)key;	// 0x31b3cb19
- (id)decodeInvocation;	// 0x31b3b755
- (id)decodeObject;	// 0x31b3b741
- (id)decodeObjectForKey:(id)key;	// 0x31b3bd05
- (id)decodeObjectOfClass:(Class)aClass forKey:(id)key;	// 0x31b3bd89
- (id)decodeObjectOfClasses:(id)classes forKey:(id)key;	// 0x31b3bdcd
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x31b3b725
- (id)decodeXPCObjectForKey:(id)key;	// 0x31b3cc09
- (void)finalize;	// 0x31b3b61d
// declared property getter: - (id)interface;	// 0x31b3cc5d
// declared property getter: - (id)replyToSelector;	// 0x31b3cc81
// declared property setter: - (void)setInterface:(id)interface;	// 0x31b3cc71
// declared property setter: - (void)setReplyToSelector:(id)selector;	// 0x31b3cc95
// declared property setter: - (void)set_connection:(id)connection;	// 0x31b3ccb9
@end

