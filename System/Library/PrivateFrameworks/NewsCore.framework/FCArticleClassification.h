/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FCArticleClassification : NSObject {

	NSString* _articleID;
	NSArray* _topics;

}

@property (nonatomic,copy) NSString * articleID;              //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,copy) NSArray * topics;                  //@synthesize topics=_topics - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(NSArray *)topics;
-(void)setTopics:(NSArray *)arg1 ;
-(id)initWithArticleID:(id)arg1 topics:(id)arg2 ;
@end

