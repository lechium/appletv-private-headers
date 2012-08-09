/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import "XPCObjects-Structs.h"
#import <NSCoder.h> // Unknown library

@class NSObject, NSArray, NSString;
@protocol OS_xpc_object;

@interface XPCDecoder : NSCoder {
	NSObject<OS_xpc_object> *_encoding;	// 4 = 0x4
	NSObject<OS_xpc_object> *_currentObject;	// 8 = 0x8
	CFDictionaryRef _decodedObjects;	// 12 = 0xc
	CFSetRef _requestedDecodedObjects;	// 16 = 0x10
	NSArray *_allowedClasses;	// 20 = 0x14
	NSString *_errorDescription;	// 24 = 0x18
}
@property(copy, nonatomic) NSString *errorDescription;	// G=0x32132491; S=0x321324a5; @synthesize=_errorDescription
+ (id)rootObjectForEncoding:(id)encoding;	// 0x32131a65
+ (id)rootObjectForEncoding:(id)encoding allowedClasses:(id)classes;	// 0x32131a79
+ (id)rootObjectForEncoding:(id)encoding allowedClasses:(id)classes errorDescription:(id)description;	// 0x32131a9d
- (id)initWithEncoding:(id)encoding;	// 0x32131b4d
- (BOOL)_classIsAllowed:(Class)allowed;	// 0x32132431
- (void)_verifyCurrentObject;	// 0x32131dbd
- (BOOL)allowsKeyedCoding;	// 0x32131db9
- (BOOL)containsValueForKey:(id)key;	// 0x32131e0d
- (void)dealloc;	// 0x32131bd5
- (BOOL)decodeBoolForKey:(id)key;	// 0x321320dd
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x3213221d
- (double)decodeDoubleForKey:(id)key;	// 0x321321d5
- (id)decodeEndpointForKey:(id)key;	// 0x32132269
- (float)decodeFloatForKey:(id)key;	// 0x321321b1
- (int)decodeInt32ForKey:(id)key;	// 0x32132151
- (long long)decodeInt64ForKey:(id)key;	// 0x32132169
- (int)decodeIntForKey:(id)key;	// 0x32132121
- (int)decodeIntegerForKey:(id)key;	// 0x32132139
- (unsigned)decodeMachSendRightForKey:(id)key;	// 0x32132331
- (id)decodeObject;	// 0x32131c6d
- (id)decodeObjectForKey:(id)key;	// 0x32131e59
// declared property getter: - (id)errorDescription;	// 0x32132491
// declared property setter: - (void)setErrorDescription:(id)description;	// 0x321324a5
- (int)versionForClassName:(id)className;	// 0x32132409
@end
