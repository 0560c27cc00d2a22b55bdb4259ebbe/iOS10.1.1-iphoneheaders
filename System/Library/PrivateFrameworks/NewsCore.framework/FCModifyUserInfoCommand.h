/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCModifyRecordsCommand.h>

@interface FCModifyUserInfoCommand : FCModifyRecordsCommand
+(id)desiredKeys;
-(id)recordZoneName;
-(id)initWithOnboardingVersion:(id)arg1 feldsparID:(id)arg2 notificationsUserID:(id)arg3 dateLastOpened:(id)arg4 monthlyMeteredCount:(id)arg5 totalMeteredCount:(id)arg6 userStartDate:(id)arg7 ;
-(BOOL)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2 ;
@end

