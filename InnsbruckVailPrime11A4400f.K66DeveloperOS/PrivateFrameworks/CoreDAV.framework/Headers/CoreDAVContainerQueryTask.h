/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSSet, NSString;
@protocol CoreDAVContainerQueryTaskDelegate;

@interface CoreDAVContainerQueryTask : CoreDAVTask {
	NSSet *_searchTerms;	// 140 = 0x8c
	unsigned _searchLimit;	// 144 = 0x90
	NSString *_appSpecificNamespace;	// 148 = 0x94
	NSString *_appSpecificQueryCommand;	// 152 = 0x98
	NSString *_appSpecificDataProp;	// 156 = 0x9c
	Class _appSpecificDataItemClass;	// 160 = 0xa0
}
@property(assign, nonatomic) id<CoreDAVContainerQueryTaskDelegate> delegate;	// @dynamic
+ (id)_copySearchTermsFromSearchString:(id)searchString;	// 0x30477c45
- (id)initWithSearchString:(id)searchString searchLimit:(unsigned)limit atURL:(id)url appSpecificDataItemClass:(Class)aClass;	// 0x30477f99
- (id)initWithSearchTerms:(id)searchTerms searchLimit:(unsigned)limit atURL:(id)url appSpecificDataItemClass:(Class)aClass;	// 0x30477f95
- (id)_initWithSearchTerms:(id)searchTerms searchLimit:(unsigned)limit atURL:(id)url appSpecificDataItemClass:(Class)aClass;	// 0x30477ff9
- (void)addFiltersToXMLData:(id)xmldata;	// 0x30478115
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x304782b9
- (void)dealloc;	// 0x304780bd
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x30478491
- (id)httpMethod;	// 0x30478109
- (id)requestBody;	// 0x30478159
@end
