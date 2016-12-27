/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString, NSDate;


@protocol _SSURLCompletionMatch <NSObject>
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * userVisibleURLString; 
@property (nonatomic,readonly) long long matchLocation; 
@property (getter=isTopHit,nonatomic,readonly) BOOL topHit; 
@property (getter=isSynthesizedTopHit,nonatomic,readonly) BOOL synthesizedTopHit; 
@property (getter=isTopHitDueToTriggerMatch,nonatomic,readonly) BOOL topHitDueToTriggerMatch; 
@property (nonatomic,readonly) long long visitCount; 
@property (nonatomic,readonly) NSDate * lastVisitTime; 
@required
-(NSURL *)url;
-(NSString *)title;
-(NSString *)userVisibleURLString;
-(long long)visitCount;
-(NSDate *)lastVisitTime;
-(BOOL)isTopHit;
-(long long)matchLocation;
-(BOOL)isSynthesizedTopHit;
-(BOOL)isTopHitDueToTriggerMatch;

@end

