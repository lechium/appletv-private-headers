/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXTextBody : NSObject {
}
+ (int)readAnchorType:(id)type;	// 0x329cb7c5
+ (int)readHorizontalOverflowType:(id)type;	// 0x329f9ab5
+ (void)readHorizontalOverflowType:(id)type textBodyProperties:(id)properties;	// 0x32ac6f55
+ (void)readTextBodyFromXmlNode:(xmlNode *)xmlNode textBody:(id)body drawingState:(id)state;	// 0x329cb031
+ (void)readTextBodyProperties:(xmlNode *)properties textBodyProperties:(id)properties2 drawingState:(id)state;	// 0x329cb189
+ (void)readVerticalOverflowType:(id)type textBodyProperties:(id)properties;	// 0x32a2011d
+ (int)readVerticalType:(id)type;	// 0x329cb88d
+ (void)readVerticalType:(id)type textBodyProperties:(id)properties;	// 0x329cb85d
+ (void)readWrapType:(id)type textBodyProperties:(id)properties;	// 0x329d8e49
@end

