/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNGuidanceManager.h>

@class NSMutableArray;

@interface MNDriveGuidanceManager : MNGuidanceManager {

	NSMutableArray* _substeps;
	int _currentContinuePhase;

}
-(int)transportType;
-(id)_nameInfoForContinueSign;
-(BOOL)_hasSubsteps;
-(void)_resetStepState;
-(double)_distanceForSign;
-(void)_updatePrepareForNextStep;
-(BOOL)_updateConsiderContinueAnnouncement:(id)arg1 location:(id)arg2 ;
-(BOOL)_updateConsiderPrepareAnnouncement:(id)arg1 withMatch:(id)arg2 ;
-(BOOL)_updateConsiderSubstepAnnouncement:(id)arg1 location:(id)arg2 ;
-(BOOL)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2 ;
-(const SCD_Struct_MN19*)_announceSettings;
-(int)_continuePhase;
-(id)_nextSubstep;
@end

