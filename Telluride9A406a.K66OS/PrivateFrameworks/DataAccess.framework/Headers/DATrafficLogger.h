/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface DATrafficLogger : NSObject {
	NSString *_filename;	// 4 = 0x4
}
+ (BOOL)enabled;	// 0x3617e0d1
- (id)initWithFilename:(id)filename;	// 0x3617e01d
- (void)_ensureCustomLogFile;	// 0x3617ddb5
- (void)dealloc;	// 0x3617e085
- (void)logSnippet:(id)snippet;	// 0x3617e0dd
@end

