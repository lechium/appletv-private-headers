/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <NSString.h> // Unknown library


@interface NSString (CalendarExtensions)
+ (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation;	// 0x35a8df8d
- (id)appendSlashIfNeeded;	// 0x35a8d471
- (id)quote;	// 0x35a8de05
- (id)removeSlashIfNeeded;	// 0x35a8d41d
- (id)safeFilename;	// 0x35a8d3a5
- (id)searchAndReplaceString:(id)string withString:(id)string2;	// 0x35a8d255
- (id)trimChar:(unsigned short)aChar;	// 0x35a8d229
- (id)trimCommas;	// 0x35a8d149
- (id)trimFinalChar:(unsigned short)aChar;	// 0x35a8d171
- (id)trimFinalComma;	// 0x35a8d09d
- (id)trimFirstChar:(unsigned short)aChar;	// 0x35a8d1dd
- (id)trimFirstComma;	// 0x35a8d0fd
- (id)trimWhiteSpace;	// 0x35a8df45
- (id)unquote;	// 0x35a8dea5
@end

@interface NSString (CalendarPathExtensions)
+ (id)stringWithContentsOfFile:(id)file usingEncoding:(unsigned)encoding;	// 0x35a8dd7d
@end

@interface NSString (CALIDExtensions)
- (id)stringByDecodingSlashes;	// 0x35a8dd3d
- (id)stringByEncodingSlashes;	// 0x35a8dae9
@end

@interface NSString (CALExtensions)
+ (id)ellipsisString;	// 0x35a8cebd
@end

@interface NSString (DAVExtensions)
- (id)stringByURLQuoting;	// 0x35a8ea01
- (id)stringByURLQuotingPaths;	// 0x35a8e9b5
- (id)stringByURLUnquoting;	// 0x35a8ebe1
- (id)stringByXMLUnquoting;	// 0x35a8e589
@end

