/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class KNPlaybackSession;

@interface KNAnimationAnalyticsLogger : NSObject {

	KNPlaybackSession* _session;
	BOOL _isShowcast;

}

@property (nonatomic,readonly) BOOL isShowcast;                      //@synthesize isShowcast=_isShowcast - In the implementation block
@property (nonatomic,readonly) BOOL shouldLogAnalytics; 
+(BOOL)logAnalyticsWithPlaybackSession:(id)arg1 isShowcast:(BOOL)arg2 ;
-(id)initWithPlaybackSession:(id)arg1 isShowcast:(BOOL)arg2 ;
-(BOOL)logAnalytics;
-(BOOL)shouldLogAnalytics;
-(void)p_logAnimationAnalyticsValue:(long long)arg1 forKey:(id)arg2 isDistribution:(BOOL)arg3 aslmsg:(asl_object_sRef)arg4 ;
-(BOOL)isShowcast;
-(id)init;
-(void)dealloc;
@end

