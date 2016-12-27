/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class FCFeedDatabase, NSArray, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface FCFeedRequestOperation : FCOperation {

	id<FCContentContext> _context;
	FCFeedDatabase* _feedDatabase;
	NSArray* _feedRequests;
	unsigned long long _maxCount;
	long long _options;
	NSArray* _feedTransformations;
	unsigned long long _expectedNetworkEventCount;
	/*^block*/id _requestCompletionHandler;
	/*^block*/id _requestCompletionHandlerWithInterestToken;
	unsigned long long _networkEventCount;
	NSDictionary* _databaseLookupsByFeedID;
	NSMutableDictionary* _resultFeedResponses;
	NSMutableArray* _resultHeldArticleAndTagRecords;

}

@property (assign,nonatomic) unsigned long long networkEventCount;                         //@synthesize networkEventCount=_networkEventCount - In the implementation block
@property (nonatomic,retain) NSDictionary * databaseLookupsByFeedID;                       //@synthesize databaseLookupsByFeedID=_databaseLookupsByFeedID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resultFeedResponses;                    //@synthesize resultFeedResponses=_resultFeedResponses - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultHeldArticleAndTagRecords;              //@synthesize resultHeldArticleAndTagRecords=_resultHeldArticleAndTagRecords - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FCFeedDatabase * feedDatabase;                                //@synthesize feedDatabase=_feedDatabase - In the implementation block
@property (nonatomic,copy) NSArray * feedRequests;                                         //@synthesize feedRequests=_feedRequests - In the implementation block
@property (assign,nonatomic) unsigned long long maxCount;                                  //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) long long options;                                            //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSArray * feedTransformations;                                  //@synthesize feedTransformations=_feedTransformations - In the implementation block
@property (assign,nonatomic) unsigned long long expectedNetworkEventCount;                 //@synthesize expectedNetworkEventCount=_expectedNetworkEventCount - In the implementation block
@property (nonatomic,copy) id requestCompletionHandler;                                    //@synthesize requestCompletionHandler=_requestCompletionHandler - In the implementation block
@property (nonatomic,copy) id requestCompletionHandlerWithInterestToken;                   //@synthesize requestCompletionHandlerWithInterestToken=_requestCompletionHandlerWithInterestToken - In the implementation block
-(id)init;
-(id<FCContentContext>)context;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(unsigned long long)maxCount;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setFeedRequests:(NSArray *)arg1 ;
-(void)setFeedTransformations:(NSArray *)arg1 ;
-(void)setRequestCompletionHandler:(id)arg1 ;
-(void)setFeedDatabase:(FCFeedDatabase *)arg1 ;
-(NSArray *)feedRequests;
-(void)setResultFeedResponses:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)resultFeedResponses;
-(void)prepareOperation;
-(id)requestCompletionHandler;
-(FCFeedDatabase *)feedDatabase;
-(NSArray *)feedTransformations;
-(void)setExpectedNetworkEventCount:(unsigned long long)arg1 ;
-(void)setDatabaseLookupsByFeedID:(NSDictionary *)arg1 ;
-(void)_gatherAllOrderFeedResponsesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_gatherAllFeedResponsesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_failureResponseForRequest:(id)arg1 error:(id)arg2 ;
-(id)requestCompletionHandlerWithInterestToken;
-(NSMutableArray *)resultHeldArticleAndTagRecords;
-(NSDictionary *)databaseLookupsByFeedID;
-(unsigned long long)networkEventCount;
-(void)setNetworkEventCount:(unsigned long long)arg1 ;
-(unsigned long long)expectedNetworkEventCount;
-(void)setRequestCompletionHandlerWithInterestToken:(id)arg1 ;
-(void)setResultHeldArticleAndTagRecords:(NSMutableArray *)arg1 ;
-(void)setMaxCount:(unsigned long long)arg1 ;
@end

