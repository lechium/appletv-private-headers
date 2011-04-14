/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSData.h> // Unknown library

@class NSString;

@interface NSData (FezAdditions)
+ (id)dataWithHexString:(id)hexString;	// 0x312001bd
+ (id)dataWithRandomBytes:(unsigned)randomBytes;	// 0x31200c4d
- (id)hexString;	// 0x311fe85d
- (id)hexStringOfBytes:(char *)bytes withLength:(int)length;	// 0x311fe899
@end

@interface NSData (FezSecurityAdditions)
@property(readonly, assign, nonatomic) NSData *SHA1Data;	// G=0x31203269; 
@property(readonly, assign, nonatomic) NSString *SHA1HexString;	// G=0x3120320d; 
@property(readonly, assign, nonatomic) SecCertificate *certificateFromData;	// G=0x312032cd; 
+ (id)dataWithCertificate:(SecCertificate *)certificate;	// 0x312032fd
- (id)CRAM_MD5DataWithKey:(id)key;	// 0x312030a1
- (id)CRAM_MD5HexStringWithKey:(id)key;	// 0x3120301d
// declared property getter: - (id)SHA1Data;	// 0x31203269
// declared property getter: - (id)SHA1HexString;	// 0x3120320d
// declared property getter: - (SecCertificate *)certificateFromData;	// 0x312032cd
@end

