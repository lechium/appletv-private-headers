/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAStockDeleteCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x32f572b1; S=0x32f57351; 
@property(copy, nonatomic) NSArray *stocks;	// G=0x32f573d1; S=0x32f5744d; 
+ (id)deleteCompleted;	// 0x32f57221
+ (id)deleteCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x32f57265
- (id)encodedClassName;	// 0x32f57215
- (id)groupIdentifier;	// 0x32f57205
// declared property getter: - (id)results;	// 0x32f572b1
// declared property setter: - (void)setResults:(id)results;	// 0x32f57351
// declared property setter: - (void)setStocks:(id)stocks;	// 0x32f5744d
// declared property getter: - (id)stocks;	// 0x32f573d1
@end

