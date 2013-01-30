/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library


@interface SFUCryptoUtils : NSObject {
}
+ (BOOL)checkKey:(id)key againstPassphraseVerifier:(id)verifier;	// 0x32d4e801
+ (id)decodePassphraseHint:(id)hint;	// 0x32d4ed7d
+ (id)encodePassphraseHint:(id)hint;	// 0x32d4ed69
+ (id)generatePassphraseVerifierForKey:(id)key;	// 0x32d4e735
+ (BOOL)generateRandomDataInBuffer:(char *)buffer length:(unsigned long)length;	// 0x32d4e6c5
+ (BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)passphraseVerifier;	// 0x32d4ea85
+ (unsigned)iterationCountFromPassphraseVerifier:(id)passphraseVerifier;	// 0x32d4e739
+ (unsigned)ivLengthForKey:(id)key;	// 0x32d4e711
+ (id)newBufferedInputStreamForDecryptingFile:(id)decryptingFile key:(id)key isDeflated:(BOOL)deflated zipStream:(id *)stream;	// 0x32d4eac9
+ (id)newBufferedInputStreamForDecryptingZippedBundle:(id)decryptingZippedBundle key:(id)key zipArchive:(id)archive isDeflated:(BOOL)deflated zipStream:(id *)stream;	// 0x32d4ec11
+ (id)sha1HashFromStorage:(id)storage;	// 0x32d4ef91
+ (id)sha256HashFromData:(id)data;	// 0x32d4edf9
+ (id)sha256HashFromStorage:(id)storage;	// 0x32d4ee91
+ (id)sha256HashFromString:(id)string;	// 0x32d4ef5d
@end
