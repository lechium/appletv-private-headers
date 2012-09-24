/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXTextBody : NSObject {
}
+ (int)readAnchorType:(id)type;	// 0x31cbba19
+ (int)readFlowType:(id)type;	// 0x31cbbaf1
+ (void)readFlowType:(id)type textBodyProperties:(id)properties;	// 0x31cbbabd
+ (int)readHorizontalOverflowType:(id)type;	// 0x31d41719
+ (void)readHorizontalOverflowType:(id)type textBodyProperties:(id)properties;	// 0x31dda22d
+ (void)readTextBodyFromXmlNode:(xmlNode *)xmlNode textBody:(id)body drawingState:(id)state;	// 0x31cbb289
+ (void)readTextBodyProperties:(xmlNode *)properties textBodyProperties:(id)properties2 drawingState:(id)state;	// 0x31cbb3f1
+ (void)readVerticalOverflowType:(id)type textBodyProperties:(id)properties;	// 0x31d4041d
+ (void)readWrapType:(id)type textBodyProperties:(id)properties;	// 0x31cc551d
@end
