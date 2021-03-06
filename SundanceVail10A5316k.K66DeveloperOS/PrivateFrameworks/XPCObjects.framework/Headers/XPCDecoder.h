/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <NSCoder.h> // Unknown library
#import "XPCObjects-Structs.h"

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
@property(copy, nonatomic) NSString *errorDescription;	// G=0x345da701; S=0x345da715; @synthesize=_errorDescription
+ (id)rootObjectForEncoding:(id)encoding;	// 0x345d9cd5
+ (id)rootObjectForEncoding:(id)encoding allowedClasses:(id)classes;	// 0x345d9ce9
+ (id)rootObjectForEncoding:(id)encoding allowedClasses:(id)classes errorDescription:(id)description;	// 0x345d9d0d
- (id)initWithEncoding:(id)encoding;	// 0x345d9dbd
- (BOOL)_classIsAllowed:(Class)allowed;	// 0x345da6a1
- (void)_verifyCurrentObject;	// 0x345da02d
- (BOOL)allowsKeyedCoding;	// 0x345da029
- (BOOL)containsValueForKey:(id)key;	// 0x345da07d
- (void)dealloc;	// 0x345d9e45
- (BOOL)decodeBoolForKey:(id)key;	// 0x345da34d
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x345da48d
- (double)decodeDoubleForKey:(id)key;	// 0x345da445
- (id)decodeEndpointForKey:(id)key;	// 0x345da4d9
- (float)decodeFloatForKey:(id)key;	// 0x345da421
- (int)decodeInt32ForKey:(id)key;	// 0x345da3c1
- (long long)decodeInt64ForKey:(id)key;	// 0x345da3d9
- (int)decodeIntForKey:(id)key;	// 0x345da391
- (int)decodeIntegerForKey:(id)key;	// 0x345da3a9
- (unsigned)decodeMachSendRightForKey:(id)key;	// 0x345da5a1
- (id)decodeObject;	// 0x345d9edd
- (id)decodeObjectForKey:(id)key;	// 0x345da0c9
// declared property getter: - (id)errorDescription;	// 0x345da701
// declared property setter: - (void)setErrorDescription:(id)description;	// 0x345da715
- (int)versionForClassName:(id)className;	// 0x345da679
@end

