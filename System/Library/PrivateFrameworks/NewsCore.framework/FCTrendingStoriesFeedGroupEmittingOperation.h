/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCTrendingStoriesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation {

	long long _desiredArticlesCount;

}

@property (assign,nonatomic) long long desiredArticlesCount;              //@synthesize desiredArticlesCount=_desiredArticlesCount - In the implementation block
-(void)performOperation;
-(long long)desiredArticlesCount;
-(void)setDesiredArticlesCount:(long long)arg1 ;
-(id)_filterTrendingHeadlines:(id)arg1 ;
@end

