/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHXAxis : NSObject {
}
+ (id)chdAxisFromXmlAxisElement:(xmlNode *)xmlAxisElement state:(id)state;	// 0x32a01645
+ (int)chdAxisPositionFromXmlAxisElement:(xmlNode *)xmlAxisElement;	// 0x32a023c1
+ (int)chdCrossesFromXmlAxisElement:(xmlNode *)xmlAxisElement;	// 0x32a02551
+ (int)chdTickLabelPositionFromXmlTickLabelPositionElement:(xmlNode *)xmlTickLabelPositionElement;	// 0x32a02479
+ (int)chdTickMarkFromXmlTickMarkElement:(xmlNode *)xmlTickMarkElement;	// 0x32a20195
+ (Class)chxAxisClassWithXmlAxisElement:(xmlNode *)xmlAxisElement;	// 0x32a01ed1
+ (void)readScalingFromXmlScalingElement:(xmlNode *)xmlScalingElement axis:(id)axis state:(id)state;	// 0x32a02291
@end

