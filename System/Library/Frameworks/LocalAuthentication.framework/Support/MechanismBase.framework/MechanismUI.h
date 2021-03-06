/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MechanismBase/MechanismBase.h>
#import <libobjc.A.dylib/LARemoteUIHost.h>
#import <libobjc.A.dylib/LAUIMechanism.h>

@protocol LARemoteUI;
@class MechanismBase, NSDictionary;

@interface MechanismUI : MechanismBase <LARemoteUIHost, LAUIMechanism> {

	id<LARemoteUI> _remoteUI;
	MechanismBase* _nonUiMechanism;
	MechanismBase* _backgroundMechanism;
	MechanismBase* _fallbackMechanism;
	MechanismBase* _continueMechanism;
	long long _policy;
	NSDictionary* _internalInfo;
	NSDictionary* _policyOptions;
	NSDictionary* _additionalControllerInternalInfo;
	NSDictionary* _eventProcessing;
	NSDictionary* _previousResult;
	BOOL _uiDisappeared;

}
-(void)connectRemoteUI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)disconnectRemoteUI;
-(void)uiEvent:(long long)arg1 options:(id)arg2 ;
-(void)uiSuccessWithResult:(id)arg1 ;
-(void)uiFailureWithError:(id)arg1 ;
-(void)internalInfoWithReply:(/*^block*/id)arg1 ;
-(void)externalizedContextWithReply:(/*^block*/id)arg1 ;
-(void)willFinish;
-(void)finishRunWithResult:(id)arg1 error:(id)arg2 ;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)findMechanismWithEventIdentifier:(long long)arg1 ;
-(void)_showUI;
-(void)_terminateBackgroundMechanismWithResult:(id)arg1 error:(id)arg2 ;
-(void)_connectNonUiMechanism:(id)arg1 withRemoteUi:(id)arg2 ;
-(BOOL)_checkCallerForeground;
-(void)_startBackgroundMechanism;
-(void)_setupMechanismForRemoteViewController:(id)arg1 ;
-(void)_transitionToController:(long long)arg1 internalInfo:(id)arg2 ;
-(id)_nameForRemoteUIController:(long long)arg1 ;
-(id)initWithNonUiMechanism:(id)arg1 eventProcessing:(id)arg2 policy:(long long)arg3 internalInfo:(id)arg4 ;
@end

