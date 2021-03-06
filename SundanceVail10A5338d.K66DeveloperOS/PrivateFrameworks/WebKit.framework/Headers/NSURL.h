/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSURL.h> // Unknown library


@interface NSURL (WebDataURL)
+ (id)_web_uniqueWebDataURL;	// 0x316b4565
@end

@interface NSURL (WebNSURLExtras)
+ (id)_web_URLWithData:(id)data;	// 0x316bf825
+ (id)_web_URLWithData:(id)data relativeToURL:(id)url;	// 0x3165d849
+ (id)_web_URLWithDataAsString:(id)dataAsString;	// 0x3165f6c5
+ (id)_web_URLWithDataAsString:(id)dataAsString relativeToURL:(id)url;	// 0x3165f6e1
+ (id)_web_URLWithUserTypedString:(id)userTypedString;	// 0x3165b7c1
+ (id)_web_URLWithUserTypedString:(id)userTypedString relativeToURL:(id)url;	// 0x3165b7c9
+ (id)uniqueURLWithRelativePart:(id)relativePart;	// 0x316bfad5
- (id)_web_URLByRemovingUserInfo;	// 0x316bf8f5
- (id)_web_URLByTruncatingOneCharacterBeforeComponent:(long)component;	// 0x316bf8dd
- (const char *)_web_URLCString;	// 0x316bf869
- (id)_web_URLWithLowercasedScheme;	// 0x3165da19
- (id)_web_dataForURLComponentType:(long)urlcomponentType;	// 0x31670b11
- (id)_web_hostData;	// 0x31670ab1
- (id)_web_hostString;	// 0x31670a29
- (BOOL)_web_isEmpty;	// 0x316bf82d
- (id)_web_originalData;	// 0x3165d9b1
- (id)_web_originalDataAsString;	// 0x3165f1c5
- (id)_web_schemeData;	// 0x31670b19
- (id)_web_schemeSeparatorWithoutColon;	// 0x316bf9cd
- (id)_web_userVisibleString;	// 0x3165d9ad
- (id)_webkit_URLByRemovingFragment;	// 0x316bf8e5
- (id)_webkit_URLByRemovingResourceSpecifier;	// 0x316bf8ed
- (id)_webkit_URLFromURLOrSchemelessFileURL;	// 0x316bfa65
- (id)_webkit_canonicalize;	// 0x3165d851
- (BOOL)_webkit_isFTPDirectoryURL;	// 0x316bf949
- (BOOL)_webkit_isFileURL;	// 0x316bf921
- (BOOL)_webkit_isJavaScriptURL;	// 0x316bf8f9
- (id)_webkit_scriptIfJavaScriptURL;	// 0x3165d90d
- (BOOL)_webkit_shouldLoadAsEmptyDocument;	// 0x316bf971
- (id)_webkit_suggestedFilenameWithMIMEType:(id)mimetype;	// 0x316bfa5d
- (id)_webkit_youTubeURL;	// 0x3166d855
@end

