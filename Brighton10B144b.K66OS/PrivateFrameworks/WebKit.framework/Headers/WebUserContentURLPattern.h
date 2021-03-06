/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {
	WebUserContentURLPatternPrivate *_private;	// 4 = 0x4
}
- (id)initWithPatternString:(id)patternString;	// 0x3660330d
- (void)dealloc;	// 0x366034f1
- (id)host;	// 0x3660359d
- (BOOL)isValid;	// 0x36603541
- (BOOL)matchesSubdomains;	// 0x366035d1
- (BOOL)matchesURL:(id)url;	// 0x366035f5
- (id)scheme;	// 0x36603569
@end

