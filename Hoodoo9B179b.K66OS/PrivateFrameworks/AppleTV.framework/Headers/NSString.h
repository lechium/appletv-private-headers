/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSString.h> // Unknown library


@interface NSString (AXPriv)
- (id)accessibilityLabel;	// 0x3023f949
@end

@interface NSString (BRMetadataLinesLayer)
- (BOOL)isEmpty;	// 0x302b13b1
@end

@interface NSString (FeatureManagerAdditions)
- (BOOL)isApplianceBundleIdentifier;	// 0x303294e9
@end

@interface NSString (BRStringUtilities)
+ (id)hexStringWithBytes:(const char *)bytes length:(unsigned)length;	// 0x303731d5
+ (id)timeStringForSeconds:(double)seconds;	// 0x30373255
+ (id)timeStringWithLabelForSeconds:(double)seconds;	// 0x30373391
- (id)copyUTF8StringOfLength:(unsigned)length;	// 0x30373e19
- (int)customCompare:(id)compare;	// 0x30373461
- (id)fileSafeString;	// 0x30373569
- (BOOL)hasCaseInsensitivePrefix:(id)prefix;	// 0x30373619
- (unsigned long)hexValue;	// 0x303734f1
- (id)md5String;	// 0x30373cf1
- (id)sshA1String;	// 0x30373d55
- (id)stringByDecodingFriendlyHTMLCodes;	// 0x303738e5
- (id)stringByRemovingCharactersInSet:(id)set;	// 0x303736a5
- (id)stringByReplacingCharactersInSet:(id)set withString:(id)string;	// 0x30373785
- (id)stringByURLEncoding;	// 0x30373dd1
- (id)subStringAfter:(int)after;	// 0x30373671
- (id)subStringBefore:(int)before;	// 0x3037365d
@end

@interface NSString (ISAdditions)
- (id)copyUTF8StringOfLength:(unsigned)length;	// 0x30430e89
@end

@interface NSString (NSString_SBJsonParsing)
- (id)JSONValue;	// 0x304ff571
@end

@interface NSString (URLDecode)
- (id)urlDecodeByReplacingPercentEscapesUsingEncoding;	// 0x305242e5
@end

@interface NSString (URLEncode)
- (id)urlEncodeByReplacingPercentEscapesUsingEncoding;	// 0x30541919
@end

@interface NSString (AOSStringAdditions)
- (id)stringByURLQuoting;	// 0x30483955
- (id)stringByURLQuotingWithCharactersToEscape:(id)escape;	// 0x30483b6d
@end

