/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMUserDataCull : NSObject
+(unsigned long long)maxDeletedAge;
+(BOOL)isTimestampTrustworthy:(unsigned long long)arg1 ;
+(BOOL)isTimestamp:(unsigned long long)arg1 newerThanMaxAgeFromRightNow:(unsigned long long)arg2 ;
+(BOOL)isTimestampNewerThanMaxDeletedAge:(unsigned long long)arg1 ;
@end
