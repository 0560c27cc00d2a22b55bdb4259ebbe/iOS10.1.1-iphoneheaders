/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libMobileGestaltExtensions.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MobileGestaltHelper;
@class NSXPCConnection;

@interface MobileGestaltHelperProxy : NSObject {

	int _error;
	id<MobileGestaltHelper> _helper;
	NSXPCConnection* _connection;

}

@property (readonly) id<MobileGestaltHelper> helper;              //@synthesize helper=_helper - In the implementation block
@property (readonly) NSXPCConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (assign) int error;                                     //@synthesize error=_error - In the implementation block
+(id)proxy;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSXPCConnection *)connection;
-(id<MobileGestaltHelper>)helper;
-(int)error;
-(void)setError:(int)arg1 ;
@end

