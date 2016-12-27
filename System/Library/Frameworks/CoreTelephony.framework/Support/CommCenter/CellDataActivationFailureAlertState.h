/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@class NSLock;

@interface CellDataActivationFailureAlertState : NSObject {

	NSLock* fLockMain;
	int fAction;
	CFSharedRef<const __CFData>* fDataPlanCsn;
	CFSharedRef<const __CFString>* fDataPlanUrl;
	CFSharedRef<const __CFString>* fDataPlanIccid;
	BOOL _scheduled;

}

@property (assign) BOOL scheduled;              //@synthesize scheduled=_scheduled - In the implementation block
@property (assign) int action; 
+(id)sharedInstance;
-(void)appInit;
-(BOOL)trylockMain;
-(void)unlockMain;
-(void)lockScheduled;
-(void)unlockScheduled;
-(void)setDataPlanCsn:(CFSharedRef<const __CFData>*)arg1 ;
-(void)setDataPlanUrl:(CFSharedRef<const __CFString>*)arg1 ;
-(void)setDataPlanIccid:(CFSharedRef<const __CFString>*)arg1 ;
-(void)handleActionResponse;
-(id)init;
-(void)dealloc;
-(int)action;
-(void)setAction:(int)arg1 ;
-(BOOL)scheduled;
-(void)setScheduled:(BOOL)arg1 ;
@end

