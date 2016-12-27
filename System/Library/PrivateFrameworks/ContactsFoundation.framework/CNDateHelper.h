/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNDateHelper : NSObject
+(id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7 ;
+(long long)gregorianYearInGMTFromDate:(id)arg1 ;
+(id)gregorianCalendarInGMT;
+(BOOL)isComponentsEmpty:(id)arg1 ;
+(long long)currentGregorianYearInGMT;
+(long long)gregorianYearFromDate:(id)arg1 ;
+(id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 ;
+(id)componentsFromDate:(id)arg1 ;
+(id)componentsForJanuary1WithYear:(long long)arg1 ;
+(id)gregorianCalendar;
@end

