/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTLocationManagerNotificationPredictedApplications : RTNotification {

	NSArray* _predictedApplications;

}

@property (nonatomic,readonly) NSArray * predictedApplications;              //@synthesize predictedApplications=_predictedApplications - In the implementation block
-(id)init;
-(id)initWithPredictedApplications:(id)arg1 ;
-(NSArray *)predictedApplications;
@end

