/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FCFeedTransformationItem <NSObject,FCFeedPersonalizingArticle>
@property (nonatomic,copy,readonly) NSString * feedID; 
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSString * clusterID; 
@property (nonatomic,readonly) unsigned long long contentType; 
@property (nonatomic,readonly) unsigned long long order; 
@property (getter=isPaid,nonatomic,readonly) BOOL paid; 
@property (nonatomic,copy,readonly) NSString * sourceChannelID; 
@property (nonatomic,readonly) unsigned long long publishDateMilliseconds; 
@property (nonatomic,readonly) unsigned long long feedHalfLifeMilliseconds; 
@property (nonatomic,readonly) double globalUserFeedback; 
@property (getter=isFromBlockedStorefront,nonatomic,readonly) BOOL fromBlockedStorefront; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,readonly) long long minimumNewsVersion; 
@property (nonatomic,readonly) unsigned long long articleRecordModificationDateMilliseconds; 
@required
-(unsigned long long)order;
-(BOOL)isExplicitContent;
-(unsigned long long)contentType;
-(NSString *)articleID;
-(NSString *)feedID;
-(unsigned long long)publishDateMilliseconds;
-(NSString *)sourceChannelID;
-(NSString *)clusterID;
-(long long)minimumNewsVersion;
-(BOOL)isPaid;
-(unsigned long long)feedHalfLifeMilliseconds;
-(double)globalUserFeedback;
-(unsigned long long)articleRecordModificationDateMilliseconds;
-(BOOL)isFromBlockedStorefront;

@end

