/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVPrincipalItem;

@interface CoreDAVInvertItem : CoreDAVItem {
	CoreDAVPrincipalItem *_principal;	// 24 = 0x18
}
@property(retain) CoreDAVPrincipalItem *principal;	// G=0x30cb4531; S=0x30cb4545; @synthesize=_principal
- (id)init;	// 0x30cb425d
- (id)copyParseRules;	// 0x30cb4435
- (void)dealloc;	// 0x30cb4289
- (id)description;	// 0x30cb4381
// declared property getter: - (id)principal;	// 0x30cb4531
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x30cb4545
- (void)write:(id)write;	// 0x30cb42d5
@end

