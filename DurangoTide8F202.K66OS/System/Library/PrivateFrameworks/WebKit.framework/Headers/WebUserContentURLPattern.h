/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {
@private
	WebUserContentURLPatternPrivate *_private;	// 4 = 0x4
}
- (id)initWithPatternString:(id)patternString;	// 0x32c878a1
- (void)dealloc;	// 0x32c876c1
- (id)host;	// 0x32c87841
- (BOOL)isValid;	// 0x32c87649
- (BOOL)matchesSubdomains;	// 0x32c8766d
- (BOOL)matchesURL:(id)url;	// 0x32c87711
- (id)scheme;	// 0x32c87871
@end

