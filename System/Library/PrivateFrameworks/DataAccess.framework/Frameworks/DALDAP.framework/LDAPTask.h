/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessExpress/DADisableableObject.h>
#import <DALDAP/DATask.h>

@protocol OS_ldap_connection;
@class DATaskManager, NSObject, NSDate, NSString;

@interface LDAPTask : DADisableableObject <DATask> {

	BOOL _isFinished;
	DATaskManager* _taskManager;
	id _delegate;
	NSObject*<OS_ldap_connection> _ldConnection;
	NSDate* _dateConnectionWentOut;

}

@property (assign,nonatomic,__weak) DATaskManager * taskManager;                      //@synthesize taskManager=_taskManager - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_ldap_connection> ldConnection;              //@synthesize ldConnection=_ldConnection - In the implementation block
@property (nonatomic,retain) NSDate * dateConnectionWentOut;                          //@synthesize dateConnectionWentOut=_dateConnectionWentOut - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                         //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,readonly) int numDownloadedElements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(BOOL)isFinished;
-(void)performTask;
-(DATaskManager *)taskManager;
-(long long)taskStatusForError:(id)arg1 ;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2 ;
-(BOOL)shouldHoldPowerAssertion;
-(void)setTaskManager:(DATaskManager *)arg1 ;
-(void)disable;
-(void)setDateConnectionWentOut:(NSDate *)arg1 ;
-(id)daLevelErrorForLDAPError:(int)arg1 ;
-(void)setLdConnection:(NSObject*<OS_ldap_connection>)arg1 ;
-(NSObject*<OS_ldap_connection>)ldConnection;
-(void)_performQuery;
-(NSDate *)dateConnectionWentOut;
-(void)initializeConnection;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)reportStatusWithError:(id)arg1 ;
-(int)numDownloadedElements;
-(void)finishWithError:(id)arg1 ;
@end

