/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CPTracing.h"


__attribute__((visibility("hidden")))
@interface CPExportTracing : CPTracing {
@private
	long mExportingOpstat;	// 8 = 0x8
	long mWritingOpstat;	// 12 = 0xc
}
- (id)initWithFilename:(id)filename;	// 0x32a02e55
- (void)dealloc;	// 0x32a02f05
- (void)startExporting;	// 0x32a02ee5
- (void)startWriting;	// 0x32a02ea5
- (void)stopExporting;	// 0x32a02ec5
- (void)stopWriting;	// 0x32a02e85
@end

