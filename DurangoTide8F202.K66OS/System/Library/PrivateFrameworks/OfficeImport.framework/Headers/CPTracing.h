/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface CPTracing : NSObject {
@private
	NSString *mFilename;	// 4 = 0x4
}
- (id)initWithFilename:(id)filename;	// 0x31b676e1
- (void)dealloc;	// 0x31b67699
- (void)updateOpstat:(long *)opstat isStarting:(bool)starting;	// 0x31b6746d
- (void)writeHeader;	// 0x31b67475
- (void)writeOpstat:(long *)opstat tracePoint:(long)point filter:(int)filter;	// 0x31b67471
@end

