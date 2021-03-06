/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDSearchQueryResultProcessor.h>

@protocol MDSearchQueryService, OS_dispatch_queue;
@class NSArray, NSXPCConnection, NSObject, NSString, CSSearchQueryContext;

@interface CSSearchQuery : NSObject <MDSearchQueryResultProcessor> {

	BOOL _started;
	BOOL _finished;
	BOOL _cancelled;
	BOOL _fetchesURLs;
	unsigned long long _foundItemCount;
	/*^block*/id _foundItemsHandler;
	/*^block*/id _completionHandler;
	NSArray* _resolvedFetchAttributes;
	id<MDSearchQueryService> _serviceProxy;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _queryString;
	CSSearchQueryContext* _queryContext;

}

@property (nonatomic,readonly) NSArray * fetchAttributes; 
@property (nonatomic,retain) NSArray * resolvedFetchAttributes;                //@synthesize resolvedFetchAttributes=_resolvedFetchAttributes - In the implementation block
@property (retain) id<MDSearchQueryService> serviceProxy;                      //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * queryString;                             //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,retain) CSSearchQueryContext * queryContext;              //@synthesize queryContext=_queryContext - In the implementation block
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (readonly) unsigned long long foundItemCount; 
@property (copy) id foundItemsHandler;                                         //@synthesize foundItemsHandler=_foundItemsHandler - In the implementation block
@property (copy) id completionHandler;                                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (copy) NSArray * protectionClasses; 
+(id)_makeUniqueFetchAttributesWithAttributes:(id)arg1 ;
+(id)_requiredAttributes;
+(id)_makeQueryErrorWithErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 ;
+(id)_attributesForURLs;
+(id)_requiredAttributeSet;
-(id)init;
-(void)cancel;
-(id)description;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)start;
-(BOOL)isCancelled;
-(id)options;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(void)setFoundItemsHandler:(id)arg1 ;
-(unsigned long long)foundItemCount;
-(void)setProtectionClasses:(NSArray *)arg1 ;
-(NSArray *)fetchAttributes;
-(NSArray *)protectionClasses;
-(id)initWithQueryString:(id)arg1 attributes:(id)arg2 ;
-(void)setQueryContext:(CSSearchQueryContext *)arg1 ;
-(id)initWithQueryString:(id)arg1 context:(id)arg2 ;
-(void)didResolveFriendlyAttributeNames:(id)arg1 ;
-(void)didReturnResultsData:(id)arg1 protectionClass:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_makeConnectionIfNecessary;
-(void)setResolvedFetchAttributes:(NSArray *)arg1 ;
-(id)foundItemsHandler;
-(NSArray *)resolvedFetchAttributes;
-(CSSearchQueryContext *)queryContext;
-(id)initWithQueryString:(id)arg1 options:(id)arg2 ;
-(id)bundleIDs;
-(void)setBundleIDs:(id)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(void)didFinishWithError:(id)arg1 ;
-(void)setServiceProxy:(id<MDSearchQueryService>)arg1 ;
-(id<MDSearchQueryService>)serviceProxy;
@end

