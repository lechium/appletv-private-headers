/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonStreamParserState.h"


@interface SBJsonStreamParserStateObjectNeedKey : SBJsonStreamParserState {
}
+ (id)sharedInstance;	// 0x569571
- (id)name;	// 0x5695ad
- (BOOL)needKey;	// 0x569601
- (BOOL)parser:(id)parser shouldAcceptToken:(int)token;	// 0x5695b9
- (void)parser:(id)parser shouldTransitionTo:(int)to;	// 0x5695c5
@end

