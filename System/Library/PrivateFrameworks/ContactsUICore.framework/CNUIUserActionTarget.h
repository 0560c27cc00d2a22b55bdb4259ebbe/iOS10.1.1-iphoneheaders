/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNTUCallProvider;
@class NSString;

@interface CNUIUserActionTarget : NSObject {

	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _teamIdentifier;
	NSString* _actionType;
	id<CNTUCallProvider> _callProvider;

}

@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * teamIdentifier;                //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * actionType;                //@synthesize actionType=_actionType - In the implementation block
@property (retain) id<CNTUCallProvider> callProvider;                //@synthesize callProvider=_callProvider - In the implementation block
+(id)descriptorForRequiredKeysForActionDiscovering;
+(id)targetForEmailWithMail;
+(id)targetForVoiceWithTelephony;
+(id)targetForVoiceWithFaceTime;
+(id)targetForVoiceWithSkype;
+(id)targetForVideoWithFaceTime;
+(id)targetForVideoWithSkype;
+(id)targetForTextWithMessages;
+(id)targetForTextWithSkype;
+(id)targetForVoiceWithCallProvider:(id)arg1 ;
+(id)targetForVideoWithCallProvider:(id)arg1 ;
+(id)targetForStartAudioCallIntentWithAppProxy:(id)arg1 ;
+(id)targetForStartVideoCallIntentWithAppProxy:(id)arg1 ;
+(id)targetForSendMessageIntentWithAppProxy:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(NSString *)actionType;
-(id<CNTUCallProvider>)callProvider;
-(NSString *)teamIdentifier;
-(id)actionsForEmailAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(id)actionsForSocialProfiles:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(id)actionsForInstantMessageAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3 ;
-(id)actionsForContact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)initWithName:(id)arg1 bundleIdentifier:(id)arg2 teamIdentifier:(id)arg3 ;
-(void)setCallProvider:(id<CNTUCallProvider>)arg1 ;
@end

