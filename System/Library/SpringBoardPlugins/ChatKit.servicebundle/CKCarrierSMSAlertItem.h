/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:42:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKAlertItem.h>

@class NSString;

@interface CKCarrierSMSAlertItem : CKAlertItem {

	NSString* _messageBody;
	NSString* _sender;
	/*^block*/id _acknowledgeBlock;

}
-(id)name;
-(id)messageText;
-(void)didDeactivateForReason:(int)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)willShowInAwayItems;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)shouldShowInLockScreen;
-(id)initWithMessageBody:(id)arg1 sender:(id)arg2 acknowledgeBlock:(/*^block*/id)arg3 ;
@end

