/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString, FCFeedGroup;

@interface FCArticleListGroupEmittingOperation : FCFeedGroupEmittingOperation {

	/*^block*/id _headlineFilter;
	NSString* _articleList;
	FCFeedGroup* _group;

}

@property (nonatomic,readonly) NSString * articleList;              //@synthesize articleList=_articleList - In the implementation block
@property (nonatomic,readonly) FCFeedGroup * group;                 //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) id headlineFilter;                       //@synthesize headlineFilter=_headlineFilter - In the implementation block
-(FCFeedGroup *)group;
-(void)performOperation;
-(NSString *)articleList;
-(id)initWithContext:(id)arg1 articleList:(id)arg2 group:(id)arg3 ;
-(id)headlineFilter;
-(void)setHeadlineFilter:(id)arg1 ;
@end

