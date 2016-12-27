/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface IFIndication : NSObject {

	double _score;
	NSDate* _date;
	NSString* _client;

}

@property (nonatomic,readonly) NSString * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) double score;                   //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) NSDate * date;                  //@synthesize date=_date - In the implementation block
+(id)indicationWithScore:(double)arg1 date:(id)arg2 ;
+(id)indicationWithScore:(double)arg1 date:(id)arg2 client:(id)arg3 ;
-(NSDate *)date;
-(NSString *)client;
-(double)score;
@end

