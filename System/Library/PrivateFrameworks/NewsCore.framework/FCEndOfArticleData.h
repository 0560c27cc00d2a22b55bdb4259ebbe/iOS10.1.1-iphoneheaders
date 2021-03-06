/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FCStreamingResults;

@interface FCEndOfArticleData : NSObject {

	NSArray* _allTopics;
	FCStreamingResults* _publisherHeadlines;
	FCStreamingResults* _relatedHeadlines;

}

@property (nonatomic,retain) NSArray * allTopics;                                  //@synthesize allTopics=_allTopics - In the implementation block
@property (nonatomic,retain) FCStreamingResults * publisherHeadlines;              //@synthesize publisherHeadlines=_publisherHeadlines - In the implementation block
@property (nonatomic,retain) FCStreamingResults * relatedHeadlines;                //@synthesize relatedHeadlines=_relatedHeadlines - In the implementation block
-(NSArray *)allTopics;
-(FCStreamingResults *)publisherHeadlines;
-(FCStreamingResults *)relatedHeadlines;
-(void)setAllTopics:(NSArray *)arg1 ;
-(void)setPublisherHeadlines:(FCStreamingResults *)arg1 ;
-(void)setRelatedHeadlines:(FCStreamingResults *)arg1 ;
@end

