/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDService.h>
@class NSString;


@protocol CDService <NSObject>
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,readonly) BOOL doesPeriodic; 
@property (nonatomic,readonly) BOOL doesPurge; 
@property (nonatomic,readonly) BOOL rootOnly; 
@property (nonatomic,readonly) BOOL doNotQuery; 
@property (nonatomic,readonly) BOOL inFlight; 
@property (nonatomic,readonly) BOOL multiUserOnly; 
@property (nonatomic,readonly) BOOL noQuota; 
@required
-(BOOL)inFlight;
-(void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)serviceCancelPurge:(/*^block*/id)arg1;
-(void)servicePing:(/*^block*/id)arg1;
-(void)serviceNotify:(id)arg1 replyBlock:(/*^block*/id)arg2;
-(void)serviceCallback:(id)arg1 replyBlock:(/*^block*/id)arg2;
-(void)setServiceInvalidationHandler:(/*^block*/id)arg1;
-(BOOL)doesPeriodic;
-(BOOL)doesPurge;
-(BOOL)rootOnly;
-(BOOL)doNotQuery;
-(BOOL)multiUserOnly;
-(BOOL)noQuota;
-(NSString *)ID;

@end


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSSet;

@interface CDService : NSObject <CDService> {

	BOOL _doesPeriodic;
	BOOL _doesPurge;
	BOOL _doNotQuery;
	BOOL _rootOnly;
	BOOL _multiUserOnly;
	BOOL _noQuota;
	BOOL __inFlight;
	BOOL __dead;
	NSString* _ID;
	NSObject*<OS_dispatch_queue> _serviceQueue;
	NSObject*<OS_dispatch_queue> _requestQueue;
	NSSet* _desiredNotifications;
	/*^block*/id _serviceInvalidationHandler;

}

@property (nonatomic,retain) NSString * ID;                                          //@synthesize ID=_ID - In the implementation block
@property (assign,nonatomic) BOOL doesPeriodic;                                      //@synthesize doesPeriodic=_doesPeriodic - In the implementation block
@property (assign,nonatomic) BOOL doesPurge;                                         //@synthesize doesPurge=_doesPurge - In the implementation block
@property (assign,nonatomic) BOOL doNotQuery;                                        //@synthesize doNotQuery=_doNotQuery - In the implementation block
@property (assign,nonatomic) BOOL rootOnly;                                          //@synthesize rootOnly=_rootOnly - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serviceQueue;              //@synthesize serviceQueue=_serviceQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
@property (readonly) NSSet * desiredNotifications;                                   //@synthesize desiredNotifications=_desiredNotifications - In the implementation block
@property (assign,nonatomic) BOOL multiUserOnly;                                     //@synthesize multiUserOnly=_multiUserOnly - In the implementation block
@property (assign,nonatomic) BOOL noQuota;                                           //@synthesize noQuota=_noQuota - In the implementation block
@property (assign,nonatomic) BOOL _inFlight;                                         //@synthesize _inFlight=__inFlight - In the implementation block
@property (assign,nonatomic) BOOL _dead;                                             //@synthesize _dead=__dead - In the implementation block
@property (nonatomic,copy) id serviceInvalidationHandler;                            //@synthesize serviceInvalidationHandler=_serviceInvalidationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL inFlight; 
+(id)serviceWithInfo:(id)arg1 ;
+(id)serviceWithInfo:(id)arg1 endpoint:(id)arg2 ;
+(id)serviceWithInfo:(id)arg1 extension:(id)arg2 ;
-(id)initWithInfo:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)_servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)_servicePurge:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)_servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)_serviceCancelPurge:(/*^block*/id)arg1 ;
-(void)_servicePing:(/*^block*/id)arg1 ;
-(void)_serviceNotify:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)_serviceCallback:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(BOOL)_inFlight;
-(BOOL)inFlight;
-(void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)serviceCancelPurge:(/*^block*/id)arg1 ;
-(void)servicePing:(/*^block*/id)arg1 ;
-(void)serviceNotify:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)serviceCallback:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)setServiceInvalidationHandler:(id)arg1 ;
-(BOOL)doesPeriodic;
-(BOOL)doesPurge;
-(BOOL)rootOnly;
-(BOOL)doNotQuery;
-(BOOL)multiUserOnly;
-(BOOL)noQuota;
-(void)setDoesPeriodic:(BOOL)arg1 ;
-(void)setDoesPurge:(BOOL)arg1 ;
-(void)setDoNotQuery:(BOOL)arg1 ;
-(void)setRootOnly:(BOOL)arg1 ;
-(NSSet *)desiredNotifications;
-(void)setMultiUserOnly:(BOOL)arg1 ;
-(void)setNoQuota:(BOOL)arg1 ;
-(void)set_inFlight:(BOOL)arg1 ;
-(BOOL)_dead;
-(void)set_dead:(BOOL)arg1 ;
-(id)serviceInvalidationHandler;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)serviceQueue;
-(NSString *)ID;
-(void)setID:(NSString *)arg1 ;
-(void)setServiceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

