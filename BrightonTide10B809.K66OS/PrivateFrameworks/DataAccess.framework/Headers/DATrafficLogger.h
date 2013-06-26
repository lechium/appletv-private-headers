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
+ (BOOL)enabled;	// 0x33974045
- (id)initWithFilename:(id)filename;	// 0x33973f91
- (void)_ensureCustomLogFile;	// 0x33973d0d
- (void)dealloc;	// 0x33973ff9
- (void)logSnippet:(id)snippet;	// 0x33974051
- (void)slurpAndRemoveLookasideFile:(id)file prefixString:(id)string suffixString:(id)string3;	// 0x33974105
@end
