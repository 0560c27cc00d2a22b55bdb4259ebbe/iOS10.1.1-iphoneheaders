/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCMutablePersonalizationAggregate <FCPersonalizationAggregate>
@property (assign,nonatomic) double clicks; 
@property (assign,nonatomic) double impressions; 
@property (assign,nonatomic) unsigned long long eventCount; 
@property (assign,nonatomic) double timestamp; 
@required
-(double)timestamp;
-(void)setTimestamp:(double)arg1;
-(void)setImpressions:(double)arg1;
-(void)setEventCount:(unsigned long long)arg1;
-(unsigned long long)eventCount;
-(void)setClicks:(double)arg1;
-(double)clicks;
-(double)impressions;

@end

