/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBRemoteDataProvider.h>

@protocol OS_dispatch_queue, HDFitnessFriendsBBDataProviderDelegate;
@class BBDataProviderConnection, BBDataProviderProxy, NSMutableDictionary, NSObject, NSString;

@interface HDFitnessFriendsInvitationBBDataProvider : NSObject <BBRemoteDataProvider> {

	BBDataProviderConnection* _dataProviderConnection;
	BBDataProviderProxy* _dataProviderProxy;
	NSMutableDictionary* _currentBulletinRequestsByRequestID;
	NSObject*<OS_dispatch_queue> _bulletinQueue;
	int notifyInviteRequestToken;
	int notifyInviteResponseToken;
	int notifyOfInviteToken;
	int notifyOfFakeSignInToken;
	int notifyOfFakeUpgradeToken;
	id<HDFitnessFriendsBBDataProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HDFitnessFriendsBBDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<HDFitnessFriendsBBDataProviderDelegate>)arg1 ;
-(void)dealloc;
-(id<HDFitnessFriendsBBDataProviderDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(id)sortDescriptors;
-(void)_registerForFakeBulletins;
-(void)_showFakeInvitationRequest;
-(void)_showFakeInvitationResponse;
-(void)_notifyOfFakeInvitationRequest;
-(void)_showFakeNeedToSignIn;
-(void)_showFakeNeedToUpgrade;
-(id)_fakeContact;
-(void)_showInvitationRequestFromContact:(id)arg1 ;
-(void)_showInvitationResponseFromContact:(id)arg1 ;
-(void)_notifyOfInvitationFromContact:(id)arg1 ;
-(void)showInviteAttemptNeedToSignInFrom:(id)arg1 ;
-(void)showInviteAttemptNeedToUpgradeFrom:(id)arg1 ;
-(id)sectionIdentifier;
-(id)_queue_bulletinsToOverrideOfType:(id)arg1 forContact:(id)arg2 ;
-(id)_bulletinForInvitationFromContact:(id)arg1 withTitle:(id)arg2 formatString:(id)arg3 ;
-(id)_bulletinForInvitationFromContactUUID:(id)arg1 title:(id)arg2 message:(id)arg3 ;
-(id)_newPrepopulatedBulletinRequest;
-(id)_bulletinForInvitationFromContact:(id)arg1 ;
-(void)_queue_addBulletinRequest:(id)arg1 fromContact:(id)arg2 ;
-(void)_queue_removeBulletinRequestsWithType:(id)arg1 fromContact:(id)arg2 ;
-(void)_showIncompatibleVersionForContact:(id)arg1 title:(id)arg2 formatString:(id)arg3 ;
-(void)_migrateSectionInfo;
-(id)defaultSectionInfo;
-(void)_queue_removeBulletins:(id)arg1 ;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(void)dataProviderDidLoad;
-(void)handleBulletinActionResponse:(id)arg1 ;
-(id)universalSectionIdentifier;
-(id)sectionDisplayName;
-(void)showInviteRequestFrom:(id)arg1 ;
-(void)showInviteAcceptResponseFrom:(id)arg1 ;
-(void)withdrawInviteRequestFrom:(id)arg1 ;
-(void)showVersionTooLowForIncomingInviteFrom:(id)arg1 ;
-(void)showVersionTooLowForOutgoingInviteTo:(id)arg1 ;
-(void)showVersionTooHighForOutgoingInviteTo:(id)arg1 ;
-(void)showErrorAcceptingInviteFrom:(id)arg1 ;
-(void)showMaxNumberOfFriendsError;
@end

