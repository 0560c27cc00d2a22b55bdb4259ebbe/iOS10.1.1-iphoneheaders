/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSArray, NSDictionary;

@interface FCArticleListHeadlinesOperation : FCOperation {

	id<FCContentContext> _context;
	NSArray* _articleListIDs;
	double _maximumCachedAgeForArticleList;
	/*^block*/id _headlinesCompletionHandler;
	NSDictionary* _resultHeadlinesByArticleListID;

}

@property (nonatomic,retain) NSDictionary * resultHeadlinesByArticleListID;              //@synthesize resultHeadlinesByArticleListID=_resultHeadlinesByArticleListID - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSArray * articleListIDs;                                     //@synthesize articleListIDs=_articleListIDs - In the implementation block
@property (assign) double maximumCachedAgeForArticleList;                                //@synthesize maximumCachedAgeForArticleList=_maximumCachedAgeForArticleList - In the implementation block
@property (nonatomic,copy) id headlinesCompletionHandler;                                //@synthesize headlinesCompletionHandler=_headlinesCompletionHandler - In the implementation block
-(id)init;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setHeadlinesCompletionHandler:(id)arg1 ;
-(void)setArticleListIDs:(NSArray *)arg1 ;
-(void)setMaximumCachedAgeForArticleList:(double)arg1 ;
-(NSArray *)articleListIDs;
-(double)maximumCachedAgeForArticleList;
-(void)setResultHeadlinesByArticleListID:(NSDictionary *)arg1 ;
-(id)headlinesCompletionHandler;
-(NSDictionary *)resultHeadlinesByArticleListID;
@end

