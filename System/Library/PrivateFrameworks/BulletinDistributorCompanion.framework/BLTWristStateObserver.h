/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface BLTWristStateObserver : NSObject <MCProfileConnectionObserver> {

	BOOL _isWristDetectDisabled;

}

@property (nonatomic,readonly) BOOL isWristDetectDisabled;              //@synthesize isWristDetectDisabled=_isWristDetectDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_updateWristDetectSetting;
-(BOOL)_wristDetectionEnabledRestriction;
-(BOOL)_wristDetectionDisabledPreference;
-(BOOL)_isWristDetectionDisabled;
-(BOOL)isWristDetectDisabled;
@end

