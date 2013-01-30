/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSData.h> // Unknown library


@interface NSData (NSData)
+ (id)allocWithZone:(NSZone *)zone;	// 0x3250b321
+ (id)data;	// 0x32512079
+ (id)dataWithBytes:(const void *)bytes length:(unsigned)length;	// 0x32522c5d
+ (id)dataWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x3250b2dd
+ (id)dataWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x32512749
+ (id)dataWithContentsOfFile:(id)file;	// 0x3251ae49
+ (id)dataWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x3253576d
+ (id)dataWithContentsOfMappedFile:(id)mappedFile;	// 0x3252aef1
+ (id)dataWithContentsOfURL:(id)url;	// 0x32566fd5
+ (id)dataWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x32567015
+ (id)dataWithData:(id)data;	// 0x32567061
+ (BOOL)supportsSecureCoding;	// 0x32566c79
- (id)initWithBase64Encoding:(id)base64Encoding;	// 0x32511db9
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x325120b9
- (id)initWithBytes:(void *)bytes length:(unsigned)length copy:(BOOL)copy freeWhenDone:(BOOL)done bytesAreVM:(BOOL)vm;	// 0x325670cd
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x3250b369
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x32512795
- (id)initWithCoder:(id)coder;	// 0x32533d8d
- (id)initWithContentsOfFile:(id)file;	// 0x3250cd25
- (id)initWithContentsOfFile:(id)file error:(id *)error;	// 0x32567301
- (id)initWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x325357b9
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x3252af31
- (id)initWithContentsOfMappedFile:(id)mappedFile error:(id *)error;	// 0x325672e1
- (id)initWithContentsOfURL:(id)url;	// 0x3252ad81
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x325670dd
- (id)initWithData:(id)data;	// 0x32511aa5
- (BOOL)_allowsDirectEncoding;	// 0x32566c7d
- (id)_asciiDescription;	// 0x32566b59
- (BOOL)_bytesAreVM;	// 0x32566c81
- (unsigned long)_cfTypeID;	// 0x3250f9b5
- (id)base64Encoding;	// 0x32512131
- (const void *)bytes;	// 0x3256687d
- (Class)classForCoder;	// 0x3254a5b5
- (id)copyWithZone:(NSZone *)zone;	// 0x32512045
- (id)description;	// 0x325668a1
- (void)encodeWithCoder:(id)coder;	// 0x32511261
- (void)getBytes:(void *)bytes;	// 0x32566c85
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x32535cd9
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x32566cfd
- (unsigned)hash;	// 0x32566c3d
- (BOOL)isEqual:(id)equal;	// 0x3250ffe5
- (BOOL)isEqualToData:(id)data;	// 0x32510031
- (unsigned)length;	// 0x32566859
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32511a75
- (NSRange)rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x32567321
- (id)subdataWithRange:(NSRange)range;	// 0x325366b1
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x3250a65d
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically error:(id *)error;	// 0x32566fa9
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x3253feb5
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x3250df31
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x32566ea1
@end

@interface NSData (NSKindOfAdditions)
- (BOOL)isNSData__;	// 0x3251002d
@end

@interface NSData (NSURLExtras)
- (id)_replaceCString:(const char *)string withCString:(const char *)cstring;	// 0x325bf94d
- (id)_web_guessedMIMEType;	// 0x325bf209
- (id)_web_guessedMIMETypeForExtension:(id)extension;	// 0x325bf44d
- (id)_web_guessedMIMETypeForXML;	// 0x325bf0e9
- (id)_web_parseRFC822HeaderFields;	// 0x325bf4d5
@end

@interface NSData (NSDataPortCoding)
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x3265848d
@end
