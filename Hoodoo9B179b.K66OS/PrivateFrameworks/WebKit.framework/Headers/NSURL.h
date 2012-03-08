/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSURL.h> // Unknown library


@interface NSURL (WebDataURL)
+ (id)_web_uniqueWebDataURL;	// 0x3456c219
@end

@interface NSURL (WebNSURLExtras)
+ (id)_web_URLWithData:(id)data;	// 0x34570f39
+ (id)_web_URLWithData:(id)data relativeToURL:(id)url;	// 0x3451ac9d
+ (id)_web_URLWithDataAsString:(id)dataAsString;	// 0x3451df39
+ (id)_web_URLWithDataAsString:(id)dataAsString relativeToURL:(id)url;	// 0x3451df59
+ (id)_web_URLWithUserTypedString:(id)userTypedString;	// 0x34517cfd
+ (id)_web_URLWithUserTypedString:(id)userTypedString relativeToURL:(id)url;	// 0x34517d11
+ (id)uniqueURLWithRelativePart:(id)relativePart;	// 0x3457152d
- (id)_web_URLByRemovingComponentAndSubsequentCharacter:(long)character;	// 0x34571421
- (id)_web_URLByRemovingUserInfo;	// 0x34570e55
- (id)_web_URLByTruncatingOneCharacterBeforeComponent:(long)component;	// 0x34571355
- (const char *)_web_URLCString;	// 0x34570dad
- (id)_web_URLWithLowercasedScheme;	// 0x3451be11
- (id)_web_dataForURLComponentType:(long)urlcomponentType;	// 0x34531675
- (BOOL)_web_hasQuestionMarkOnlyQueryString;	// 0x34571291
- (id)_web_hostData;	// 0x34531609
- (id)_web_hostString;	// 0x34531579
- (BOOL)_web_isEmpty;	// 0x345710a5
- (id)_web_originalData;	// 0x3451bcf5
- (id)_web_originalDataAsString;	// 0x3451d5b1
- (id)_web_schemeData;	// 0x345318d9
- (id)_web_schemeSeparatorWithoutColon;	// 0x345712c1
- (id)_web_userVisibleString;	// 0x3451af1d
- (id)_webkit_URLByRemovingFragment;	// 0x34570e2d
- (id)_webkit_URLByRemovingResourceSpecifier;	// 0x34570e41
- (id)_webkit_canonicalize;	// 0x3451ad95
- (BOOL)_webkit_isFTPDirectoryURL;	// 0x34570eb9
- (BOOL)_webkit_isFileURL;	// 0x34570e91
- (BOOL)_webkit_isJavaScriptURL;	// 0x34570e69
- (id)_webkit_scriptIfJavaScriptURL;	// 0x3451ae59
- (BOOL)_webkit_shouldLoadAsEmptyDocument;	// 0x34570ee1
- (id)_webkit_suggestedFilenameWithMIMEType:(id)mimetype;	// 0x34571525
- (id)_webkit_youTubeURL;	// 0x3452de0d
@end

