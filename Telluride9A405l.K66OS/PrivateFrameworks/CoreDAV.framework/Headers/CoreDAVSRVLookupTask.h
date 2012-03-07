/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAV-Structs.h"
#import "CoreDAVTask.h"

@class NSArray, NSString;

@interface CoreDAVSRVLookupTask : CoreDAVTask {
	NSString *_serviceString;	// 120 = 0x78
	NSArray *_fetchedRecords;	// 124 = 0x7c
	CFHostRef _host;	// 128 = 0x80
}
@property(retain) NSArray *fetchedRecords;	// G=0x30fefe29; S=0x30fefe3d; @synthesize=_fetchedRecords
@property(assign) CFHostRef host;	// G=0x30fefe61; S=0x30fefe71; @synthesize=_host
@property(retain) NSString *serviceString;	// G=0x30fefdf1; S=0x30fefe05; @synthesize=_serviceString
- (id)initWithServiceString:(id)serviceString;	// 0x30fef541
- (void)dealloc;	// 0x30fef5ed
- (id)description;	// 0x30fef669
// declared property getter: - (id)fetchedRecords;	// 0x30fefe29
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x30fefcd9
// declared property getter: - (CFHostRef)host;	// 0x30fefe61
- (void)performCoreDAVTask;	// 0x30fef765
// declared property getter: - (id)serviceString;	// 0x30fefdf1
// declared property setter: - (void)setFetchedRecords:(id)records;	// 0x30fefe3d
// declared property setter: - (void)setHost:(CFHostRef)host;	// 0x30fefe71
// declared property setter: - (void)setServiceString:(id)string;	// 0x30fefe05
@end
