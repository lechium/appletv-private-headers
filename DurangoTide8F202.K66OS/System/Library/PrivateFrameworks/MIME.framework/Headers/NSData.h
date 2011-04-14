/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSData.h> // Unknown library


@interface NSData (NSDataExtensions)
- (BOOL)mf_immutable;	// 0x34696f61
- (id)mf_subdataWithRange:(NSRange)range;	// 0x34697bc1
@end

@interface NSData (MimeDataEncoding)
- (id)mf_decodeBase64;	// 0x3469e2d5
- (id)mf_decodeBase64InRange:(NSRange *)range;	// 0x3469e2c9
- (id)mf_decodeModifiedBase64;	// 0x3469e2b9
- (id)mf_decodeQuotedPrintableForText:(BOOL)text;	// 0x3469e4d9
- (id)mf_decodeUuencoded;	// 0x3469e455
- (id)mf_encodeBase64;	// 0x3469e421
- (id)mf_encodeBase64HeaderData;	// 0x3469e3f1
- (id)mf_encodeBase64WithoutLineBreaks;	// 0x3469e43d
- (id)mf_encodeModifiedBase64;	// 0x3469e409
@end

@interface NSData (NSDataUtils)
- (id)mf_copyHexString;	// 0x346a0045
- (id)mf_dataByConvertingUnixNewlinesToNetwork;	// 0x346a072d
- (id)mf_locationsOfUnixNewlinesNeedingConversion;	// 0x346a00cd
- (NSRange)mf_rangeOfByteFromSet:(id)set;	// 0x346a0569
- (NSRange)mf_rangeOfByteFromSet:(id)set range:(NSRange)range;	// 0x346a06a9
- (NSRange)mf_rangeOfCString:(const char *)cstring;	// 0x346a05b5
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options;	// 0x346a0601
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options range:(NSRange)range;	// 0x346a03c5
- (NSRange)mf_rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x346a0319
- (NSRange)mf_rangeOfRFC822HeaderData;	// 0x346a064d
- (id)mf_subdataFromIndex:(unsigned)index;	// 0x346a0529
- (id)mf_subdataToIndex:(unsigned)index;	// 0x346a0511
@end

