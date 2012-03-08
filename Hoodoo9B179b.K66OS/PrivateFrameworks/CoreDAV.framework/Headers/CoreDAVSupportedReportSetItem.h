/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem {
	NSMutableSet *_supportedReports;	// 24 = 0x18
}
@property(retain) NSMutableSet *supportedReports;	// G=0x30cbabbd; S=0x30cbabd1; @synthesize=_supportedReports
- (id)init;	// 0x30cba8e1
- (void)addSupportedReport:(id)report;	// 0x30cbab21
- (id)copyParseRules;	// 0x30cbaa1d
- (void)dealloc;	// 0x30cba90d
- (id)description;	// 0x30cba959
// declared property setter: - (void)setSupportedReports:(id)reports;	// 0x30cbabd1
// declared property getter: - (id)supportedReports;	// 0x30cbabbd
@end

