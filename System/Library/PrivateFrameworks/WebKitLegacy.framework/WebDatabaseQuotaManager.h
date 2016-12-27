/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebQuotaManager.h>

@class WebSecurityOrigin;

@interface WebDatabaseQuotaManager : NSObject <WebQuotaManager> {

	WebSecurityOrigin* _origin;

}
-(id)initWithOrigin:(id)arg1 ;
-(unsigned long long)quota;
-(id)origin;
-(unsigned long long)usage;
-(void)setQuota:(unsigned long long)arg1 ;
@end

