/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonStreamParserState.h"


@interface SBJsonStreamParserStateObjectNeedKey : SBJsonStreamParserState {
}
+ (id)sharedInstance;	// 0x4a8a01
- (id)name;	// 0x4a8a3d
- (BOOL)needKey;	// 0x4a8a91
- (BOOL)parser:(id)parser shouldAcceptToken:(int)token;	// 0x4a8a49
- (void)parser:(id)parser shouldTransitionTo:(int)to;	// 0x4a8a55
@end

