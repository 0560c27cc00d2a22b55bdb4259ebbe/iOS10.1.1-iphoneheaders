/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BKSAbstractDefaults.h>

@class BKSLockdownDefaults, BKSIAPDefaults, BKSPersistentConnectionDefaults, BKSSpringBoardDefaults;

@interface BKSExternalDefaults : BKSAbstractDefaults {

	BKSLockdownDefaults* _lazy_lockdownDefaults;
	BKSIAPDefaults* _lazy_iapDefaults;
	BKSPersistentConnectionDefaults* _lazy_persistentConnectionDefaults;
	BKSSpringBoardDefaults* _lazy_springBoardDefaults;

}

@property (nonatomic,retain,readonly) BKSLockdownDefaults * lockdownDefaults; 
@property (nonatomic,retain,readonly) BKSIAPDefaults * iapDefaults; 
@property (nonatomic,retain,readonly) BKSPersistentConnectionDefaults * persistentConnectionDefaults; 
@property (nonatomic,retain,readonly) BKSSpringBoardDefaults * springBoardDefaults; 
-(BKSIAPDefaults *)iapDefaults;
-(BKSLockdownDefaults *)lockdownDefaults;
-(BKSPersistentConnectionDefaults *)persistentConnectionDefaults;
-(BKSSpringBoardDefaults *)springBoardDefaults;
-(void)dealloc;
@end

