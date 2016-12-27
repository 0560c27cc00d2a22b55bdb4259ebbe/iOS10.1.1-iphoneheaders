/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCVersionHelpers : NSObject
+(id)applicationName;
+(id)sharedVersionHelpers;
+(id)applicationVersionString;
+(id)systemVersionString;
-(id)init;
-(long long)integerRepresentationOfShortVersionString:(id)arg1 ;
-(void)updateAppObsolescenceState;
-(BOOL)isAppUpdateRequired;
-(BOOL)isOSUpdateRequired;
-(BOOL)isDeviceAbandoned;
-(long long)applicationVersionNumber;
-(long long)minimumVersionNumber;
-(id)minimumVersionString;
-(id)updateInfos;
-(id)minimumOSVersionStringForUpdate;
-(long long)systemVersionNumber;
-(long long)minimumOSVersionNumberForUpdate;
-(BOOL)isUpdateRequired;
@end

