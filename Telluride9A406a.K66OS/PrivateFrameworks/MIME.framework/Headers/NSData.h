/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSData.h> // Unknown library
#import "MIME-Structs.h"


@interface NSData (NSDataExtensions)
- (BOOL)mf_immutable;	// 0x3258da51
- (id)mf_subdataWithRange:(NSRange)range;	// 0x3258da89
@end

@interface NSData (MimeDataEncoding)
- (id)mf_decodeBase64;	// 0x3259523d
- (id)mf_decodeBase64InRange:(NSRange *)range;	// 0x32595245
- (id)mf_decodeModifiedBase64;	// 0x3259524d
- (id)mf_decodeQuotedPrintableForText:(BOOL)text;	// 0x32594ea9
- (id)mf_decodeUuencoded;	// 0x32594f49
- (id)mf_encodeBase64;	// 0x325950c1
- (id)mf_encodeBase64HeaderData;	// 0x325950d9
- (id)mf_encodeBase64WithoutLineBreaks;	// 0x325950b5
- (id)mf_encodeModifiedBase64;	// 0x325950cd
@end

@interface NSData (NSDataUtils)
- (id)mf_copyHexString;	// 0x325971c5
- (id)mf_dataByConvertingUnixNewlinesToNetwork;	// 0x325977b9
- (id)mf_locationsOfUnixNewlinesNeedingConversion;	// 0x3259728d
- (NSRange)mf_rangeOfByteFromSet:(id)set;	// 0x32597685
- (NSRange)mf_rangeOfByteFromSet:(id)set range:(NSRange)range;	// 0x3259713d
- (NSRange)mf_rangeOfCString:(const char *)cstring;	// 0x325976d1
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options;	// 0x32597719
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options range:(NSRange)range;	// 0x32597761
- (NSRange)mf_rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x32597631
- (NSRange)mf_rangeOfRFC822HeaderData;	// 0x325975c9
- (id)mf_subdataFromIndex:(unsigned)index;	// 0x32597109
- (id)mf_subdataToIndex:(unsigned)index;	// 0x325970f5
@end

@interface NSData (DigestUtilities)
- (id)mf_MD5Digest;	// 0x325b44f9
@end

