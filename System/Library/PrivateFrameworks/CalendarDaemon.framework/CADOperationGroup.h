/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ClientConnection;

@interface CADOperationGroup : NSObject {

	ClientConnection* _conn;

}

@property (nonatomic,readonly) ClientConnection * conn;              //@synthesize conn=_conn - In the implementation block
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
+(id)whitelistedBundles;
-(id)initWithClientConnection:(id)arg1 ;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
-(ClientConnection *)conn;
@end
