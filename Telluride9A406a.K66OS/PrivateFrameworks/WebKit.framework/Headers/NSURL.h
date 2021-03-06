/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSURL.h> // Unknown library


@interface NSURL (WebDataURL)
+ (id)_web_uniqueWebDataURL;	// 0x302ff225
@end

@interface NSURL (WebNSURLExtras)
+ (id)_web_URLWithData:(id)data;	// 0x30303f45
+ (id)_web_URLWithData:(id)data relativeToURL:(id)url;	// 0x302add2d
+ (id)_web_URLWithDataAsString:(id)dataAsString;	// 0x302b0fc9
+ (id)_web_URLWithDataAsString:(id)dataAsString relativeToURL:(id)url;	// 0x302b0fe9
+ (id)_web_URLWithUserTypedString:(id)userTypedString;	// 0x302aad8d
+ (id)_web_URLWithUserTypedString:(id)userTypedString relativeToURL:(id)url;	// 0x302aada1
+ (id)uniqueURLWithRelativePart:(id)relativePart;	// 0x30304539
- (id)_web_URLByRemovingComponentAndSubsequentCharacter:(long)character;	// 0x3030442d
- (id)_web_URLByRemovingUserInfo;	// 0x30303e61
- (id)_web_URLByTruncatingOneCharacterBeforeComponent:(long)component;	// 0x30304361
- (const char *)_web_URLCString;	// 0x30303db9
- (id)_web_URLWithLowercasedScheme;	// 0x302aeea1
- (id)_web_dataForURLComponentType:(long)urlcomponentType;	// 0x302c467d
- (BOOL)_web_hasQuestionMarkOnlyQueryString;	// 0x3030429d
- (id)_web_hostData;	// 0x302c4611
- (id)_web_hostString;	// 0x302c4581
- (BOOL)_web_isEmpty;	// 0x303040b1
- (id)_web_originalData;	// 0x302aed85
- (id)_web_originalDataAsString;	// 0x302b0641
- (id)_web_schemeData;	// 0x302c48e1
- (id)_web_schemeSeparatorWithoutColon;	// 0x303042cd
- (id)_web_userVisibleString;	// 0x302adfad
- (id)_webkit_URLByRemovingFragment;	// 0x30303e39
- (id)_webkit_URLByRemovingResourceSpecifier;	// 0x30303e4d
- (id)_webkit_canonicalize;	// 0x302ade25
- (BOOL)_webkit_isFTPDirectoryURL;	// 0x30303ec5
- (BOOL)_webkit_isFileURL;	// 0x30303e9d
- (BOOL)_webkit_isJavaScriptURL;	// 0x30303e75
- (id)_webkit_scriptIfJavaScriptURL;	// 0x302adee9
- (BOOL)_webkit_shouldLoadAsEmptyDocument;	// 0x30303eed
- (id)_webkit_suggestedFilenameWithMIMEType:(id)mimetype;	// 0x30304531
- (id)_webkit_youTubeURL;	// 0x302c0e9d
@end

