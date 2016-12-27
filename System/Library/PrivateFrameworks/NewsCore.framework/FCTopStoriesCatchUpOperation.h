/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCChannelProviding;
@class FCCloudContext, NSDate, NSArray, NSDictionary, NSError;

@interface FCTopStoriesCatchUpOperation : FCOperation {

	FCCloudContext* _context;
	NSDate* _date;
	id<FCChannelProviding> _topStoriesChannel;
	NSArray* _feedItems;
	NSDictionary* _feedContextByFeedID;
	NSError* _error;

}

@property (copy) id<FCChannelProviding> topStoriesChannel;              //@synthesize topStoriesChannel=_topStoriesChannel - In the implementation block
@property (copy) NSArray * feedItems;                                   //@synthesize feedItems=_feedItems - In the implementation block
@property (copy) NSDictionary * feedContextByFeedID;                    //@synthesize feedContextByFeedID=_feedContextByFeedID - In the implementation block
@property (retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSDate * date;                             //@synthesize date=_date - In the implementation block
-(NSDate *)date;
-(FCCloudContext *)context;
-(void)setDate:(NSDate *)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setFeedContextByFeedID:(NSDictionary *)arg1 ;
-(NSDictionary *)feedContextByFeedID;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setFeedItems:(NSArray *)arg1 ;
-(NSArray *)feedItems;
-(id<FCChannelProviding>)topStoriesChannel;
-(void)setTopStoriesChannel:(id<FCChannelProviding>)arg1 ;
-(void)_checkShouldShowTopStoriesWithCompletionHandler:(/*^block*/id)arg1 ;
@end

