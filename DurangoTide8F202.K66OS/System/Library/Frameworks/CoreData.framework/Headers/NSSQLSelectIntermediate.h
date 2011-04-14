/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSSQLEntity, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLSelectIntermediate : NSSQLIntermediate {
@private
	NSSQLEntity *_entity;	// 8 = 0x8
	NSString *_entityAlias;	// 12 = 0xc
	NSString *_correlationTarget;	// 16 = 0x10
	NSArray *_fetchColumns;	// 20 = 0x14
	BOOL _useDistinct;	// 24 = 0x18
	NSString *_columnAlias;	// 28 = 0x1c
	BOOL _isCount;	// 32 = 0x20
}
- (id)initForCorrelationTarget:(id)correlationTarget alias:(id)alias fetchColumns:(id)columns inScope:(id)scope;	// 0x331902c9
- (id)initWithEntity:(id)entity alias:(id)alias fetchColumns:(id)columns inScope:(id)scope;	// 0x330d23e5
- (void)dealloc;	// 0x330d48c9
- (id)generateSQLStringInContext:(id)context;	// 0x330d2a45
- (BOOL)isSelectTargetScoped;	// 0x33190211
- (BOOL)onlyFetchesAggregates;	// 0x33190215
- (void)setColumnAlias:(id)alias;	// 0x33190289
- (void)setFetchColumns:(id)columns;	// 0x33190249
- (void)setFetchEntity:(id)entity;	// 0x33190229
- (void)setIsCount:(BOOL)count;	// 0x33190239
- (void)setUseDistinct:(BOOL)distinct;	// 0x33190219
@end

