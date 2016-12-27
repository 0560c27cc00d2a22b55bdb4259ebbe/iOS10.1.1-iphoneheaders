/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreInterest/CoreInterest-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSArray;

@interface IFFeatureVector : NSObject <NSCopying> {

	NSDate* _date;
	double _interval;
	long long _interactionType;
	NSArray* _features;

}

@property (readonly) NSDate * date;                          //@synthesize date=_date - In the implementation block
@property (readonly) double interval;                        //@synthesize interval=_interval - In the implementation block
@property (readonly) long long interactionType;              //@synthesize interactionType=_interactionType - In the implementation block
@property (copy,readonly) NSArray * features;                //@synthesize features=_features - In the implementation block
+(id)featureVectorWithDate:(id)arg1 interval:(double)arg2 interactionType:(long long)arg3 features:(id)arg4 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)interactionType;
-(double)interval;
-(NSArray *)features;
-(id)initWithDate:(id)arg1 interval:(double)arg2 interactionType:(long long)arg3 features:(id)arg4 ;
@end
